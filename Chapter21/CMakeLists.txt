# CMakeList.txt : CMake project for Programming Windows 5Ed, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
project(Chapter21)

add_library (EdrLib SHARED "EdrTest/EdrLib.c" ) 
add_library (BitLib SHARED "ShowBit/BitLib.c" "ShowBit/BitLib.rc") 
add_library (StrLib SHARED "StrProg/StrLib.c" ) 

# Add source to this project's executable.
add_executable (EdrTest WIN32 "EdrTest/EdrTest.c") 
target_link_libraries(EdrTest EdrLib)

add_executable (ShowBit WIN32 "ShowBit/ShowBit.c") 
target_link_libraries(ShowBit BitLib)

add_executable (StrProg WIN32 "StrProg/StrProg.c" "StrProg/StrProg.rc") 
target_link_libraries(StrProg StrLib)

# TODO: Add tests and install targets if needed.
install(TARGETS
EdrTest
EdrLib
ShowBit
BitLib
StrProg
StrLib
DESTINATION bin/${PROJECT_NAME})
