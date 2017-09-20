# ---------------------------------------------------
# -- CMakeLists.txt for `arcplot` static library --
# ---------------------------------------------------
set( CMAKE_CXX_STANDARD 17 )
set( CMAKE_CXX_FLAGS "-Wall -Wextra" )
set( DEBUG_FLAGS "-Wall" "-Wextra" "-O3" )

add_executable( playground Main.cpp )

set( DEBUG_FLAGS "-Wall" "-Wextra" "-O3" )
target_compile_options( playground PUBLIC ${DEBUG_FLAGS} )

#include_directories( arcmath )
#include_directories( arcplot )
#include_directories( arcpython )

target_link_libraries( playground ${PYTHON_LIBRARIES} )
target_link_libraries( playground arcmath )
target_link_libraries( playground arcpython )
target_link_libraries( playground arcplot )
#target_link_libraries( playground arcplot )

# Link libraries here
