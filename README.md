# The House of the Dead: Overkill (Wii, NTSC-U) - native recompilation

A static recompilation of **The House of the Dead: Overkill** for Wii (disc, NTSC-U, `RHOE8P`, SEGA / Headstrong Games) to
native code. The game's PowerPC executable is translated to C++ and runs on Windows and Linux (SteamOS / Steam Deck)
with a small runtime that replaces the Wii hardware, IOS and the DSP.

**No game data is included.** You need your own copy of the game as a disc image (`.iso`, `.ciso` or `.wbfs`).

## Status

Playable: boots through the logos, intro movie, title, saves, profiles and menus into Story Mode, and level 1
plays (cut-scenes, HUD, enemies, damage, continue). Not every level has been played through yet.

## Download

[Releases](https://github.com/darkuni/house-of-the-dead-overkill-recomp/releases): Windows zip and Linux tar.gz.
Unpack, put your disc image in the same folder and run `hotdoverkill.exe` (Windows) or `./hotdoverkill` (Linux /
Steam Deck): the first start builds the `game` folder from it. The zip's `README.txt` has the controls.

## Building

Same tool chain as the other Wii recomps (Zack & Wiki, TARGET: Terror, Lost in Shadow, Martian Panic): the generated C++ is in
`src/gen`; GitHub Actions cross-compiles the Windows exe with mingw-w64 and SDL2 and builds the Linux one with
`-DUSE_SDL=ON`. Regenerating needs the game's `main.dol` (`src/main.dol`) from your disc (`tools/prepare_disc.py`).
SDK function names come from matching against the other recomps. See [NOTES.md](NOTES.md).

## Disclaimer

Unofficial fan project, **not affiliated with, endorsed by, or sponsored by** SEGA, Headstrong Games or
Nintendo. *The House of the Dead: Overkill* and all related names and marks belong to their respective owners. This repository and its
builds contain no game data; `src/gen` and the exe contain code machine-translated from the game's executable.

## License

The project's own code is released under the [MIT License](LICENSE). Bundled third-party components keep their own
licenses; see [THIRD_PARTY_NOTICES.md](THIRD_PARTY_NOTICES.md).
