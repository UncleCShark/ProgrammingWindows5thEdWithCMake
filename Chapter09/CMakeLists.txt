# CMakeList.txt : CMake project for Programming Windows 5Ed, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
project(Chapter09)

# Add source to this project's executable.
add_executable (BtnLook WIN32 "BtnLook/BtnLook.c") 
add_executable (Colors1 WIN32 "Colors1/Colors1.c") 
add_executable (Environ WIN32 "Environ/Environ.c") 
add_executable (head WIN32 "head/head.c") 
add_executable (OwnDraw WIN32 "OwnDraw/OwnDraw.c") 

# TODO: Add tests and install targets if needed.
install(TARGETS 
BtnLook
Colors1
Environ
head
OwnDraw
DESTINATION bin/${PROJECT_NAME})
