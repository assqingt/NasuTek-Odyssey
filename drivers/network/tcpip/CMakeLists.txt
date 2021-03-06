
include_directories(
    BEFORE include
    ${ODYSSEY_SOURCE_DIR}/lib/drivers/lwip/src/include
    ${ODYSSEY_SOURCE_DIR}/lib/drivers/lwip/src/include/ipv4)

add_definitions(
    -DNDIS40
    -D_NTDRIVER_)

spec2def(tcpip.sys tcpip.spec)

list(APPEND SOURCE
    datalink/lan.c
    tcpip/ainfo.c
    tcpip/buffer.c
    tcpip/dispatch.c
    tcpip/fileobjs.c
    tcpip/iinfo.c
    tcpip/info.c
    tcpip/lock.c
    tcpip/main.c
    tcpip/ninfo.c
    tcpip/proto.c
    tcpip/tinfo.c
    tcpip/wait.c
    tcpip.rc
    ${CMAKE_CURRENT_BINARY_DIR}/tcpip.def)

add_library(tcpip SHARED ${SOURCE})

target_link_libraries(tcpip
    ip
    lwip
    ${PSEH_LIB}
    chew)

set_module_type(tcpip kernelmodedriver)
add_importlibs(tcpip ndis ntoskrnl hal)

add_pch(tcpip include/precomp.h)

add_cd_file(TARGET tcpip DESTINATION odyssey/system32/drivers ODYSSEY_PE FOR all)
