##bootcd
#clear it out
file(WRITE ${CMAKE_CURRENT_BINARY_DIR}/bootcd.cmake 
    "file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/bootcd)\n")

add_custom_target(bootcd
    ${CMAKE_COMMAND} -D CD_DIR=${CMAKE_CURRENT_BINARY_DIR}/bootcd
                             -P ${CMAKE_CURRENT_BINARY_DIR}/bootcd.cmake
    COMMAND native-cdmake -v -j -m -b ${CMAKE_CURRENT_BINARY_DIR}/freeldr/bootsect/isoboot.bin ${CMAKE_CURRENT_BINARY_DIR}/bootcd ODYSSEY ${ODYSSEY_BINARY_DIR}/bootcd.iso
    DEPENDS native-cdmake
    VERBATIM)
    
##bootcdregtest
#clear it out
file(WRITE ${CMAKE_CURRENT_BINARY_DIR}/bootcdregtest.cmake 
    "file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/bootcdregtest)\n")

add_custom_target(bootcdregtest
    ${CMAKE_COMMAND} -D CD_DIR=${CMAKE_CURRENT_BINARY_DIR}/bootcdregtest
                             -P ${CMAKE_CURRENT_BINARY_DIR}/bootcdregtest.cmake
    COMMAND native-cdmake -v -j -m -b ${CMAKE_CURRENT_BINARY_DIR}/freeldr/bootsect/isobtrt.bin ${CMAKE_CURRENT_BINARY_DIR}/bootcdregtest ODYSSEY ${ODYSSEY_BINARY_DIR}/bootcdregtest.iso
    DEPENDS native-cdmake
    VERBATIM)
    

##livecd
#clear it out
file(WRITE ${CMAKE_CURRENT_BINARY_DIR}/livecd.cmake 
    "file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/livecd)\n")
#create profiles directories too
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/livecd.cmake 
    "file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/livecd/Profiles)\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/livecd.cmake 
    "file(MAKE_DIRECTORY \"${CMAKE_CURRENT_BINARY_DIR}/livecd/Profiles/All Users\")\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/livecd.cmake 
    "file(MAKE_DIRECTORY \"${CMAKE_CURRENT_BINARY_DIR}/livecd/Profiles/All Users/Desktop\")\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/livecd.cmake 
    "file(MAKE_DIRECTORY \"${CMAKE_CURRENT_BINARY_DIR}/livecd/Profiles/Default User\")\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/livecd.cmake
    "file(MAKE_DIRECTORY \"${CMAKE_CURRENT_BINARY_DIR}/livecd/Profiles/Default User/Desktop\")\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/livecd.cmake
    "file(MAKE_DIRECTORY \"${CMAKE_CURRENT_BINARY_DIR}/livecd/Profiles/Default User/My Documents\")\n")

add_custom_target(livecd
    ${CMAKE_COMMAND} -D CD_DIR=${CMAKE_CURRENT_BINARY_DIR}/livecd
                             -P ${CMAKE_CURRENT_BINARY_DIR}/livecd.cmake
    COMMAND native-cdmake -v -j -m -b ${CMAKE_CURRENT_BINARY_DIR}/freeldr/bootsect/isoboot.bin ${CMAKE_CURRENT_BINARY_DIR}/livecd ODYSSEY ${ODYSSEY_BINARY_DIR}/livecd.iso
    DEPENDS native-cdmake
    VERBATIM)

##instcd
#clear it out
file(WRITE ${CMAKE_CURRENT_BINARY_DIR}/instcd.cmake 
    "file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/instcd)\n")
#create profiles directories too
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/instcd.cmake 
    "file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/instcd/Profiles)\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/instcd.cmake 
    "file(MAKE_DIRECTORY \"${CMAKE_CURRENT_BINARY_DIR}/instcd/Profiles/All Users\")\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/instcd.cmake 
    "file(MAKE_DIRECTORY \"${CMAKE_CURRENT_BINARY_DIR}/instcd/Profiles/All Users/Desktop\")\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/instcd.cmake 
    "file(MAKE_DIRECTORY \"${CMAKE_CURRENT_BINARY_DIR}/instcd/Profiles/Default User\")\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/instcd.cmake
    "file(MAKE_DIRECTORY \"${CMAKE_CURRENT_BINARY_DIR}/instcd/Profiles/Default User/Desktop\")\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/instcd.cmake
    "file(MAKE_DIRECTORY \"${CMAKE_CURRENT_BINARY_DIR}/instcd/Profiles/Default User/My Documents\")\n")

add_custom_target(instcd
    ${CMAKE_COMMAND} -D CD_DIR=${CMAKE_CURRENT_BINARY_DIR}/instcd
                             -P ${CMAKE_CURRENT_BINARY_DIR}/instcd.cmake
    COMMAND native-cdmake -v -j -m -b ${CMAKE_CURRENT_BINARY_DIR}/freeldr/bootsect/isoboot.bin ${CMAKE_CURRENT_BINARY_DIR}/instcd ODYSSEY ${ODYSSEY_BINARY_DIR}/instcd.iso
    DEPENDS native-cdmake
    VERBATIM)
    
add_subdirectory(freeldr)
add_subdirectory(bootdata)
