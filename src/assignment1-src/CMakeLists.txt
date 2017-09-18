set( CMAKE_CXX_STANDARD 14 )

add_executable( assignment1 Main.cpp )

set( DEBUG_FLAGS "-Wall" "-Wextra" "-O3" )
target_compile_options( assignment1 PUBLIC ${DEBUG_FLAGS} )

include_directories( "../../src/arcmath" )
include_directories( "../../src/arcpython" )

target_include_directories( assignment1 PRIVATE ${PYTHON_INCLUDE_DIRS} )
target_link_libraries( assignment1 ${PYTHON_LIBRARIES} )
target_link_libraries( assignment1 arcmath )
target_link_libraries( assignment1 arcpython )

# Link libraries here
