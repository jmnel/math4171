set( CMAKE_CXX_STANDARD 14 )
set( CMAKE_CXX_FLAGS "-Wall -Wextra" )

#find_package(PythonLibs 2.7 REQUIRED )

set( SRC_FILES
    PythonContext.cpp )

add_library( arcplot STATIC ${SRC_FILES} )

# Set library dependency include directories here
target_include_directories( arcplot PUBLIC ${PYTHON_INCLUDE_DIRS} )


set( DEBUG_FLAGS "-Wall" "-Wextra" "-O3" )
target_compile_options( arcplot PUBLIC ${DEBUG_FLAGS} )

# Link library dependency libraries here
target_link_libraries( arcplot ${PYTHON_LIBRARIES} )

