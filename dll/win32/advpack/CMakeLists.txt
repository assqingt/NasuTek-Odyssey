
add_definitions(-D__WINESRC__)

include_directories(${ODYSSEY_SOURCE_DIR}/include/odyssey/wine)

spec2def(advpack.dll advpack.spec)

list(APPEND SOURCE
    advpack.c
    files.c
    install.c
    reg.c
    ${CMAKE_CURRENT_BINARY_DIR}/advpack.def)

add_library(advpack SHARED ${SOURCE})

set_module_type(advpack win32dll)

target_link_libraries(advpack wine)

add_importlibs(advpack ole32 setupapi version advapi32 msvcrt kernel32 ntdll)
add_cd_file(TARGET advpack DESTINATION odyssey/system32 ODYSSEY_PE FOR all)
