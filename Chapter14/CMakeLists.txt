# CMakeList.txt : CMake project for Programming Windows 5Ed, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
project(Chapter14)

# Add source to this project's executable.
add_executable (BitBlt WIN32 "BitBlt/BitBlt.c" ) 
add_executable (BitMask WIN32 "BitMask/BitMask.c" "BitMask/BitMask.rc") 
add_executable (Blowup WIN32 "Blowup/Blowup.c" "Blowup/Blowup.rc") 
add_executable (Bounce WIN32 "Bounce/Bounce.c" ) 
add_executable (Bricks1 WIN32 "Bricks1/Bricks1.c" "Bricks1/Bricks1.rc") 
add_executable (Bricks2 WIN32 "Bricks2/Bricks2.c" ) 
add_executable (Bricks3 WIN32 "Bricks3/Bricks3.c" "Bricks3/Bricks3.rc") 
add_executable (GrafMenu WIN32 "GrafMenu/GrafMenu.c" "GrafMenu/GrafMenu.rc") 
add_executable (HelloBit WIN32 "HelloBit/HelloBit.c" "HelloBit/HelloBit.rc") 
add_executable (Scramble WIN32 "Scramble/Scramble.c" ) 
add_executable (Sketch WIN32 "Sketch/Sketch.c" ) 
add_executable (Stretch WIN32 "Stretch/Stretch.c" ) 
#add_executable (BitBlt WIN32 "BitBlt/BitBlt.c" "BitBlt/BitBlt.rc") 

# TODO: Add tests and install targets if needed.
install(TARGETS 
BitBlt
BitMask
Blowup
Bounce
Bricks1
Bricks2
Bricks3
GrafMenu
HelloBit
Scramble
Sketch
Stretch
DESTINATION bin/${PROJECT_NAME})
