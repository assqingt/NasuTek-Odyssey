
include_directories(${ODYSSEY_SOURCE_DIR}/include/odyssey/wine)
add_definitions(-D__WINESRC__)

spec2def(sxs.dll sxs.spec)

list(APPEND SOURCE
    sxs.c
    ${CMAKE_CURRENT_BINARY_DIR}/sxs_stubs.c
    ${CMAKE_CURRENT_BINARY_DIR}/sxs.def)

add_library(sxs SHARED ${SOURCE})
set_entrypoint(sxs 0)

target_link_libraries(sxs wine)

add_importlibs(sxs kernel32 ntdll)
add_dependencies(sxs psdk)

add_cd_file(TARGET sxs DESTINATION odyssey/system32 ODYSSEY_PE FOR all)
