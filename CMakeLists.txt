cmake_minimum_required(VERSION 3.20) # set c version to something dependable
project(HARP_Testing_Demo) # define project name

enable_testing() # grants access to ctests, which keeps track of testing metadata

# this is where to find the other sub CMakeLists.txt files
add_subdirectory(src)
add_subdirectory(tests)
