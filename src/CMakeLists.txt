project(SRC LANGUAGES CXX)

set(PROJECT_NAME src)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} Includes)
