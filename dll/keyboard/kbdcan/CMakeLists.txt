
include_directories(${ODYSSEY_SOURCE_DIR}/ntoskrnl/include)

spec2def(kbdcan.dll kbdcan.spec)

add_library(kbdcan SHARED kbdcan.c kbdcan.rc ${CMAKE_CURRENT_BINARY_DIR}/kbdcan.def)

set_entrypoint(kbdcan 0)

add_dependencies(kbdcan psdk)

add_cd_file(TARGET kbdcan DESTINATION odyssey/system32 ODYSSEY_PE FOR all)
