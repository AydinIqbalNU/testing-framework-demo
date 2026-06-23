file(GLOB_RECURSE HARP_SOURCES "*.cpp") ## put all cpp files from this direc. and sub-direcs. into HARP_SOURCES list
add_library(harp SHARED ${HARP_SOURCES}) ## add HARP_SOURCES list to a library called harp
target_include_directories(harp PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}) ## files linked to this directory can see its header files
