The House of the Dead: Overkill (Wii) - native Windows and Linux build (static recompilation)  @VERSION@
https://github.com/darkuni/house-of-the-dead-overkill-recomp

No game data is included. You need your own House of the Dead: Overkill disc image (Wii, NTSC-U, RHOE8P)
as .iso, .ciso or .wbfs.

Setup
  Put your disc image (.iso, .ciso or .wbfs) in this folder and run hotdoverkill.exe (Windows) or
  hotdoverkill (Linux / Steam Deck: ./hotdoverkill, or add it to Steam as a non-Steam game). On the
  first start it builds the "game" folder from it (a minute or two); after that the disc image isn't
  needed any more.

Requirements: 64-bit Windows 10/11, or 64-bit Linux with SDL2 (SteamOS has it; elsewhere install
libsdl2 / sdl2 from your package manager); a GPU with OpenGL 3.3.

Controls (Wii Remote / Wii Zapper)
  Shooting is B (the trigger); menus take A. Reload = point away from the screen, which the
  reload button does for you.
  Mouse:    point = Wii Remote pointer, left button = B (fire), right button = A, middle button
            = reload. "Mouse buttons" in the settings menu (or controls = mouse / mouse_swap in
            hotdoverkill.ini) swaps left and right. "Capture mouse" (capture_mouse = 1) keeps
            the cursor inside the window while you play.
  Gamepad:  either stick = pointer, A = A, B or RB/RT = B (fire), LB/LT = reload, X/Y = 1/2,
            d-pad = d-pad, Start = +, Back = -, Guide = HOME
  Keyboard: X = A, Space or Z = B (fire), V = reload, A/S = 1/2, arrows = d-pad,
            I/J/K/L = pointer, Enter = +, Backspace = -, H = HOME

Wii Remote motions (hold Ctrl and move the mouse: left/right twists, up/down tilts, fast moves
are swings; Q/E and R/F on the keyboard)

Real Wii Remote (optional)
  Pair it with Windows: Settings > Bluetooth > Add device, press the red SYNC button under the
  battery cover, pick "Nintendo RVL-CNT-01" (skip/leave the PIN empty). A Mayflash DolphinBar
  in mode 4 works too. Linux: pair it in the Bluetooth settings; reading it needs access to its
  /dev/hidraw device (a udev rule, e.g. KERNEL=="hidraw*", ATTRS{idVendor}=="057e", MODE="0666").
  Its buttons, motion and (with a sensor bar) pointer are used. wiimote = 0 in hotdoverkill.ini
  turns it off.

Keys
  F1 / Esc (or Start+Back on a gamepad)  settings menu (resolution, widescreen, vsync, MSAA,
                                         texture filtering, mouse buttons, game speed)
  F11 / Alt+Enter                        fullscreen
  Hold Tab (or click the right stick)    fast-forward

Files
  hotdoverkill.ini        settings (created on first run)
  hotdoverkill.log        log of the last run - include it with bug reports
  hotdoverkill_hang.txt   written if no frame is shown for 8 seconds - include it too
  nand\                   saves


Unofficial fan project, not affiliated with SEGA, Headstrong Games or Nintendo.
The exe contains code machine-translated from the game's executable; game data comes from your
own disc image.
System font: Droid Sans replacements from Dolphin (Apache 2.0, see ipl-font-licenses.txt).
