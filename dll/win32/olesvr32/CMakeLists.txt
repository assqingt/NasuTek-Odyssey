
include_directories(${ODYSSEY_SOURCE_DIR}/include/odyssey/wine)
add_definitions(-D__WINESRC__)

spec2def(olesvr32.dll olesvr32.spec)

list(APPEND SOURCE
    olesvr_main.c
    ${CMAKE_CURRENT_BINARY_DIR}/olesvr32_stubs.c
    ${CMAKE_CURRENT_BINARY_DIR}/olesvr32.def)

add_library(olesvr32 SHARED ${SOURCE})

set_entrypoint(olesvr32 0)

target_link_libraries(olesvr32 wine)

add_importlibs(olesvr32 kernel32 ntdll)
add_dependencies(olesvr32 psdk)
add_cd_file(TARGET olesvr32 DESTINATION odyssey/system32 ODYSSEY_PE FOR all)
