# CMakeList.txt : CMake project for Programming Windows 5Ed, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
project(Chapter23)

# Add source to this project's executable.
add_executable (NetTime WIN32 "NetTime/NetTime.c" "NetTime/NetTime.rc") 
target_link_libraries(NetTime wsock32.lib)
add_executable (UpdDemo WIN32 "UpdDemo/UpdDemo.c" "UpdDemo/UpdDemo.rc") 
target_link_libraries(UpdDemo wininet.lib)

# TODO: Add tests and install targets if needed.
install(TARGETS
NetTime
UpdDemo
DESTINATION bin/${PROJECT_NAME})
