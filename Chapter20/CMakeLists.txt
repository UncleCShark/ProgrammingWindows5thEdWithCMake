# CMakeList.txt : CMake project for Programming Windows 5Ed, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
project(Chapter20)

# Add source to this project's executable.
add_executable (BigJob1 WIN32 "BigJob1/BigJob1.c") 
add_executable (BigJob2 WIN32 "BigJob2/BigJob2.c") 
add_executable (Multi1 WIN32 "Multi1/Multi1.c") 
add_executable (Multi2 WIN32 "Multi2/Multi2.c") 
add_executable (RndRctMT WIN32 "RndRctMT/RndRctMT.c") 

# TODO: Add tests and install targets if needed.
install(TARGETS
BigJob1
BigJob2
Multi1
Multi2
RndRctMT
DESTINATION bin/${PROJECT_NAME})
