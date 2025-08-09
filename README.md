It's reupload I made in 2021 from official Microsoft site. I did nothing but put zlib and libpng libraries. 
# What is the Device Emulator?
The Device Emulator is a software simulation of a CPU and motherboard, that runs the Windows CE and Windows Mobile operating systems. The emulator is a single Windows .EXE file that contains: 
A CPU emulator that executes the ARM instruction set by JIT-compiling to x86
An MMU emulator to support virtual memory and page protection
A motherboard emulator that contains emulated RAM and NOR flash memory
A collection of peripheral devices attached to the motherboard: serial ports, LCD controller, touchscreen, keyboard, interrupt controller, programmable timers, real-time-clock, network cards, audio, etc.
A “DMA” interface which allows a Win32 application running outside the emulator to communicate with a WinCE application running inside the emulator, using a simple socket-like programming model.
The V1 emulator ships as part of Visual Studio 2005, and on Microsoft.com as a free standalone download here.

# What is the Shared-Source Device Emulator?
It is the source code to the V1 DeviceEmulator.exe. You can compile the emulator yourself, using Visual Studio 2005, and either run it as a standalone Windows application, or use its COM self-registration code to make it the default DeviceEmulator on your PC (meaning launch it and use it from Visual Studio 2005 and the Device Emulator Manager).
The source code is released under a shared-source initiative. Please see the accompanying license.
The Shared Source release does not include sources to the Device Emulator Manager application or to the ActiveSync-over-DMA code, both of which are present in binary form in the V1 release.
This source release can be used as an research and experimentation platform: the CPU emulator can be modified or replaced, as can the motherboard, peripheral devices, and emulator UI.
