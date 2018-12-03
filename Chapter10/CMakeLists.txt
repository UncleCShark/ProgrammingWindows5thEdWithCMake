# CMakeList.txt : CMake project for Programming Windows 5Ed, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
project(Chapter10)

# Add source to this project's executable.
add_executable (IconDemo WIN32 "IconDemo/IconDemo.c" "IconDemo/IconDemo.rc") 
add_executable (MenuDemo WIN32 "MenuDemo/MenuDemo.c" "MenuDemo/MenuDemo.rc") 
add_executable (NoPopups WIN32 "NoPopups/NoPopups.c" "NoPopups/NoPopups.rc") 
add_executable (PoePoem WIN32 "PoePoem/PoePoem.c" "PoePoem/PoePoem.rc") 
add_executable (PoorMenu WIN32 "PoorMenu/PoorMenu.c") 
add_executable (PopMenu WIN32 "PopMenu/PopMenu.c" "PopMenu/PopMenu.rc") 
add_executable (PopPad2 WIN32 "PopPad2/PopPad2.c" "PopPad2/PopPad2.rc") 

# TODO: Add tests and install targets if needed.
install(TARGETS 
IconDemo
MenuDemo
NoPopups
PoePoem
PoorMenu
PopMenu
PopPad2
DESTINATION bin/${PROJECT_NAME})
