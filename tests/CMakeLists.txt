include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)

FetchContent_MakeAvailable(googletest)

add_executable(harp_tests
    test_main.cpp
    test_basic.cpp
)

target_link_libraries(harp_tests
    gtest_main
    harp
)

add_test(NAME harp_tests COMMAND harp_tests)
