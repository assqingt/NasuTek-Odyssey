
spec2def(ufatx.dll ufatx.spec)

list(APPEND SOURCE
    ufatx.rc
    ${CMAKE_CURRENT_BINARY_DIR}/ufatx.def)

add_library(ufatx SHARED ${SOURCE})

set_entrypoint(ufatx 0)

target_link_libraries(ufatx vfatxlib)
add_importlibs(ufatx ntdll)
add_importlib_target(ufatx.spec)
add_dependencies(ufatx psdk)
add_cd_file(TARGET ufatx DESTINATION odyssey/system32 ODYSSEY_PE FOR all)
