
include_directories(${ODYSSEY_SOURCE_DIR}/ntoskrnl/include)

spec2def(kbdth2.dll kbdth2.spec)

add_library(kbdth2 SHARED kbdth2.c kbdth2.rc ${CMAKE_CURRENT_BINARY_DIR}/kbdth2.def)

set_entrypoint(kbdth2 0)

add_dependencies(kbdth2 psdk)

add_cd_file(TARGET kbdth2 DESTINATION odyssey/system32 ODYSSEY_PE FOR all)
