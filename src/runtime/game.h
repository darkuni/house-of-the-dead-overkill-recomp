// Per-game constants for The House of the Dead: Overkill (Wii disc, NTSC-U, RHOE8P).
// Addresses come from config/symbols.txt: dtk analysis, SDK names matched against the other recomps (Martian
// Panic's shipped ELF first). r13 offsets were read from the instruction that loads the variable in the named
// SDK function.
#pragma once
#define GAME_NAME        "The House of the Dead: Overkill"
#define GAME_EXE         "hotdoverkill"
#define GAME_INI         "hotdoverkill.ini"

#define G_AX_RESUME_CB          0x803398E4u   // __AXDSPResumeCallback
#define G_DECREMENTER_CB        0x8031D034u   // DecrementerExceptionCallback
#define G_IOS_FREE              0x8034E898u   // iosFree(heap, ptr)
#define G_OS_EXIT_THREAD        0x80325C00u   // OSExitThread
#define G_SDA_INTERRUPT_TABLE   0x15E0u       // __OSGetInterruptHandler: lwz r4,-0x15E0(r13)
#define G_SDA_IOS_HEAP          0x253Cu       // __ios_Ipc2: lwz r3,-0x253C(r13) before iosFree
#define G_FN_OS_EXIT_THREAD     f_80325C00
#define G_FN_IOS_FREE           f_8034E898
#define G_KPAD_STATUS_SIZE      0x84u         // KPADStatus (KPADRead: mulli 0x84): May 2007 KPAD
#define G_FN_OS_DISABLE_SCHEDULER f_803253F8  // interrupt handlers run with the scheduler off (hle_thread.cpp irq_check)
#define G_FN_OS_ENABLE_SCHEDULER  f_80325434
#define G_FN_OS_RESCHEDULE        f_80325940  // __OSReschedule after the handlers
#define G_IOS_ASYNC_DELAY_US    2000u         // async IOS requests (disc reads) complete 2 ms later (hle_ios.cpp)
#define G_RELOAD_OFFSCREEN      1             // reload = aim off the picture: middle mouse / V / LB / LT
#define G_MOUSE_SWAP_DEFAULT    1             // mouse: left button = B (the trigger), right = A
#define G_DISC_BYTES_PER_SEC    8000000u      // async disc reads complete after len / 8 MB/s (hle_ios.cpp)
