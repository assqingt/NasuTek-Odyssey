
include_directories(${ODYSSEY_SOURCE_DIR}/ntoskrnl/include)

spec2def(kbdusx.dll kbdusx.spec)

add_library(kbdusx SHARED kbdusx.c kbdusx.rc ${CMAKE_CURRENT_BINARY_DIR}/kbdusx.def)

set_entrypoint(kbdusx 0)

add_dependencies(kbdusx psdk)

add_cd_file(TARGET kbdusx DESTINATION odyssey/system32 ODYSSEY_PE FOR all)
