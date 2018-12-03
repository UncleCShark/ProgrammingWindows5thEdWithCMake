# CMakeList.txt : CMake project for Programming Windows 5Ed, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("Chapter03")

# Add source to this project's executable.
add_executable (HelloWin WIN32 "HelloWin/HelloWin.c") 
target_link_libraries(HelloWin Winmm.lib)
add_custom_command(TARGET HelloWin POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_SOURCE_DIR}/HelloWin/HelloWin.wav $<TARGET_FILE_DIR:HelloWin>
)
# TODO: Add tests and install targets if needed.
install(TARGETS 
HelloWin
DESTINATION bin/${PROJECT_NAME})
install(
  FILES
    ${CMAKE_CURRENT_SOURCE_DIR}/HelloWin/HelloWin.wav
  DESTINATION bin/${PROJECT_NAME}
)

