file(GLOB SOURCES src/*.cpp)
add_executable(tests ${SOURCES})

target_link_libraries(tests Catch2::Catch2 mylib)

include(CTest)
include(Catch)

catch_discover_tests(tests)
