
include_directories(${ODYSSEY_SOURCE_DIR}/ntoskrnl/include)

spec2def(kbdic.dll kbdic.spec)

add_library(kbdic SHARED kbdic.c kbdic.rc ${CMAKE_CURRENT_BINARY_DIR}/kbdic.def)

set_entrypoint(kbdic 0)

add_dependencies(kbdic psdk)

add_cd_file(TARGET kbdic DESTINATION odyssey/system32 ODYSSEY_PE FOR all)
