# CMakeList.txt : CMake project for Programming Windows 5Ed, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
project(Chapter05)

# Add source to this project's executable.
add_executable (AltWind WIN32 "AltWind/AltWind.c") 
add_executable (Bezier WIN32 "Bezier/Bezier.c") 
add_executable (Clover WIN32 "Clover/Clover.c") 
add_executable (DevCaps1 WIN32 "DevCaps1/DevCaps1.c") 
add_executable (LineDemo WIN32 "LineDemo/LineDemo.c") 
add_executable (RandRect WIN32 "RandRect/RandRect.c") 
add_executable (SineWave WIN32 "SineWave/SineWave.c") 
add_executable (WhatSize WIN32 "WhatSize/WhatSize.c") 

# TODO: Add tests and install targets if needed.
install(TARGETS 
AltWind
Bezier
Clover
DevCaps1
LineDemo
RandRect
SineWave
WhatSize
DESTINATION bin/${PROJECT_NAME})
