set( CMAKE_CXX_STANDARD 14 )
set( CMAKE_CXX_FLAGS "-Wall -Wextra" )

#find_package(PythonLibs 2.7 REQUIRED )

set( SRC_FILES
    PythonContext.cpp
    PythonFunction.cpp
    PythonModule.cpp
    PythonTupple.cpp
    )

add_library( arcpython STATIC ${SRC_FILES} )

# Set library dependency include directories here
target_include_directories( arcpython PUBLIC ${PYTHON_INCLUDE_DIRS} )
target_include_directories( arcpython PUBLIC arcmath )


set( DEBUG_FLAGS "-Wall" "-Wextra" "-O3" )
target_compile_options( arcpython PUBLIC ${DEBUG_FLAGS} )

# Link library dependency libraries here
target_link_libraries( arcpython ${PYTHON_LIBRARIES} )
target_link_libraries( arcpython arcmath )

#add_custom_command(
    #TARGET arcmath POST_BUILD
    #COMMAND ${CMAKE_COMMAND} -E copy
    #${CMAKE_SOURCE_DIR}/../build/compile_commands.json
    #${CMAKE_SOURCE_DIR}/../compile_commands.json )
