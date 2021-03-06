
add_definitions(-D__WINESRC__)
include_directories(${ODYSSEY_SOURCE_DIR}/include/odyssey/wine)

set_rc_compiler()
spec2def(wldap32.dll wldap32.spec)

list(APPEND SOURCE
    add.c
    ber.c
    bind.c
    compare.c
    control.c
    delete.c
    dn.c
    error.c
    extended.c
    init.c
    main.c
    misc.c
    modify.c
    modrdn.c
    option.c
    page.c
    parse.c
    rename.c
    search.c
    value.c
    wldap32.rc
    ${CMAKE_CURRENT_BINARY_DIR}/wldap32_stubs.c
    ${CMAKE_CURRENT_BINARY_DIR}/wldap32.def)

add_library(wldap32 SHARED ${SOURCE})

set_module_type(wldap32 win32dll)

target_link_libraries(wldap32 wine)

add_importlibs(wldap32 user32 msvcrt kernel32 ntdll)
add_importlib_target(wldap32.spec)
add_cd_file(TARGET wldap32 DESTINATION odyssey/system32 ODYSSEY_PE FOR all)
