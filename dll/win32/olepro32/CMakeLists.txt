
add_definitions(-D__WINESRC__)
include_directories(${ODYSSEY_SOURCE_DIR}/include/odyssey/wine)

spec2def(olepro32.dll olepro32.spec)

list(APPEND SOURCE
    olepro32stubs.c
    version.rc
    ${CMAKE_CURRENT_BINARY_DIR}/olepro32.def)

add_library(olepro32 SHARED ${SOURCE})

set_entrypoint(olepro32 0)

target_link_libraries(olepro32 wine)

add_importlibs(olepro32
    oleaut32
    kernel32
    ntdll)

add_cd_file(TARGET olepro32 DESTINATION odyssey/system32 ODYSSEY_PE FOR all)
