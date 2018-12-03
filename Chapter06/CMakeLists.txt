# CMakeList.txt : CMake project for Programming Windows 5Ed, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
project(Chapter06)

# Add source to this project's executable.
add_executable (KeyView1 WIN32 "KeyView1/KeyView1.c") 
add_executable (KeyView2 WIN32 "KeyView2/KeyView2.c") 
add_executable (StokFont WIN32 "StokFont/StokFont.c") 
add_executable (SysMets4 WIN32 "SysMets4/SysMets4.c") 
add_executable (Typer WIN32 "Typer/Typer.c") 


# TODO: Add tests and install targets if needed.
install(TARGETS 
KeyView1
KeyView2
StokFont
SysMets4
Typer
DESTINATION bin/${PROJECT_NAME})
