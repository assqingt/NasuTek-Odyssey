
spec2def(ksproxy.ax ksproxy.spec)

add_definitions(
    -DNATIVE_CPP_INCLUDE=${ODYSSEY_SOURCE_DIR}/include/c++
    -DNATIVE_C_INCLUDE=${ODYSSEY_SOURCE_DIR}/include/crt)

include_directories(BEFORE ${ODYSSEY_SOURCE_DIR}/include/c++/stlport)

add_library(ksproxy SHARED
    allocator.cpp
    basicaudio.cpp
    classfactory.cpp
    clockforward.cpp
    cvpconfig.cpp
    cvpvbiconfig.cpp
    datatype.cpp
    enum_mediatypes.cpp
    enumpins.cpp
    input_pin.cpp
    interface.cpp
    ksproxy.cpp
    ksproxy.rc
    mediasample.cpp
    node.cpp
    output_pin.cpp
    proxy.cpp
    qualityforward.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/ksproxy.def)

set_entrypoint(ksproxy 0)
set_target_properties(ksproxy PROPERTIES SUFFIX ".ax")
if(MSVC)
    set_target_properties(ksproxy PROPERTIES COMPILE_FLAGS "/GR-")
else()
    #FIXME : can't build if this is enabled, check if this is needed
    #set_target_properties(ksproxy PROPERTIES COMPILE_FLAGS "-fno-exceptions -fno-rtti")
    target_link_libraries(ksproxy -lsupc++ -lgcc -lmingw32 oldnames)
endif()

target_link_libraries(ksproxy stlport strmiids)

add_importlibs(ksproxy
    advapi32
    ole32
    setupapi
    ksuser
    msvcrt
    kernel32
    ntdll)

add_dependencies(ksproxy psdk)

add_cd_file(TARGET ksproxy DESTINATION odyssey/system32 FOR all)
