# CMakeList.txt : CMake project for Programming Windows 5Ed, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("Chapter01")

# Add source to this project's executable.
add_executable (HelloMsg WIN32 "HelloMsg/HelloMsg.c")

# TODO: Add tests and install targets if needed.
install(TARGETS 
HelloMsg
DESTINATION bin/${PROJECT_NAME})
