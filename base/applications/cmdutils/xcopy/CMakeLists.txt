
set_rc_compiler()

add_executable(xcopy xcopy.c rsrc.rc)

target_link_libraries(xcopy wine)
set_module_type(xcopy win32cui UNICODE)
add_importlibs(xcopy shell32 user32 msvcrt kernel32 ntdll)
add_cd_file(TARGET xcopy DESTINATION odyssey/system32 FOR all)
