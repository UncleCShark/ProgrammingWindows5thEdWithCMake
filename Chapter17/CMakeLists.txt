# CMakeList.txt : CMake project for Programming Windows 5Ed, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
project(Chapter17)

#Add source to this project's libraries
add_library (EZFontObj OBJECT "EZTest/EZFont.c") 
add_library (FontDemoObj OBJECT "EZTest/FontDemo.c") 
add_library (FontDemoRes OBJECT "EZTest/FontDemo.rc") 

# Add source to this project's executable.
add_executable (ChosFont WIN32 "ChosFont/ChosFont.c" "ChosFont/ChosFont.rc") 
add_executable (EndJoin WIN32 "EndJoin/EndJoin.c" ) 
add_executable (EZTest WIN32 
"EZTest/EZTest.c" 
$<TARGET_OBJECTS:EZFontObj> 
$<TARGET_OBJECTS:FontDemoObj>
$<TARGET_OBJECTS:FontDemoRes>
) 
add_executable (FontClip WIN32 
"FontClip/FontClip.c" 
$<TARGET_OBJECTS:EZFontObj> 
$<TARGET_OBJECTS:FontDemoObj> 
$<TARGET_OBJECTS:FontDemoRes>
)
add_executable (FontFill WIN32 
"FontFill/FontFill.c" 
$<TARGET_OBJECTS:EZFontObj> 
$<TARGET_OBJECTS:FontDemoObj> 
$<TARGET_OBJECTS:FontDemoRes>
)
add_executable (FontOut1 WIN32 
"FontOut1/FontOut1.c" 
$<TARGET_OBJECTS:EZFontObj> 
$<TARGET_OBJECTS:FontDemoObj> 
$<TARGET_OBJECTS:FontDemoRes>
)
add_executable (FontOut2 WIN32 
"FontOut2/FontOut2.c" 
$<TARGET_OBJECTS:EZFontObj> 
$<TARGET_OBJECTS:FontDemoObj> 
$<TARGET_OBJECTS:FontDemoRes>
)
add_executable (FontRot WIN32 
"FontRot/FontRot.c" 
$<TARGET_OBJECTS:EZFontObj> 
$<TARGET_OBJECTS:FontDemoObj> 
$<TARGET_OBJECTS:FontDemoRes>
)
add_executable (Justify1 WIN32 "Justify1/Justify1.c" "Justify1/Justify1.rc") 
add_executable (Justify2 WIN32 "Justify2/Justify2.c" "Justify2/Justify2.rc") 
add_executable (PickFont WIN32 "PickFont/PickFont.c" "PickFont/PickFont.rc") 
add_executable (UniChars WIN32 "UniChars/UniChars.c" "UniChars/UniChars.rc") 

#add_executable (BitBlt WIN32 "BitBlt/BitBlt.c" "BitBlt/BitBlt.rc") 

# TODO: Add tests and install targets if needed.
install(TARGETS
ChosFont
EndJoin
EZTest
FontClip
FontFill
FontOut1
FontOut2
FontRot
Justify1
Justify2
PickFont
UniChars
DESTINATION bin/${PROJECT_NAME})
