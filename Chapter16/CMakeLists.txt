# CMakeList.txt : CMake project for Programming Windows 5Ed, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
project(Chapter16)

#Add source to this project's libraries
add_library (PalAnimObj OBJECT "Bounce/PalAnim.c" ) 
add_library (PackeDibObj OBJECT "ShowDib3/PackeDib.c" ) 

# Add source to this project's executable.
add_executable (AllColor WIN32 $<TARGET_OBJECTS:PalAnimObj> "AllColor/AllColor.c" ) 
add_executable (BounceChap16 WIN32 $<TARGET_OBJECTS:PalAnimObj> "Bounce/Bounce.c" ) 
add_executable (Dibble WIN32 
"Dibble/Dibble.c" 
"Dibble/Dibble.rc" 
"Dibble/DibConv.c" 
"Dibble/DibHelp.c" 
"Dibble/DibPal.c" 
) 
add_executable (Fader WIN32 $<TARGET_OBJECTS:PalAnimObj> "Fader/Fader.c" ) 
add_executable (Grays1 WIN32 "Grays1/Grays1.c") 
add_executable (Grays2 WIN32 "Grays2/Grays2.c") 
add_executable (Grays3 WIN32 "Grays3/Grays3.c") 
add_executable (Pipes WIN32 $<TARGET_OBJECTS:PalAnimObj> "Pipes/Pipes.c") 
add_executable (ShowDib3 WIN32 "ShowDib3/ShowDib3.c" "ShowDib3/ShowDib3.rc" $<TARGET_OBJECTS:PackeDibObj>) 
add_executable (ShowDib4 WIN32 "ShowDib4/ShowDib4.c" "ShowDib4/ShowDib4.rc" $<TARGET_OBJECTS:PackeDibObj>) 
add_executable (ShowDib5 WIN32 "ShowDib5/ShowDib5.c" "ShowDib5/ShowDib5.rc" $<TARGET_OBJECTS:PackeDibObj>) 
add_executable (ShowDib6 WIN32 "ShowDib6/ShowDib6.c" "ShowDib6/ShowDib6.rc" $<TARGET_OBJECTS:PackeDibObj>) 
add_executable (ShowDib7 WIN32 "ShowDib7/ShowDib7.c" "ShowDib7/ShowDib7.rc" $<TARGET_OBJECTS:PackeDibObj>) 
add_executable (ShowDib8 WIN32 "ShowDib8/ShowDib8.c" "ShowDib8/ShowDib8.rc" $<TARGET_OBJECTS:PackeDibObj>) 
add_executable (SysPal1 WIN32 "SysPal1/SysPal1.c") 
add_executable (SysPal2 WIN32 "SysPal2/SysPal2.c") 
add_executable (SysPal3 WIN32 "SysPal3/SysPal3.c") 
add_executable (Tunnel WIN32 $<TARGET_OBJECTS:PalAnimObj> "Tunnel/Tunnel.c") 


#add_executable (BitBlt WIN32 "BitBlt/BitBlt.c" "BitBlt/BitBlt.rc") 

# TODO: Add tests and install targets if needed.
install(TARGETS
AllColor
BounceChap16
Dibble
Fader
Grays1
Grays2
Grays2
Pipes
ShowDib3
ShowDib4
ShowDib5
ShowDib6
ShowDib7
ShowDib8
SysPal1
SysPal2
SysPal3
Tunnel
DESTINATION bin/${PROJECT_NAME})
