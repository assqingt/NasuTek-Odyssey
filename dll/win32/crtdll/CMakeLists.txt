
spec2def(crtdll.dll crtdll.spec)

add_definitions(
    -DUSE_MSVCRT_PREFIX
    -D_MSVCRT_LIB_
    -D_MSVCRT_
    -DCRTDLL
    -D_CTYPE_DISABLE_MACROS
    -D_NO_INLINING
    -D__MINGW_IMPORT="")

include_directories(${ODYSSEY_SOURCE_DIR}/lib/sdk/crt/include)

list(APPEND SOURCE
    dllmain.c
    crtdll.rc
    ${CMAKE_CURRENT_BINARY_DIR}/crtdll.def)

add_library(crtdll SHARED ${SOURCE})

set_module_type(crtdll win32dll)

set_entrypoint(crtdll DllMain 12)

target_link_libraries(crtdll wine crt)

if(MSVC)
    add_importlibs(crtdll msvcrt)
    target_link_libraries(crtdll oldnames)
endif()

add_importlibs(crtdll kernel32 ntdll)
add_pch(crtdll precomp.h)

add_cd_file(TARGET crtdll DESTINATION odyssey/system32 ODYSSEY_PE ODYSSEY_PE FOR all)
