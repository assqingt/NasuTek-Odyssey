
if(NOT MSVC)

include_directories(${ODYSSEY_SOURCE_DIR}/include/odyssey/wine)
add_definitions(-D__WINESRC__ -DMSIRUNMODE=MSIRUNMODE_T)

remove_definitions(-D_WIN32_WINNT=0x502)
add_definitions(-D_WIN32_WINNT=0x600)

set_rc_compiler()
spec2def(msi.dll msi.spec)

generate_idl_iids(msiserver.idl)

list(APPEND SOURCE
    action.c
    alter.c
    appsearch.c
    assembly.c
    automation.c
    classes.c
    cond.tab.c
    create.c
    custom.c
    database.c
    delete.c
    dialog.c
    distinct.c
    drop.c
    events.c
    files.c
    font.c
    format.c
    handle.c
    helpers.c
    insert.c
    install.c
    join.c
    media.c
    msi.c
    msi_main.c
    msiquery.c
    package.c
    preview.c
    record.c
    registry.c
    regsvr.c
    script.c
    select.c
    source.c
    sql.tab.c
    storages.c
    streams.c
    string.c
    suminfo.c
    table.c
    tokenize.c
    update.c
    upgrade.c
    where.c
    msi.rc
    ${CMAKE_CURRENT_BINARY_DIR}/msiserver_i.c
    ${CMAKE_CURRENT_BINARY_DIR}/msi_stubs.c
    ${CMAKE_CURRENT_BINARY_DIR}/msi.def)

if(MSVC)
    set_source_files_properties(custom.c PROPERTIES COMPILE_FLAGS /FImsvchelper.h)
endif()

add_library(msi SHARED ${SOURCE})

add_idl_headers(msi_idlheader msiserver.idl)
add_typelib(msi_tlb msiserver.idl)
set_module_type(msi win32dll)
target_link_libraries(msi uuid ${PSEH_LIB} wine)
add_dependencies(msi msi_idlheader msi_tlb)
add_delay_importlibs(msi odbccp32)

add_importlibs(msi
    advapi32
    cabinet
    comctl32
    gdi32
    ole32
    oleaut32
    shell32
    shlwapi
    urlmon
    user32
    version
    wininet
    msvcrt
    kernel32
    ntdll)

add_pch(msi msipriv.h)
add_cd_file(TARGET msi DESTINATION odyssey/system32 ODYSSEY_PE FOR all)

endif(NOT MSVC)

add_importlib_target(msi.spec)
