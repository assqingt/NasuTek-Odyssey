
include_directories(${ODYSSEY_SOURCE_DIR}/include/odyssey/wine)

add_definitions(
    -D__WINESRC__
    -D_WINE)

spec2def(msvidc32.dll msvidc32.spec)

list(APPEND SOURCE
    msvideo1.c
    rsrc.rc
    ${CMAKE_CURRENT_BINARY_DIR}/msvidc32.def)

add_library(msvidc32 SHARED ${SOURCE})

set_module_type(msvidc32 win32dll)
target_link_libraries(msvidc32 wine)
add_importlibs(msvidc32 user32 msvcrt kernel32 ntdll)
add_cd_file(TARGET msvidc32 DESTINATION odyssey/system32 ODYSSEY_PE FOR all)
