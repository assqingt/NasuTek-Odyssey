
include_directories(..)

add_library(ramdisk SHARED ramdisk.c ramdisk.rc)

set_module_type(ramdisk kernelmodedriver)
add_importlibs(ramdisk
    ntoskrnl
    hal)

add_cd_file(TARGET ramdisk DESTINATION odyssey/system32/drivers NO_CAB ODYSSEY_PE FOR all)
