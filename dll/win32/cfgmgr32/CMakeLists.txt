
spec2def(cfgmgr32.dll cfgmgr32.spec)

list(APPEND SOURCE
    cfgmgr32.rc
    ${CMAKE_CURRENT_BINARY_DIR}/cfgmgr32_stubs.c
    ${CMAKE_CURRENT_BINARY_DIR}/cfgmgr32.def)

add_library(cfgmgr32 SHARED ${SOURCE})

set_entrypoint(cfgmgr32 0)
add_importlibs(cfgmgr32 setupapi kernel32 ntdll)
add_dependencies(cfgmgr32 psdk)
add_cd_file(TARGET cfgmgr32 DESTINATION odyssey/system32 ODYSSEY_PE FOR all)
