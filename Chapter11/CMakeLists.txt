# CMakeList.txt : CMake project for Programming Windows 5Ed, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
project(Chapter11)

# Add source to this project's executable.
add_executable (About1 WIN32 "About1/About1.c" "About1/About1.rc") 
add_executable (About2 WIN32 "About2/About2.c" "About2/About2.rc") 
add_executable (About3 WIN32 "About3/About3.c" "About3/About3.rc") 
add_executable (Colors2 WIN32 "Colors2/Colors2.c" "Colors2/Colors2.rc") 
add_executable (Colors3 WIN32 "Colors3/Colors3.c" ) 
add_executable (HexCalc WIN32 "HexCalc/HexCalc.c") 
add_executable (PopPad WIN32 
"PopPad3/PopFile.c" 
"PopPad3/PopFind.c" 
"PopPad3/PopFont.c" 
"PopPad3/PopPad.c" 
"PopPad3/PopPrnt0.c" 
"PopPad3/PopPad.rc") 

# TODO: Add tests and install targets if needed.
install(TARGETS 
About1
About2
About3
Colors2
Colors3
HexCalc
PopPad
DESTINATION bin/${PROJECT_NAME})
