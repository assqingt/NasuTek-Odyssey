
add_definitions(-D__WINESRC__)

remove_definitions(-DWINVER=0x502)
add_definitions(-DWINVER=0x600)

remove_definitions(-D_WIN32_WINNT=0x502)
add_definitions(-D_WIN32_WINNT=0x600)

include_directories(${ODYSSEY_SOURCE_DIR}/include/odyssey/wine)

set_rc_compiler()

generate_idl_iids(mstask_local.idl)

spec2def(mstask.dll mstask.spec)

list(APPEND SOURCE
    factory.c
    mstask_main.c
    task.c
    task_scheduler.c
    task_trigger.c
    rsrc.rc
    ${CMAKE_CURRENT_BINARY_DIR}/mstask_local_i.c
    ${CMAKE_CURRENT_BINARY_DIR}/mstask_stubs.c
    ${CMAKE_CURRENT_BINARY_DIR}/mstask.def)

add_library(mstask SHARED ${SOURCE})
set_module_type(mstask win32dll)
target_link_libraries(mstask uuid wine)
add_importlibs(mstask ole32 msvcrt kernel32 ntdll)
add_pch(mstask mstask_private.h)
add_cd_file(TARGET mstask DESTINATION odyssey/system32 ODYSSEY_PE FOR all)
