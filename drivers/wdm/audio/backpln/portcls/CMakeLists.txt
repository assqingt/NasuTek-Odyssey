
set_cpp()

remove_definitions(-D_WIN32_WINNT=0x502)
add_definitions(-D_WIN32_WINNT=0x600)

spec2def(portcls.sys portcls.spec)

add_library(portcls SHARED
    adapter.cpp
    api.cpp
    connection.cpp
    dispatcher.cpp
    dll.cpp
    dma_slave.cpp
    drm.cpp
    drm_port.cpp
    filter_topology.cpp
    filter_dmus.cpp
    filter_wavecyclic.cpp
    filter_wavepci.cpp
    filter_wavert.cpp
    guids.cpp
    interrupt.cpp
    irp.cpp
    irpstream.cpp
    miniport.cpp
    miniport_dmus.cpp
    miniport_fmsynth.cpp
    pin_dmus.cpp
    pin_wavecyclic.cpp
    pin_wavepci.cpp
    pin_wavert.cpp
    pool.cpp
    port.cpp
    port_dmus.cpp
    port_topology.cpp
    port_wavecyclic.cpp
    port_wavepci.cpp
    port_wavert.cpp
    port_wavertstream.cpp
    power.cpp
    propertyhandler.cpp
    purecall.cpp
    registry.cpp
    resource.cpp
    service_group.cpp
    undoc.cpp
    unregister.cpp
    version.cpp
    portcls.rc
    ${CMAKE_CURRENT_BINARY_DIR}/portcls.def)

target_link_libraries(portcls
    libcntpr
    stlport
    ${PSEH_LIB})

if(MSVC)
    set_target_properties(portcls PROPERTIES COMPILE_FLAGS "/GR-")
else()
    target_link_libraries(portcls -lgcc)
    set_target_properties(portcls PROPERTIES COMPILE_FLAGS "-fno-exceptions -fno-rtti")
endif(MSVC)

add_pch(portcls private.hpp)
set_entrypoint(portcls 0)
set_image_base(portcls 0x00010000)
set_subsystem(portcls native)
set_target_properties(portcls PROPERTIES SUFFIX ".sys")
add_importlibs(portcls ntoskrnl ks drmk hal)
add_cd_file(TARGET portcls DESTINATION odyssey/system32/drivers ODYSSEY_PE FOR all)