
set_rc_compiler()

spec2def(input.dll input.spec)

add_library(input SHARED
    input.c
    settings.c
    keysettings.c
    add.c
    changekeyseq.c
    input.rc
    ${CMAKE_CURRENT_BINARY_DIR}/input.def)

set_module_type(input win32dll UNICODE)

add_importlibs(input
    msvcrt
    advapi32
    user32
    comctl32
    gdi32
    kernel32)

add_pch(input input.h)
add_cd_file(TARGET input DESTINATION odyssey/system32 FOR all)
