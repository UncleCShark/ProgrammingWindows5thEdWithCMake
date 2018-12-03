# How to prepare Programming Windows 5th Edition source code with CMake to run on Windows 10 
This project is Two in One solution. It will learn you how to use Win32 API and get a hang of Modern Cmake as a excellent flexible build system. Look how small amount of code is generated. It's a power of native programming. If you are in interest of native programming you needn't leave it out. I want to show you how simple is with Win32 API and CMake to create an efficent light solution and what is more important you can use C++ compiler or IDE of your choice. A project  based on  a source code from Charles Petzold's Programming Windows 5th Edition ISBN-10 157231995X. The work was published in 1998 is one of the famous and comprehensive books of Windows API (Win32). Examples are originally written in pure C language for Windows 98. It's really amazing but after only a few fixes that code is up and running on Windows 10. I tried to make as few as possible changes to the original code. I didn't want fix any warning. It up to you if you care. On the other hand CMake is an open-source, cross-platform family of tools designed to build, test and package software. Due to CMake Generator you can get the input files for a native build system like Makefile, Ninja, MsBuild etc. You may set a compiler also. You have to admit that it's very flexible.
# Getting Started

## Prerequisites to run the samples
- Install Cmake and C++ compiler for Windows Platform ( MSVC, Mingw64, Clang ) optionally with IDE ( any Visual Studio 2017, QT Creator, VS Code will be OK ) and have a ball.

- Don't be disappointed when you will try to compile examples for x64 platform, you can do it without any errors but keep in mind that source examples are destined for 16-bit and 32-bit Windows (they are twenty years old) - many of them work without problem but not MIDI example.

## Notes
I was using Visual Studio 2017 Community (version 15.9.3)  to built every example with both MSVC (version 19.16.27024.1) and Mingw64 ( version 8.1.0 ) kits. To open a cmake project try File->Open Project->Cmake.
