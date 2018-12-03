# CMakeList.txt : CMake project for Programming Windows 5Ed, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
project(Chapter19)

# Add source to this project's executable.
add_executable (MDIDemo WIN32 "MDIDemo/MDIDemo.c" "MDIDemo/MDIDemo.rc") 

# TODO: Add tests and install targets if needed.
install(TARGETS
MDIDemo
DESTINATION bin/${PROJECT_NAME})
