
set_rc_compiler()

add_library(tapiui SHARED tapiui.rc)
set_entrypoint(tapiui 0)
add_dependencies(tapiui psdk)
add_cd_file(TARGET tapiui DESTINATION odyssey/system32 ODYSSEY_PE FOR all)
