
add_definitions(-D__WINESRC__)
include_directories(${ODYSSEY_SOURCE_DIR}/include/odyssey/wine)

spec2def(msisip.dll msisip.spec)

list(APPEND SOURCE
    main.c
    ${CMAKE_CURRENT_BINARY_DIR}/msisip_stubs.c
    ${CMAKE_CURRENT_BINARY_DIR}/msisip.def)

add_library(msisip SHARED ${SOURCE})

set_module_type(msisip win32dll)

target_link_libraries(msisip wine)
add_importlibs(msisip crypt32 ole32 msvcrt kernel32 ntdll)
add_cd_file(TARGET msisip DESTINATION odyssey/system32 ODYSSEY_PE FOR all)
