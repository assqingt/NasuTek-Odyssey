
set_rc_compiler()

spec2def(dplayx.dll dplayx.spec)

list(APPEND SOURCE
    dpclassfactory.c
    dplay.c
    dplaysp.c
    dplayx_global.c
    dplayx_main.c
    dplayx_messages.c
    dplobby.c
    lobbysp.c
    name_server.c
    regsvr.c
    version.rc
    ${CMAKE_CURRENT_BINARY_DIR}/dplayx.def)

include_directories(${ODYSSEY_SOURCE_DIR}/include/odyssey/wine)

add_library(dplayx SHARED ${SOURCE})
set_module_type(dplayx win32dll)

target_link_libraries(dplayx
    wine
    uuid
    dxguid)

add_importlibs(dplayx
    advapi32
    ole32
    user32
    winmm
    msvcrt
    kernel32
    ntdll)

add_cd_file(TARGET dplayx DESTINATION odyssey/system32 FOR all)
add_importlib_target(dplayx.spec)
