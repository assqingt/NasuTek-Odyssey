
include_directories(${ODYSSEY_SOURCE_DIR}/ntoskrnl/include)

spec2def(kbdir.dll kbdir.spec)

add_library(kbdir SHARED kbdir.c kbdir.rc ${CMAKE_CURRENT_BINARY_DIR}/kbdir.def)

set_entrypoint(kbdir 0)

add_dependencies(kbdir psdk)

add_cd_file(TARGET kbdir DESTINATION odyssey/system32 ODYSSEY_PE FOR all)
