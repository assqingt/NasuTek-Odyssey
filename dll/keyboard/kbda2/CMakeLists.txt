
include_directories(${ODYSSEY_SOURCE_DIR}/ntoskrnl/include)

spec2def(kbda2.dll kbda2.spec)

add_library(kbda2 SHARED kbda2.c kbda2.rc ${CMAKE_CURRENT_BINARY_DIR}/kbda2.def)

set_entrypoint(kbda2 0)

add_dependencies(kbda2 psdk)

add_cd_file(TARGET kbda2 DESTINATION odyssey/system32 ODYSSEY_PE FOR all)
