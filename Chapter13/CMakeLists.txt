# CMakeList.txt : CMake project for Programming Windows 5Ed, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
project(Chapter13)

# Add source to this project's executable.
add_executable (DevCaps2 WIN32 "DevCaps2/DevCaps2.c" "DevCaps2/DevCaps2.rc") 
add_executable (FormFeed WIN32 "FormFeed/FormFeed.c" "Print1/GetPrnDC.c") 
add_executable (PopPadChapter13 WIN32 
"PopPad/PopFile.c" 
"PopPad/PopFind.c" 
"PopPad/PopFont.c" 
"PopPad/PopPad.c"
"PopPad/POPPAD.rc"
"PopPad/PopPrnt.c"
) 
add_executable (Print1 WIN32 "Print1/Print1.c" "Print1/Print.c" "Print1/GetPrnDC.c") 
add_executable (Print2 WIN32 "Print2/Print2.c" "Print1/Print.c" "Print1/GetPrnDC.c") 
add_executable (Print3 WIN32 "Print3/Print3.c" "Print3/Print.rc" "Print1/Print.c" "Print1/GetPrnDC.c") 

# TODO: Add tests and install targets if needed.
install(TARGETS 
DevCaps2
FormFeed
PopPadChapter13
Print1
Print2
Print3
DESTINATION bin/${PROJECT_NAME})
