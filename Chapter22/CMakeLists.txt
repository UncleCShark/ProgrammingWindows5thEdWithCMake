# CMakeList.txt : CMake project for Programming Windows 5Ed, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
project(Chapter22)

# Add source to this project's executable.
add_executable (AddSynth WIN32 "AddSynth/AddSynth.c" "AddSynth/AddSynth.rc") 
target_link_libraries(AddSynth Winmm.lib)
add_executable (BachTocc WIN32 "BachTocc/BachTocc.c" ) 
target_link_libraries(BachTocc Winmm.lib)
add_executable (Drum WIN32 "Drum/Drum.c" "Drum/Drum.rc" "Drum/DrumFile.c" "Drum/DrumTime.c") 
target_link_libraries(Drum Winmm.lib)
add_executable (KBMidi WIN32 "KBMidi/KBMidi.c") 
target_link_libraries(KBMidi Winmm.lib)
add_executable (Record1 WIN32 "Record1/Record1.c" "Record1/Record.rc") 
target_link_libraries(Record1 Winmm.lib)
add_executable (Record2 WIN32 "Record2/Record2.c" "Record1/Record.rc") 
target_link_libraries(Record2 Winmm.lib)
add_executable (Record3 WIN32 "Record3/Record3.c" "Record1/Record.rc") 
target_link_libraries(Record3 Winmm.lib)
add_executable (SineWaveChapter22 WIN32 "SineWave/SineWave.c" "SineWave/SineWave.rc") 
target_link_libraries(SineWaveChapter22 Winmm.lib)
add_executable (TestMci WIN32 "TestMci/TestMci.c" "TestMci/TestMci.rc") 
target_link_libraries(TestMci Winmm.lib)
add_executable (WakeUp WIN32 "WakeUp/WakeUp.c" ) 
target_link_libraries(WakeUp Comctl32.lib Winmm.lib)
# TODO: Add tests and install targets if needed.
install(TARGETS
AddSynth
BachTocc
Drum
KBMidi
Record1
Record2
Record3
SineWaveChapter22
TestMci
WakeUp
DESTINATION bin/${PROJECT_NAME})
