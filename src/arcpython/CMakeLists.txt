# ---------------------------------------------------
# -- CMakeLists.txt for `arcpython` static library --
# ---------------------------------------------------
set( CMAKE_CXX_STANDARD 17 )
set( CMAKE_CXX_FLAGS "-Wall -Wextra" )
set( DEBUG_FLAGS "-Wall" "-Wextra" "-O3" )

set( SRC_FILES
    PythonCommon.cpp
    PythonContext.cpp
    PythonFloat.cpp
    PythonFunction.cpp
    PythonList.cpp
    PythonModule.cpp
    PythonObject.cpp
    PythonString.cpp
    PythonTuple.cpp
    )

add_library( arcpython STATIC ${SRC_FILES} )
target_compile_options( arcpython PUBLIC ${DEBUG_FLAGS} )

target_include_directories( arcpython PUBLIC . )
target_include_directories( arcpython PUBLIC ${PYTHON_INCLUDE_DIRS} )

# Set library dependency include directories here
#include_directories( ${PYTHON_INCLUDE_DIRS} )
#include_directories( arcmath )


# Link library dependency libraries here
target_link_libraries( arcpython ${PYTHON_LIBRARIES} )
target_link_libraries( arcpython arcmath )
