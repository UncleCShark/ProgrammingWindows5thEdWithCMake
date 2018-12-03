# CMakeList.txt : CMake project for Programming Windows 5Ed, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
project(Chapter18)

#Add source to this project's libraries
add_library (EmfObj OBJECT "Emf8/Emf.c") 
add_library (EmfRes OBJECT "Emf8/Emf.rc") 

# Add source to this project's executable.
add_executable (Emf1 WIN32 "Emf1/Emf1.c" ) 
add_executable (Emf2 WIN32 "Emf2/Emf2.c" ) 
add_executable (Emf3 WIN32 "Emf3/Emf3.c" ) 
add_executable (Emf4 WIN32 "Emf4/Emf4.c" ) 
add_executable (Emf5 WIN32 "Emf5/Emf5.c" ) 
add_executable (Emf6 WIN32 "Emf6/Emf6.c" ) 
add_executable (Emf7 WIN32 "Emf7/Emf7.c" ) 
add_executable (Emf8 WIN32 
"Emf8/Emf8.c" 
$<TARGET_OBJECTS:EmfObj> 
$<TARGET_OBJECTS:EmfRes>
) 
add_executable (Emf9 WIN32 
"Emf9/Emf9.c" 
$<TARGET_OBJECTS:EmfObj> 
$<TARGET_OBJECTS:EmfRes>
) 
add_executable (Emf10 WIN32 
"Emf10/Emf10.c" 
$<TARGET_OBJECTS:EmfObj> 
$<TARGET_OBJECTS:EmfRes>
)
add_executable (Emf11 WIN32 
"Emf11/Emf11.c" 
$<TARGET_OBJECTS:EmfObj> 
$<TARGET_OBJECTS:EmfRes>
) 
add_executable (Emf12 WIN32 
"Emf12/Emf12.c" 
$<TARGET_OBJECTS:EmfObj> 
$<TARGET_OBJECTS:EmfRes>
) 
add_executable (Emf13 WIN32 
"Emf13/Emf13.c" 
$<TARGET_OBJECTS:EmfObj> 
$<TARGET_OBJECTS:EmfRes>
) 
add_executable (EmfView WIN32 "EmfView/EmfView.c" "EmfView/EmfView.rc") 
add_executable (Metafile WIN32 "Metafile/Metafile.c" ) 

#add_executable (BitBlt WIN32 "BitBlt/BitBlt.c" "BitBlt/BitBlt.rc") 

# TODO: Add tests and install targets if needed.
install(TARGETS
Emf1
Emf2
Emf3
Emf4
Emf5
Emf6
Emf7
Emf8
Emf9
Emf10
Emf11
Emf12
Emf13
EmfView
Metafile
DESTINATION bin/${PROJECT_NAME})
