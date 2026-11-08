// House of the Dead: Overkill specific fixes.
#include "ppc.h"
#include "hle.h"
#include <cstdlib>

// The streaming loader's job (0x802550D0, on its worker thread) calls DVDReadAsyncPrio and only then stores
// "read in flight" (r13-0x18E8 = 1); the read's callback (0x80255300) clears it. When the AX interrupt wakes
// the HOME menu sound thread inside DVDReadAsyncPrio, the worker goes to the back of the priority-16 queue and
// the main thread runs its frame first (100 ms and more while a level loads). A read that completes in that
// time is cleared before it is set, the job then sees a read in flight forever and loading stops (black
// screen, or a hang when a sound stream closes and waits for its reads). On the console the disc is slow
// enough that this never happens. Set the flag before the call instead (and clear it when the call fails).
void hle_wrap_DVDReadAsyncPrio(Ctx* c, GuestFn orig) {
    static const bool off = getenv("HOTD_NOWRAP") != nullptr;
    const bool loader = !off && c->lr == 0x80255270u;
    const uint32_t busy = c->r[13] - 0x18E8u;
    if (loader) W32(busy, 1);
    orig(c);
    if (loader && c->r[3] == 0) W32(busy, 0);
}
