// House of the Dead: Overkill specific fixes.
#include "ppc.h"
#include "hle.h"
#include <atomic>
#include <cstdlib>

extern std::atomic<int> g_ios_hold;

// The streaming loader's job (0x802550D0, on its worker thread) calls DVDReadAsyncPrio and only then stores
// "read in flight" (r13-0x18E8 = 1, at 0x802552C0); the read's callback (0x80255300) clears it. When the AX
// interrupt wakes the HOME menu sound thread inside DVDReadAsyncPrio, the worker goes to the back of the
// priority-16 queue and the main thread runs its frame first (100 ms and more while a level loads). A read that
// completes in that time is cleared before it is set; the flag then stays set and loading stops (black screen,
// or a hang when a sound stream closes and waits for its reads). On the console the disc is slow enough that
// this never happens. Hold the read's completion until the call has returned: the worker stores the flag in
// the next few instructions, before it reaches another point where an interrupt can be delivered.
void hle_wrap_DVDReadAsyncPrio(Ctx* c, GuestFn orig) {
    static const bool off = getenv("HOTD_NOWRAP") != nullptr;
    const bool loader = !off && c->lr == 0x80255270u;
    if (loader) g_ios_hold++;
    orig(c);
    if (loader) g_ios_hold--;
}
