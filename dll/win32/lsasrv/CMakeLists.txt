
include_directories(
    ${CMAKE_CURRENT_BINARY_DIR}
    ${ODYSSEY_SOURCE_DIR}/include/odyssey/idl
    ${ODYSSEY_SOURCE_DIR}/include/odyssey/subsys/lsass)

add_rpc_files(server ${ODYSSEY_SOURCE_DIR}/include/odyssey/idl/lsa.idl)

set_rc_compiler()

spec2def(lsasrv.dll lsasrv.spec)

list(APPEND SOURCE
    authport.c
    lsarpc.c
    lsasrv.c
    privileges.c
    sids.c
    lsasrv.rc
    ${CMAKE_CURRENT_BINARY_DIR}/lsasrv_stubs.c
    ${CMAKE_CURRENT_BINARY_DIR}/lsasrv.def
    ${CMAKE_CURRENT_BINARY_DIR}/lsa_s.c)

add_library(lsasrv SHARED ${SOURCE})
set_module_type(lsasrv win32dll ENTRYPOINT 0 UNICODE)

set_entrypoint(lsasrv 0)
target_link_libraries(lsasrv wine ${PSEH_LIB})
add_importlibs(lsasrv rpcrt4 msvcrt kernel32 ntdll)
add_pch(lsasrv lsasrv.h)
add_dependencies(lsasrv psdk)
add_cd_file(TARGET lsasrv DESTINATION odyssey/system32 ODYSSEY_PE FOR all)
add_importlib_target(lsasrv.spec)
