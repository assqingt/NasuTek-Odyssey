
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${ODYSSEY_SOURCE_DIR}/lib/newinflib
    ${ODYSSEY_SOURCE_DIR}/lib/3rdparty/zlib
    ${ODYSSEY_SOURCE_DIR}/include/odyssey/drivers)

add_executable(usetup
    interface/usetup.c
    interface/devinst.c
    interface/consup.c
    native/utils/keytrans.c
    native/utils/console.c
    native/fslist.c
    native/console.c
    bootsup.c
    cabinet.c
    chkdsk.c
    drivesup.c
    filesup.c
    filequeue.c
    format.c
    fslist.c
    genlist.c
    inffile.c
    inicache.c
    mui.c
    partlist.c
    progress.c
    registry.c
    settings.c
    usetup.rc)

target_link_libraries(usetup
    zlib
    inflib
    ext2lib
    vfatlib)

set_module_type(usetup nativecui)
add_importlibs(usetup ntdll)
add_pch(usetup usetup.h)
add_cd_file(TARGET usetup DESTINATION odyssey/system32 NO_CAB NAME_ON_CD smss.exe FOR bootcd regtest)
