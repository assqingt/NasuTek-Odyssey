
spec2def(ntdll.dll def/ntdll.spec)

add_definitions(
    -D__NTDLL__
    -D_NTOSKRNL_
    -DCRTDLL)

include_directories(
    BEFORE include
    ${ODYSSEY_SOURCE_DIR}/include/odyssey/subsys)

list(APPEND SOURCE
    csr/api.c
    csr/capture.c
    csr/connect.c
    dbg/dbgui.c
    ldr/ldrapi.c
    ldr/ldrinit.c
    ldr/ldrpe.c
    ldr/ldrutils.c
    rtl/libsupp.c
    rtl/version.c
    def/ntdll.rc
    ${CMAKE_CURRENT_BINARY_DIR}/ntdll.def)

if(ARCH MATCHES i386)
    list(APPEND SOURCE dispatch/i386/dispatch.S)
elseif(ARCH MATCHES amd64)
    list(APPEND SOURCE dispatch/amd64/stubs.c)
elseif(ARCH MATCHES arm)
    list(APPEND SOURCE dispatch/arm/stubs_asm.s)
else()
    list(APPEND SOURCE dispatch/dispatch.c)
endif(ARCH MATCHES i386)

add_library(ntdll SHARED ${SOURCE})

set_module_type(ntdll win32dll ENTRYPOINT 0)

if(MSVC)
    add_target_link_flags(ntdll "/RELEASE")
endif()

target_link_libraries(ntdll
                      rtl
                      ntdllsys
                      libcntpr
                      ${PSEH_LIB})

add_pch(ntdll include/ntdll.h)
add_dependencies(ntdll ntstatus asm)

add_cd_file(TARGET ntdll DESTINATION odyssey/system32 NO_CAB FOR all)
add_importlib_target(def/ntdll.spec)
