# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jacques/repos/math4171/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jacques/repos/math4171/build

# Include any dependencies generated for this target.
include assignment1-src/CMakeFiles/assignment1.dir/depend.make

# Include the progress variables for this target.
include assignment1-src/CMakeFiles/assignment1.dir/progress.make

# Include the compile flags for this target's objects.
include assignment1-src/CMakeFiles/assignment1.dir/flags.make

assignment1-src/CMakeFiles/assignment1.dir/Main.cpp.o: assignment1-src/CMakeFiles/assignment1.dir/flags.make
assignment1-src/CMakeFiles/assignment1.dir/Main.cpp.o: /home/jacques/repos/math4171/src/assignment1-src/Main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jacques/repos/math4171/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object assignment1-src/CMakeFiles/assignment1.dir/Main.cpp.o"
	cd /home/jacques/repos/math4171/build/assignment1-src && ccache /usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/assignment1.dir/Main.cpp.o -c /home/jacques/repos/math4171/src/assignment1-src/Main.cpp

assignment1-src/CMakeFiles/assignment1.dir/Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/assignment1.dir/Main.cpp.i"
	cd /home/jacques/repos/math4171/build/assignment1-src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jacques/repos/math4171/src/assignment1-src/Main.cpp > CMakeFiles/assignment1.dir/Main.cpp.i

assignment1-src/CMakeFiles/assignment1.dir/Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/assignment1.dir/Main.cpp.s"
	cd /home/jacques/repos/math4171/build/assignment1-src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jacques/repos/math4171/src/assignment1-src/Main.cpp -o CMakeFiles/assignment1.dir/Main.cpp.s

assignment1-src/CMakeFiles/assignment1.dir/Main.cpp.o.requires:

.PHONY : assignment1-src/CMakeFiles/assignment1.dir/Main.cpp.o.requires

assignment1-src/CMakeFiles/assignment1.dir/Main.cpp.o.provides: assignment1-src/CMakeFiles/assignment1.dir/Main.cpp.o.requires
	$(MAKE) -f assignment1-src/CMakeFiles/assignment1.dir/build.make assignment1-src/CMakeFiles/assignment1.dir/Main.cpp.o.provides.build
.PHONY : assignment1-src/CMakeFiles/assignment1.dir/Main.cpp.o.provides

assignment1-src/CMakeFiles/assignment1.dir/Main.cpp.o.provides.build: assignment1-src/CMakeFiles/assignment1.dir/Main.cpp.o


# Object files for target assignment1
assignment1_OBJECTS = \
"CMakeFiles/assignment1.dir/Main.cpp.o"

# External object files for target assignment1
assignment1_EXTERNAL_OBJECTS =

/home/jacques/repos/math4171/bin/Debug/assignment1: assignment1-src/CMakeFiles/assignment1.dir/Main.cpp.o
/home/jacques/repos/math4171/bin/Debug/assignment1: assignment1-src/CMakeFiles/assignment1.dir/build.make
/home/jacques/repos/math4171/bin/Debug/assignment1: /usr/lib/libpython3.6m.so
/home/jacques/repos/math4171/bin/Debug/assignment1: arcmath/libarcmath.a
/home/jacques/repos/math4171/bin/Debug/assignment1: arcpython/libarcpython.a
/home/jacques/repos/math4171/bin/Debug/assignment1: arcplot/libarcplot.a
/home/jacques/repos/math4171/bin/Debug/assignment1: arcpython/libarcpython.a
/home/jacques/repos/math4171/bin/Debug/assignment1: /usr/lib/libpython3.6m.so
/home/jacques/repos/math4171/bin/Debug/assignment1: arcmath/libarcmath.a
/home/jacques/repos/math4171/bin/Debug/assignment1: assignment1-src/CMakeFiles/assignment1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jacques/repos/math4171/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/jacques/repos/math4171/bin/Debug/assignment1"
	cd /home/jacques/repos/math4171/build/assignment1-src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/assignment1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
assignment1-src/CMakeFiles/assignment1.dir/build: /home/jacques/repos/math4171/bin/Debug/assignment1

.PHONY : assignment1-src/CMakeFiles/assignment1.dir/build

assignment1-src/CMakeFiles/assignment1.dir/requires: assignment1-src/CMakeFiles/assignment1.dir/Main.cpp.o.requires

.PHONY : assignment1-src/CMakeFiles/assignment1.dir/requires

assignment1-src/CMakeFiles/assignment1.dir/clean:
	cd /home/jacques/repos/math4171/build/assignment1-src && $(CMAKE_COMMAND) -P CMakeFiles/assignment1.dir/cmake_clean.cmake
.PHONY : assignment1-src/CMakeFiles/assignment1.dir/clean

assignment1-src/CMakeFiles/assignment1.dir/depend:
	cd /home/jacques/repos/math4171/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jacques/repos/math4171/src /home/jacques/repos/math4171/src/assignment1-src /home/jacques/repos/math4171/build /home/jacques/repos/math4171/build/assignment1-src /home/jacques/repos/math4171/build/assignment1-src/CMakeFiles/assignment1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : assignment1-src/CMakeFiles/assignment1.dir/depend

