
add_definitions(-DUNICODE -D_UNICODE)

spec2def(midimap.dll midimap.spec)

add_library(midimap SHARED
    midimap.c
    midimap.rc
    ${CMAKE_CURRENT_BINARY_DIR}/midimap.def)

set_entrypoint(midimap 0)

target_link_libraries(midimap uuid wine)

add_importlibs(midimap advapi32 user32 winmm kernel32 ntdll)
add_dependencies(midimap psdk)
add_cd_file(TARGET midimap DESTINATION odyssey/system32 ODYSSEY_PE FOR all)

