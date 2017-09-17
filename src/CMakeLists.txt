cmake_minimum_required( VERSION 3.4 FATAL_ERROR )
project( Math4171 VERSION 0.1 LANGUAGES CXX )

set( CMAKE_CXX_COMPILER_LAUNCHER ccache )
set( CMAKE_RUNTIME_OUTPUT_DIRECTORY ${Math4171_SOURCE_DIR}/../bin/Debug )
set( CMAKE_MODULE_PATH ${Math4171_SOURCE_DIR}/../cmake/modules )
set( CMAKE_EXPORT_COMPILE_COMMANDS ON )

# Run `find_package` modules here for dependencies
find_package(PythonLibs 2.7 REQUIRED )
#target_include_directories( Math4171 PRIVATE ${PYTHON_INCLUDE_DIRS} )

add_subdirectory( ./arcmath )
add_subdirectory( ./assignment1-src )
