project(Includes LANGUAGES CXX)

set(PROJECT Includes)

set(INCLUDES 
	header/Matrix.hpp)

set(SOURCES 
	src/Matrix.cpp)

add_library(${PROJECT} STATIC
	${INCLUDES}
	${SOURCES})

target_include_directories(${PROJECT} PUBLIC header)
target_include_directories(${PROJECT} PRIVATE src)
