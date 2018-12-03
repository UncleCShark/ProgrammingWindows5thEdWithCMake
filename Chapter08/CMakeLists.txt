# CMakeList.txt : CMake project for Programming Windows 5Ed, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
project(Chapter08)

# Add source to this project's executable.
add_executable (Beeper1 WIN32 "Beeper1/Beeper1.c") 
add_executable (Beeper2 WIN32 "Beeper2/Beeper2.c") 
add_executable (Clock WIN32 "Clock/Clock.c") 
add_executable (DigClock WIN32 "DigClock/DigClock.c") 
add_executable (WhatClr WIN32 "WhatClr/WhatClr.c") 

# TODO: Add tests and install targets if needed.
install(TARGETS 
Beeper1
Beeper2
Clock
DigClock
WhatClr
DESTINATION bin/${PROJECT_NAME})
