
include_directories(${ODYSSEY_SOURCE_DIR}/ntoskrnl/include)

spec2def(kbdgrist.dll kbdgrist.spec)

add_library(kbdgrist SHARED kbdgrist.c kbdgrist.rc ${CMAKE_CURRENT_BINARY_DIR}/kbdgrist.def)

set_entrypoint(kbdgrist 0)

add_dependencies(kbdgrist psdk)

add_cd_file(TARGET kbdgrist DESTINATION odyssey/system32 ODYSSEY_PE FOR all)
