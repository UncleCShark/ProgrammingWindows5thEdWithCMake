# CMakeList.txt : CMake project for Programming Windows 5Ed, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("Chapter04")

# Add source to this project's executable.
add_executable (SysMets1 WIN32 "SysMets1/SysMets1.c") 
add_executable (SysMets2 WIN32 "SysMets2/SysMets2.c") 
add_executable (SysMets3 WIN32 "SysMets3/SysMets3.c") 

# TODO: Add tests and install targets if needed.
install(TARGETS 
SysMets1
SysMets2
SysMets3
DESTINATION bin/${PROJECT_NAME})
