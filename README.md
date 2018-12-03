# How to prepare Programming Windows 5th Edition source code with CMake to run on Windows 10 
This project is Two in One example - create Win32 Programming examples using Modern Cmake build system and run it. A project  based on  a source code from Charles Petzold's Programming Windows 5th Edition ISBN-10 157231995X. The work was published in 1998 is one of the famous and comprehensive books of Windows API (Win32). Examples are originally written in pure C language for Windows 98. It's really amazing but after only a few fixes that code is up and running on Windows 10. I tried to make as few as possible changes of original code. I didn't want fix any warning.It up to you if you care. If you are in interest of native programming you needn't leave it out. On the other hand CMake is an open-source, cross-platform family of tools designed to build, test and package software. Due to CMake Generator you can get the input files for a native build system like Makefile, Ninja, MsBuild etc. You may set a compiler also. You have to admit that it's very flexible.
# Getting Started

## Prerequisites to run the samples
- Install a C++ compiler for Windows Platform (MSVC, Mingw64) optionally with IDE ( any Visual Studio 2017, QT Creator, VS Code will be OK ) and have a ball.
