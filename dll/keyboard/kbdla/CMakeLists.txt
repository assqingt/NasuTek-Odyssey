
include_directories(${ODYSSEY_SOURCE_DIR}/ntoskrnl/include)

spec2def(kbdla.dll kbdla.spec)

add_library(kbdla SHARED kbdla.c kbdla.rc ${CMAKE_CURRENT_BINARY_DIR}/kbdla.def)

set_entrypoint(kbdla 0)

add_dependencies(kbdla psdk)

add_cd_file(TARGET kbdla DESTINATION odyssey/system32 ODYSSEY_PE FOR all)
