# The House of the Dead: Overkill (RHOE8P, Wii disc, NTSC-U) - native recomp notes

Same recompiler and runtime as Zack & Wiki, TARGET: Terror, Lost in Shadow and Martian Panic.

## Source
- main.dol sha1 4b30ec719f1fd7352e18757f38cad2f96952af73, entry 0x8000403C; RVL SDK Aug 2007 / OS Jan 30 2008
  (IOS33), Blitz Games' Babel engine (Headstrong Games), HOME Button menu, THP movies. No REL modules, no symbols.

## Naming
- `dtk dol split`: 17,302 functions, 216 jump tables. xmatch (`tools/xmatch.py`) against Martian Panic (real names
  from its shipped ELF), My Life as a King 2, TARGET: Terror, Zack & Wiki, Geometry Wars and Lost in Shadow names
  ~2,250 SDK functions. By hand: SCGetAspectRatio (0x80353A74, same code as Martian Panic's) and the five WPAD
  tail-call thunks into WUD at 0x803888B0..C0 (WPADStartSimpleSync, WPADStopSimpleSync, WPADSetSimpleSyncCallback,
  WPADRegisterAllocator, WPADGetStatus).

## game.h constants
- __AXDSPResumeCallback 0x803398E4, DecrementerExceptionCallback 0x8031D034, iosFree 0x8034E898, OSExitThread
  0x80325C00, SelectThread idle branch 0x8032586C, interrupt table r13-0x15E0, IOS heap r13-0x253C (r13 =
  0x8057E000). KPADStatus stride 0x84 (May 2007 KPAD).

## Input
- Startup waits (1 ms sleeps) until WPADGetStatus() == 3 (WPAD_STATE_SETUP): stubbed to 3.
- The game's KPAD reader (0x80239D30) uses a core remote's sample only when its data_format is a core format
  (<= 2); the HLE KPADRead reported 3 (Freestyle), so no button ever registered ("Press the A and B Buttons" stayed
  up). It now reports WPAD_FMT_CORE_ACC_DPD (2), or 5 with the Nunchuk.

## Disc reads
- The streaming loader (worker thread 0x80254EA0, job 0x802550D0, DVD callback 0x80255300) stores its "read in
  flight" flag (r13-0x18E8) only after DVDReadAsyncPrio returns, and the callback clears it. When the AX interrupt
  wakes the HOME menu sound thread (priority 4) inside that call, the worker goes to the back of the priority-16
  queue and the main thread runs a whole frame first (100 ms and more while a level loads). A read that completes
  meanwhile is cleared before it is set; the flag then stays set and nothing more is read: a black screen at boot
  or after the level 1 intro movie, or a hang when a sound stream is closed (0x80264DF0 waits for its reads). On
  the console the disc is slower than that window. runtime/game_hotd.cpp wraps DVDReadAsyncPrio: called from the
  job (lr 0x80255270) it holds async IOS completions (g_ios_hold, hle_ios.cpp: a completion that comes due is
  posted again 1 ms later) until the call returns. The job stores the flag a few instructions later, before any
  point where an interrupt can be delivered.
- Async disc reads also complete after len / 8 MB/s (G_DISC_BYTES_PER_SEC, hle_ios.cpp), close to the console's
  drive: with 2 ms completions the title screen could come up without its background.

## Null page
- Skipping the intro movie with A+B held into the title brings up the save/load dialog before the title's objects
  exist, and fn_80122904 reads 0x20(null). Guest addresses 0-0xFFFF are now a zero page (runtime.cpp), so a null
  pointer plus a small offset reads 0 and the game carries on.

## Status / open issues
- Boots through the strap and Zapper screens, the SEGA / Headstrong / Blitz logos, the intro movie, the title,
  save creation / loading (NAND), profile select and name entry, main menu, Story Mode, the level 1 intro movie
  and cut-scene.

## Testing
- `POINTER=x,y` takes 0..1 fractions of the picture (or a timeline `x,y;x,y@frame;...` with
  `AUTOPRESS_FRAMES=1`). The title needs A and B together: `AUTOPRESS=A@600-608,B@600-608,...`. Menus select with B.
  `PEEK=addr,...` prints guest words with the status line, `TRACEFN=addr,...` logs calls.
