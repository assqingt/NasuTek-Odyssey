
add_definitions(-D__WINESRC__)
include_directories(${ODYSSEY_SOURCE_DIR}/include/odyssey/wine)

spec2def(xmllite.dll xmllite.spec)

list(APPEND SOURCE
    reader.c
    xmllite_main.c
    #${ODYSSEY_BINARY_DIR}/include/psdk/xmllite_i.c
    ${CMAKE_CURRENT_BINARY_DIR}/xmllite_stubs.c
    ${CMAKE_CURRENT_BINARY_DIR}/xmllite.def)

add_library(xmllite SHARED ${SOURCE})

set_module_type(xmllite win32dll)

target_link_libraries(xmllite wine uuid)

add_importlibs(xmllite msvcrt kernel32 ntdll)
add_importlib_target(xmllite.spec)
add_cd_file(TARGET xmllite DESTINATION odyssey/system32 ODYSSEY_PE FOR all)
