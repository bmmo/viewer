cmake_minimum_required ( VERSION 3.1 )

project ( viewer_core )

set ( CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake )
set ( CMAKE_CXX_STANDARD 11 )

## CMake
include ( BuildLocation )

# Add Library Target
set ( 
	${PROJECT_NAME}_includes
	${PROJECT_SOURCE_DIR}/include/
	)

file ( 
	GLOB_RECURSE
	${PROJECT_NAME}_src
	${PROJECT_SOURCE_DIR}/src/*.cpp
	)

add_library (
	${PROJECT_NAME}
	STATIC
	${${PROJECT_NAME}_src}
	)

target_include_directories (
	${PROJECT_NAME}
	PUBLIC
	${${PROJECT_NAME}_includes}
	)

