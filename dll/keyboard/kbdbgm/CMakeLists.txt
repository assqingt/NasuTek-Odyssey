
include_directories(${ODYSSEY_SOURCE_DIR}/ntoskrnl/include)

spec2def(kbdbgm.dll kbdbgm.spec)

add_library(kbdbgm SHARED kbdbgm.c kbdbgm.rc ${CMAKE_CURRENT_BINARY_DIR}/kbdbgm.def)

set_entrypoint(kbdbgm 0)

add_dependencies(kbdbgm psdk)

add_cd_file(TARGET kbdbgm DESTINATION odyssey/system32 ODYSSEY_PE FOR all)
