# CMakeList.txt : CMake project for Programming Windows 5Ed, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
project(Chapter12)

# Add source to this project's executable.
add_executable (ClipText WIN32 "ClipText/ClipText.c" "ClipText/ClipText.rc") 
add_executable (ClipView WIN32 "ClipView/ClipView.c" ) 

# TODO: Add tests and install targets if needed.
install(TARGETS 
ClipText
ClipView
DESTINATION bin/${PROJECT_NAME})
