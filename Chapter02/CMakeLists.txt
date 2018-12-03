# CMakeList.txt : CMake project for Programming Windows 5Ed, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("Chapter02")

# Add source to this project's executable.
add_executable (ScrnSize WIN32 "ScrnSize/ScrnSize.c")

# TODO: Add tests and install targets if needed.
install(TARGETS 
ScrnSize
DESTINATION bin/${PROJECT_NAME})
