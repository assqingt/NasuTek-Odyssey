set_rc_compiler()

spec2def(d3dx9_35.dll d3dx9_35.spec)

list(APPEND SOURCE
    d3dx9_35_main.c
    version.rc
    ${CMAKE_CURRENT_BINARY_DIR}/d3dx9_35.def)

add_definitions(-D__WINESRC__)

include_directories(${ODYSSEY_SOURCE_DIR}/include/odyssey/wine)

add_library(d3dx9_35 SHARED ${SOURCE})
set_module_type(d3dx9_35 win32dll)

target_link_libraries(d3dx9_35
    wine)

add_importlibs(d3dx9_35
    d3dx9_36
    d3d9
    user32
    gdi32
    advapi32
    msvcrt
    kernel32
    ntdll)

add_dependencies(d3dx9_35 wineheaders)
add_cd_file(TARGET d3dx9_35 DESTINATION odyssey/system32 FOR all)
