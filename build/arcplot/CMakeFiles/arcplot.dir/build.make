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
include arcplot/CMakeFiles/arcplot.dir/depend.make

# Include the progress variables for this target.
include arcplot/CMakeFiles/arcplot.dir/progress.make

# Include the compile flags for this target's objects.
include arcplot/CMakeFiles/arcplot.dir/flags.make

arcplot/CMakeFiles/arcplot.dir/Axes.cpp.o: arcplot/CMakeFiles/arcplot.dir/flags.make
arcplot/CMakeFiles/arcplot.dir/Axes.cpp.o: /home/jacques/repos/math4171/src/arcplot/Axes.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jacques/repos/math4171/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object arcplot/CMakeFiles/arcplot.dir/Axes.cpp.o"
	cd /home/jacques/repos/math4171/build/arcplot && ccache /usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/arcplot.dir/Axes.cpp.o -c /home/jacques/repos/math4171/src/arcplot/Axes.cpp

arcplot/CMakeFiles/arcplot.dir/Axes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/arcplot.dir/Axes.cpp.i"
	cd /home/jacques/repos/math4171/build/arcplot && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jacques/repos/math4171/src/arcplot/Axes.cpp > CMakeFiles/arcplot.dir/Axes.cpp.i

arcplot/CMakeFiles/arcplot.dir/Axes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/arcplot.dir/Axes.cpp.s"
	cd /home/jacques/repos/math4171/build/arcplot && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jacques/repos/math4171/src/arcplot/Axes.cpp -o CMakeFiles/arcplot.dir/Axes.cpp.s

arcplot/CMakeFiles/arcplot.dir/Axes.cpp.o.requires:

.PHONY : arcplot/CMakeFiles/arcplot.dir/Axes.cpp.o.requires

arcplot/CMakeFiles/arcplot.dir/Axes.cpp.o.provides: arcplot/CMakeFiles/arcplot.dir/Axes.cpp.o.requires
	$(MAKE) -f arcplot/CMakeFiles/arcplot.dir/build.make arcplot/CMakeFiles/arcplot.dir/Axes.cpp.o.provides.build
.PHONY : arcplot/CMakeFiles/arcplot.dir/Axes.cpp.o.provides

arcplot/CMakeFiles/arcplot.dir/Axes.cpp.o.provides.build: arcplot/CMakeFiles/arcplot.dir/Axes.cpp.o


arcplot/CMakeFiles/arcplot.dir/Figure.cpp.o: arcplot/CMakeFiles/arcplot.dir/flags.make
arcplot/CMakeFiles/arcplot.dir/Figure.cpp.o: /home/jacques/repos/math4171/src/arcplot/Figure.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jacques/repos/math4171/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object arcplot/CMakeFiles/arcplot.dir/Figure.cpp.o"
	cd /home/jacques/repos/math4171/build/arcplot && ccache /usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/arcplot.dir/Figure.cpp.o -c /home/jacques/repos/math4171/src/arcplot/Figure.cpp

arcplot/CMakeFiles/arcplot.dir/Figure.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/arcplot.dir/Figure.cpp.i"
	cd /home/jacques/repos/math4171/build/arcplot && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jacques/repos/math4171/src/arcplot/Figure.cpp > CMakeFiles/arcplot.dir/Figure.cpp.i

arcplot/CMakeFiles/arcplot.dir/Figure.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/arcplot.dir/Figure.cpp.s"
	cd /home/jacques/repos/math4171/build/arcplot && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jacques/repos/math4171/src/arcplot/Figure.cpp -o CMakeFiles/arcplot.dir/Figure.cpp.s

arcplot/CMakeFiles/arcplot.dir/Figure.cpp.o.requires:

.PHONY : arcplot/CMakeFiles/arcplot.dir/Figure.cpp.o.requires

arcplot/CMakeFiles/arcplot.dir/Figure.cpp.o.provides: arcplot/CMakeFiles/arcplot.dir/Figure.cpp.o.requires
	$(MAKE) -f arcplot/CMakeFiles/arcplot.dir/build.make arcplot/CMakeFiles/arcplot.dir/Figure.cpp.o.provides.build
.PHONY : arcplot/CMakeFiles/arcplot.dir/Figure.cpp.o.provides

arcplot/CMakeFiles/arcplot.dir/Figure.cpp.o.provides.build: arcplot/CMakeFiles/arcplot.dir/Figure.cpp.o


arcplot/CMakeFiles/arcplot.dir/ListPlot.cpp.o: arcplot/CMakeFiles/arcplot.dir/flags.make
arcplot/CMakeFiles/arcplot.dir/ListPlot.cpp.o: /home/jacques/repos/math4171/src/arcplot/ListPlot.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jacques/repos/math4171/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object arcplot/CMakeFiles/arcplot.dir/ListPlot.cpp.o"
	cd /home/jacques/repos/math4171/build/arcplot && ccache /usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/arcplot.dir/ListPlot.cpp.o -c /home/jacques/repos/math4171/src/arcplot/ListPlot.cpp

arcplot/CMakeFiles/arcplot.dir/ListPlot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/arcplot.dir/ListPlot.cpp.i"
	cd /home/jacques/repos/math4171/build/arcplot && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jacques/repos/math4171/src/arcplot/ListPlot.cpp > CMakeFiles/arcplot.dir/ListPlot.cpp.i

arcplot/CMakeFiles/arcplot.dir/ListPlot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/arcplot.dir/ListPlot.cpp.s"
	cd /home/jacques/repos/math4171/build/arcplot && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jacques/repos/math4171/src/arcplot/ListPlot.cpp -o CMakeFiles/arcplot.dir/ListPlot.cpp.s

arcplot/CMakeFiles/arcplot.dir/ListPlot.cpp.o.requires:

.PHONY : arcplot/CMakeFiles/arcplot.dir/ListPlot.cpp.o.requires

arcplot/CMakeFiles/arcplot.dir/ListPlot.cpp.o.provides: arcplot/CMakeFiles/arcplot.dir/ListPlot.cpp.o.requires
	$(MAKE) -f arcplot/CMakeFiles/arcplot.dir/build.make arcplot/CMakeFiles/arcplot.dir/ListPlot.cpp.o.provides.build
.PHONY : arcplot/CMakeFiles/arcplot.dir/ListPlot.cpp.o.provides

arcplot/CMakeFiles/arcplot.dir/ListPlot.cpp.o.provides.build: arcplot/CMakeFiles/arcplot.dir/ListPlot.cpp.o


arcplot/CMakeFiles/arcplot.dir/ContourPlot.cpp.o: arcplot/CMakeFiles/arcplot.dir/flags.make
arcplot/CMakeFiles/arcplot.dir/ContourPlot.cpp.o: /home/jacques/repos/math4171/src/arcplot/ContourPlot.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jacques/repos/math4171/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object arcplot/CMakeFiles/arcplot.dir/ContourPlot.cpp.o"
	cd /home/jacques/repos/math4171/build/arcplot && ccache /usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/arcplot.dir/ContourPlot.cpp.o -c /home/jacques/repos/math4171/src/arcplot/ContourPlot.cpp

arcplot/CMakeFiles/arcplot.dir/ContourPlot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/arcplot.dir/ContourPlot.cpp.i"
	cd /home/jacques/repos/math4171/build/arcplot && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jacques/repos/math4171/src/arcplot/ContourPlot.cpp > CMakeFiles/arcplot.dir/ContourPlot.cpp.i

arcplot/CMakeFiles/arcplot.dir/ContourPlot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/arcplot.dir/ContourPlot.cpp.s"
	cd /home/jacques/repos/math4171/build/arcplot && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jacques/repos/math4171/src/arcplot/ContourPlot.cpp -o CMakeFiles/arcplot.dir/ContourPlot.cpp.s

arcplot/CMakeFiles/arcplot.dir/ContourPlot.cpp.o.requires:

.PHONY : arcplot/CMakeFiles/arcplot.dir/ContourPlot.cpp.o.requires

arcplot/CMakeFiles/arcplot.dir/ContourPlot.cpp.o.provides: arcplot/CMakeFiles/arcplot.dir/ContourPlot.cpp.o.requires
	$(MAKE) -f arcplot/CMakeFiles/arcplot.dir/build.make arcplot/CMakeFiles/arcplot.dir/ContourPlot.cpp.o.provides.build
.PHONY : arcplot/CMakeFiles/arcplot.dir/ContourPlot.cpp.o.provides

arcplot/CMakeFiles/arcplot.dir/ContourPlot.cpp.o.provides.build: arcplot/CMakeFiles/arcplot.dir/ContourPlot.cpp.o


arcplot/CMakeFiles/arcplot.dir/SurfacePlot.cpp.o: arcplot/CMakeFiles/arcplot.dir/flags.make
arcplot/CMakeFiles/arcplot.dir/SurfacePlot.cpp.o: /home/jacques/repos/math4171/src/arcplot/SurfacePlot.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jacques/repos/math4171/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object arcplot/CMakeFiles/arcplot.dir/SurfacePlot.cpp.o"
	cd /home/jacques/repos/math4171/build/arcplot && ccache /usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/arcplot.dir/SurfacePlot.cpp.o -c /home/jacques/repos/math4171/src/arcplot/SurfacePlot.cpp

arcplot/CMakeFiles/arcplot.dir/SurfacePlot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/arcplot.dir/SurfacePlot.cpp.i"
	cd /home/jacques/repos/math4171/build/arcplot && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jacques/repos/math4171/src/arcplot/SurfacePlot.cpp > CMakeFiles/arcplot.dir/SurfacePlot.cpp.i

arcplot/CMakeFiles/arcplot.dir/SurfacePlot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/arcplot.dir/SurfacePlot.cpp.s"
	cd /home/jacques/repos/math4171/build/arcplot && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jacques/repos/math4171/src/arcplot/SurfacePlot.cpp -o CMakeFiles/arcplot.dir/SurfacePlot.cpp.s

arcplot/CMakeFiles/arcplot.dir/SurfacePlot.cpp.o.requires:

.PHONY : arcplot/CMakeFiles/arcplot.dir/SurfacePlot.cpp.o.requires

arcplot/CMakeFiles/arcplot.dir/SurfacePlot.cpp.o.provides: arcplot/CMakeFiles/arcplot.dir/SurfacePlot.cpp.o.requires
	$(MAKE) -f arcplot/CMakeFiles/arcplot.dir/build.make arcplot/CMakeFiles/arcplot.dir/SurfacePlot.cpp.o.provides.build
.PHONY : arcplot/CMakeFiles/arcplot.dir/SurfacePlot.cpp.o.provides

arcplot/CMakeFiles/arcplot.dir/SurfacePlot.cpp.o.provides.build: arcplot/CMakeFiles/arcplot.dir/SurfacePlot.cpp.o


# Object files for target arcplot
arcplot_OBJECTS = \
"CMakeFiles/arcplot.dir/Axes.cpp.o" \
"CMakeFiles/arcplot.dir/Figure.cpp.o" \
"CMakeFiles/arcplot.dir/ListPlot.cpp.o" \
"CMakeFiles/arcplot.dir/ContourPlot.cpp.o" \
"CMakeFiles/arcplot.dir/SurfacePlot.cpp.o"

# External object files for target arcplot
arcplot_EXTERNAL_OBJECTS =

arcplot/libarcplot.a: arcplot/CMakeFiles/arcplot.dir/Axes.cpp.o
arcplot/libarcplot.a: arcplot/CMakeFiles/arcplot.dir/Figure.cpp.o
arcplot/libarcplot.a: arcplot/CMakeFiles/arcplot.dir/ListPlot.cpp.o
arcplot/libarcplot.a: arcplot/CMakeFiles/arcplot.dir/ContourPlot.cpp.o
arcplot/libarcplot.a: arcplot/CMakeFiles/arcplot.dir/SurfacePlot.cpp.o
arcplot/libarcplot.a: arcplot/CMakeFiles/arcplot.dir/build.make
arcplot/libarcplot.a: arcplot/CMakeFiles/arcplot.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jacques/repos/math4171/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX static library libarcplot.a"
	cd /home/jacques/repos/math4171/build/arcplot && $(CMAKE_COMMAND) -P CMakeFiles/arcplot.dir/cmake_clean_target.cmake
	cd /home/jacques/repos/math4171/build/arcplot && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/arcplot.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
arcplot/CMakeFiles/arcplot.dir/build: arcplot/libarcplot.a

.PHONY : arcplot/CMakeFiles/arcplot.dir/build

arcplot/CMakeFiles/arcplot.dir/requires: arcplot/CMakeFiles/arcplot.dir/Axes.cpp.o.requires
arcplot/CMakeFiles/arcplot.dir/requires: arcplot/CMakeFiles/arcplot.dir/Figure.cpp.o.requires
arcplot/CMakeFiles/arcplot.dir/requires: arcplot/CMakeFiles/arcplot.dir/ListPlot.cpp.o.requires
arcplot/CMakeFiles/arcplot.dir/requires: arcplot/CMakeFiles/arcplot.dir/ContourPlot.cpp.o.requires
arcplot/CMakeFiles/arcplot.dir/requires: arcplot/CMakeFiles/arcplot.dir/SurfacePlot.cpp.o.requires

.PHONY : arcplot/CMakeFiles/arcplot.dir/requires

arcplot/CMakeFiles/arcplot.dir/clean:
	cd /home/jacques/repos/math4171/build/arcplot && $(CMAKE_COMMAND) -P CMakeFiles/arcplot.dir/cmake_clean.cmake
.PHONY : arcplot/CMakeFiles/arcplot.dir/clean

arcplot/CMakeFiles/arcplot.dir/depend:
	cd /home/jacques/repos/math4171/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jacques/repos/math4171/src /home/jacques/repos/math4171/src/arcplot /home/jacques/repos/math4171/build /home/jacques/repos/math4171/build/arcplot /home/jacques/repos/math4171/build/arcplot/CMakeFiles/arcplot.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : arcplot/CMakeFiles/arcplot.dir/depend

