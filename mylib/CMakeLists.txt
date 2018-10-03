file(GLOB SOURCES src/*.cpp)

add_library(${PROJECT_NAME} SHARED ${SOURCES})

target_include_directories(mylib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
