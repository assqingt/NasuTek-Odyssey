
spec2def(batt.dll batt.spec)

set_rc_compiler()

add_library(batt SHARED
    batt.c
    batt.rc
    ${CMAKE_CURRENT_BINARY_DIR}/batt.def)

set_module_type(batt win32dll UNICODE)

add_importlib_target(batt.spec)

add_importlibs(batt msvcrt kernel32 ntdll)

add_cd_file(TARGET batt DESTINATION odyssey/system32 ODYSSEY_PE FOR all)
