

add_definitions(-DDEBUG_NT4)
include_directories(${ODYSSEY_SOURCE_DIR}/include/odyssey/libs/sound)

spec2def(sndblst.dll sndblst.spec)

list(APPEND SOURCE
    sndblst.c
    ${CMAKE_CURRENT_BINARY_DIR}/sndblst.def)

add_library(sndblst SHARED ${SOURCE})

set_module_type(sndblst win32dll UNICODE)
target_link_libraries(sndblst mment4 mmebuddy)
add_importlibs(sndblst user32 winmm advapi32 msvcrt kernel32 ntdll)
add_cd_file(TARGET sndblst DESTINATION odyssey/system32 ODYSSEY_PE FOR all)
