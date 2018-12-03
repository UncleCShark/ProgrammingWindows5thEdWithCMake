# CMakeList.txt : CMake project for Programming Windows 5Ed, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
project(Chapter15)

# Add source to this project's executable.

message("< ${CMAKE_PROJECT_NAME} / ${PROJECT_NAME}")
add_executable (Apollo11 WIN32 "Apollo11/Apollo11.c" "ShowDib1/DibFile.c") 
add_executable (DibConv WIN32 "DibConv/DibConv.c" "DibConv/DibConv.rc") 
add_executable (DibHeads WIN32 "DibHeads/DibHeads.c" "DibHeads/DibHeads.rc") 
add_executable (DibSect WIN32 "DibSect/DibSect.c" "DibSect/DibSect.rc") 
add_executable (SeqDisp WIN32 "SeqDisp/SeqDisp.c" "SeqDisp/SeqDisp.rc") 
add_executable (ShowDib1 WIN32 "ShowDib1/ShowDib1.c" "ShowDib1/DibFile.c" "ShowDib1/ShowDib1.rc") 
add_executable (ShowDib2 WIN32 "ShowDib2/ShowDib2.c" "ShowDib2/DibFile.c" "ShowDib2/ShowDib2.rc") 
#add_executable (BitBlt WIN32 "BitBlt/BitBlt.c" "BitBlt/BitBlt.rc") 
add_custom_command(TARGET Apollo11 POST_BUILD
	COMMAND ${CMAKE_COMMAND} -E copy 
	${CMAKE_CURRENT_SOURCE_DIR}/Apollo11/Apollo11.bmp 
	${CMAKE_CURRENT_SOURCE_DIR}/Apollo11/ApolloTD.bmp 
	$<TARGET_FILE_DIR:Apollo11>
)
# TODO: Add tests and install targets if needed.
install(TARGETS 
Apollo11
DibConv
DibHeads
DibSect
SeqDisp
ShowDib1
ShowDib2
DESTINATION bin/${PROJECT_NAME})

install(
  FILES
	${CMAKE_CURRENT_SOURCE_DIR}/Apollo11/Apollo11.bmp
	${CMAKE_CURRENT_SOURCE_DIR}/Apollo11/ApolloTD.bmp
  DESTINATION bin/${PROJECT_NAME}
)
