
add_definitions(-D__WINESRC__)
include_directories(${ODYSSEY_SOURCE_DIR}/include/odyssey/wine)

spec2def(riched32.dll riched32.spec)

list(APPEND SOURCE
    richedit.c
    version.rc
    ${CMAKE_CURRENT_BINARY_DIR}/riched32.def)

add_library(riched32 SHARED ${SOURCE})

set_module_type(riched32 win32dll)
target_link_libraries(riched32 wine)
add_importlibs(riched32 riched20 user32 msvcrt kernel32 ntdll)
add_cd_file(TARGET riched32 DESTINATION odyssey/system32 ODYSSEY_PE FOR all)
