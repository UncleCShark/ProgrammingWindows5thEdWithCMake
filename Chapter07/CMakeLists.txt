# CMakeList.txt : CMake project for Programming Windows 5Ed, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
project(Chapter07)

# Add source to this project's executable.
add_executable (BlokOut1 WIN32 "BlokOut1/BlokOut1.c") 
add_executable (BlokOut2 WIN32 "BlokOut2/BlokOut2.c") 
add_executable (Checker1 WIN32 "Checker1/Checker1.c") 
add_executable (Checker2 WIN32 "Checker2/Checker2.c") 
add_executable (Checker3 WIN32 "Checker3/Checker3.c") 
add_executable (Checker4 WIN32 "Checker4/Checker4.c") 
add_executable (Connect WIN32 "Connect/Connect.c") 
add_executable (SysMets WIN32 "SysMets/SysMets.c") 


# TODO: Add tests and install targets if needed.
install(TARGETS 
BlokOut1
BlokOut2
Checker1
Checker2
Checker3
Checker4
Connect
SysMets
DESTINATION bin/${PROJECT_NAME})
