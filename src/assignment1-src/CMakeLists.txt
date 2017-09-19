# ---------------------------------------------------
# -- CMakeLists.txt for `arcplot` static library --
# ---------------------------------------------------
set( CMAKE_CXX_STANDARD 14 )
set( CMAKE_CXX_FLAGS "-Wall -Wextra" )
set( DEBUG_FLAGS "-Wall" "-Wextra" "-O3" )

add_executable( assignment1 Main.cpp )

set( DEBUG_FLAGS "-Wall" "-Wextra" "-O3" )
target_compile_options( assignment1 PUBLIC ${DEBUG_FLAGS} )

include_directories( arcplot )

target_link_libraries( assignment1 ${PYTHON_LIBRARIES} )
target_link_libraries( assignment1 arcmath )
target_link_libraries( assignment1 arcpython )
target_link_libraries( assignment1 arcplot )

# Link libraries here
