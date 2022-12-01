include(FetchContent)
FetchContent_Declare(googletest
    GIT_REPOSITORY https://github.com/google/googletest
    GIT_TAG main
)
FetchContent_MakeAvailable(googletest)
find_package(GTest)

add_executable(gtests tests_sf.cpp)

if (TARGET GTest::gtest_main)
    set(GTEST_TRG GTest::gtest_main)    # new cmake provided
else()
    set(GTEST_TRG gtest gtest_main)     # old cmake and pc files
endif()

target_link_libraries(gtests
    PRIVATE ${GTEST_TRG}
)
gtest_discover_tests(gtests)
