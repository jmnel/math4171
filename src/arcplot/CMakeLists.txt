# ---------------------------------------------------
# -- CMakeLists.txt for `arcplot` static library --
# ---------------------------------------------------
set( CMAKE_CXX_STANDARD 17 )
set( CMAKE_CXX_FLAGS "-Wall -Wextra" )
set( DEBUG_FLAGS "-Wall" "-Wextra" "-O3" )

set( SRC_FILES
    Axes.cpp
    Figure.cpp
    ListPlot.cpp
    ContourPlot.cpp
    SurfacePlot.cpp
    )

add_library( arcplot STATIC ${SRC_FILES} )
target_compile_options( arcplot PUBLIC ${DEBUG_FLAGS} )
target_compile_options( arcplot PUBLIC ${DEBUG_FLAGS} )

target_include_directories( arcplot PUBLIC . )

# Set library dependency include directories here
include_directories( arcpython )

# Link library dependency libraries here
target_link_libraries( arcplot arcpython )
