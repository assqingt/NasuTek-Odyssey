
spec2def(sfc.dll sfc.spec)

list(APPEND SOURCE
    sfc.c
    ${CMAKE_CURRENT_BINARY_DIR}/sfc_stubs.c
    ${CMAKE_CURRENT_BINARY_DIR}/sfc.def)

add_library(sfc SHARED ${SOURCE})

set_module_type(sfc win32dll)

add_importlibs(sfc sfc_os msvcrt kernel32 ntdll)
add_pch(sfc precomp.h)

add_cd_file(TARGET sfc DESTINATION odyssey/system32 ODYSSEY_PE FOR all)
