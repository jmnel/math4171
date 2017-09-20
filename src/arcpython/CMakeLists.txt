# ---------------------------------------------------
# -- CMakeLists.txt for `arcpython` static library --
# ---------------------------------------------------
set( CMAKE_CXX_STANDARD 14 )
set( CMAKE_CXX_FLAGS "-Wall -Wextra" )

set( SRC_FILES
    PythonContext.cpp
    PythonFloat.cpp
    PythonFunction.cpp
    PythonList.cpp
    PythonModule.cpp
    PythonObject.cpp
    PythonTuple.cpp
    )

add_library( arcpython STATIC ${SRC_FILES} )
target_include_directories( arcpython PUBLIC . )
target_include_directories( arcpython PUBLIC ${PYTHON_INCLUDE_DIRS} )

# Set library dependency include directories here
include_directories( ${PYTHON_INCLUDE_DIRS} )
include_directories( arcmath )

set( DEBUG_FLAGS "-Wall" "-Wextra" "-O3" )
target_compile_options( arcpython PUBLIC ${DEBUG_FLAGS} )

# Link library dependency libraries here
target_link_libraries( arcpython ${PYTHON_LIBRARIES} )
target_link_libraries( arcpython arcmath )
