
spec2def(scsiport.sys scsiport.spec)

list(APPEND SOURCE
    scsiport.c
    stubs.c
    scsiport.rc
    ${CMAKE_CURRENT_BINARY_DIR}/scsiport.def)
    
add_library(scsiport SHARED ${SOURCE})
add_pch(scsiport precomp.h)
set_module_type(scsiport kernelmodedriver)
add_importlibs(scsiport ntoskrnl hal)
add_importlib_target(scsiport.spec)
add_cd_file(TARGET scsiport DESTINATION odyssey/system32/drivers NO_CAB ODYSSEY_PE FOR all)
