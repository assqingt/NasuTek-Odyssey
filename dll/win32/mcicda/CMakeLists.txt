
add_definitions(-D__WINESRC__)
include_directories(${ODYSSEY_SOURCE_DIR}/include/odyssey/wine)

spec2def(mcicda.dll mcicda.spec)

list(APPEND SOURCE
    mcicda.c
    ${CMAKE_CURRENT_BINARY_DIR}/mcicda.def)

add_library(mcicda SHARED ${SOURCE})

set_entrypoint(mcicda 0)
target_link_libraries(mcicda wine)
add_importlibs(mcicda winmm user32 kernel32 ntdll)
add_dependencies(mcicda psdk)
add_cd_file(TARGET mcicda DESTINATION odyssey/system32 ODYSSEY_PE FOR all)
