# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canoncical targets will work.
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

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ras/IGVC2013/jaus/lib/active-ist/libraries/cxutils/trunk

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ras/IGVC2013/jaus/lib/active-ist/libraries/cxutils/trunk

# Include any dependencies generated for this target.
include build.root/cmake.cxutils.examples/CMakeFiles/example_mutex.dir/depend.make

# Include the progress variables for this target.
include build.root/cmake.cxutils.examples/CMakeFiles/example_mutex.dir/progress.make

# Include the compile flags for this target's objects.
include build.root/cmake.cxutils.examples/CMakeFiles/example_mutex.dir/flags.make

build.root/cmake.cxutils.examples/CMakeFiles/example_mutex.dir/__/__/src/examples/example_mutex.cpp.o: build.root/cmake.cxutils.examples/CMakeFiles/example_mutex.dir/flags.make
build.root/cmake.cxutils.examples/CMakeFiles/example_mutex.dir/__/__/src/examples/example_mutex.cpp.o: src/examples/example_mutex.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ras/IGVC2013/jaus/lib/active-ist/libraries/cxutils/trunk/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object build.root/cmake.cxutils.examples/CMakeFiles/example_mutex.dir/__/__/src/examples/example_mutex.cpp.o"
	cd /home/ras/IGVC2013/jaus/lib/active-ist/libraries/cxutils/trunk/build.root/cmake.cxutils.examples && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/example_mutex.dir/__/__/src/examples/example_mutex.cpp.o -c /home/ras/IGVC2013/jaus/lib/active-ist/libraries/cxutils/trunk/src/examples/example_mutex.cpp

build.root/cmake.cxutils.examples/CMakeFiles/example_mutex.dir/__/__/src/examples/example_mutex.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/example_mutex.dir/__/__/src/examples/example_mutex.cpp.i"
	cd /home/ras/IGVC2013/jaus/lib/active-ist/libraries/cxutils/trunk/build.root/cmake.cxutils.examples && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ras/IGVC2013/jaus/lib/active-ist/libraries/cxutils/trunk/src/examples/example_mutex.cpp > CMakeFiles/example_mutex.dir/__/__/src/examples/example_mutex.cpp.i

build.root/cmake.cxutils.examples/CMakeFiles/example_mutex.dir/__/__/src/examples/example_mutex.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/example_mutex.dir/__/__/src/examples/example_mutex.cpp.s"
	cd /home/ras/IGVC2013/jaus/lib/active-ist/libraries/cxutils/trunk/build.root/cmake.cxutils.examples && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ras/IGVC2013/jaus/lib/active-ist/libraries/cxutils/trunk/src/examples/example_mutex.cpp -o CMakeFiles/example_mutex.dir/__/__/src/examples/example_mutex.cpp.s

build.root/cmake.cxutils.examples/CMakeFiles/example_mutex.dir/__/__/src/examples/example_mutex.cpp.o.requires:
.PHONY : build.root/cmake.cxutils.examples/CMakeFiles/example_mutex.dir/__/__/src/examples/example_mutex.cpp.o.requires

build.root/cmake.cxutils.examples/CMakeFiles/example_mutex.dir/__/__/src/examples/example_mutex.cpp.o.provides: build.root/cmake.cxutils.examples/CMakeFiles/example_mutex.dir/__/__/src/examples/example_mutex.cpp.o.requires
	$(MAKE) -f build.root/cmake.cxutils.examples/CMakeFiles/example_mutex.dir/build.make build.root/cmake.cxutils.examples/CMakeFiles/example_mutex.dir/__/__/src/examples/example_mutex.cpp.o.provides.build
.PHONY : build.root/cmake.cxutils.examples/CMakeFiles/example_mutex.dir/__/__/src/examples/example_mutex.cpp.o.provides

build.root/cmake.cxutils.examples/CMakeFiles/example_mutex.dir/__/__/src/examples/example_mutex.cpp.o.provides.build: build.root/cmake.cxutils.examples/CMakeFiles/example_mutex.dir/__/__/src/examples/example_mutex.cpp.o

# Object files for target example_mutex
example_mutex_OBJECTS = \
"CMakeFiles/example_mutex.dir/__/__/src/examples/example_mutex.cpp.o"

# External object files for target example_mutex
example_mutex_EXTERNAL_OBJECTS =

bin/example_mutex: build.root/cmake.cxutils.examples/CMakeFiles/example_mutex.dir/__/__/src/examples/example_mutex.cpp.o
bin/example_mutex: lib/libcxutils.so
bin/example_mutex: lib/libcxjpeg-6b.a
bin/example_mutex: build.root/cmake.cxutils.examples/CMakeFiles/example_mutex.dir/build.make
bin/example_mutex: build.root/cmake.cxutils.examples/CMakeFiles/example_mutex.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/example_mutex"
	cd /home/ras/IGVC2013/jaus/lib/active-ist/libraries/cxutils/trunk/build.root/cmake.cxutils.examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/example_mutex.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
build.root/cmake.cxutils.examples/CMakeFiles/example_mutex.dir/build: bin/example_mutex
.PHONY : build.root/cmake.cxutils.examples/CMakeFiles/example_mutex.dir/build

build.root/cmake.cxutils.examples/CMakeFiles/example_mutex.dir/requires: build.root/cmake.cxutils.examples/CMakeFiles/example_mutex.dir/__/__/src/examples/example_mutex.cpp.o.requires
.PHONY : build.root/cmake.cxutils.examples/CMakeFiles/example_mutex.dir/requires

build.root/cmake.cxutils.examples/CMakeFiles/example_mutex.dir/clean:
	cd /home/ras/IGVC2013/jaus/lib/active-ist/libraries/cxutils/trunk/build.root/cmake.cxutils.examples && $(CMAKE_COMMAND) -P CMakeFiles/example_mutex.dir/cmake_clean.cmake
.PHONY : build.root/cmake.cxutils.examples/CMakeFiles/example_mutex.dir/clean

build.root/cmake.cxutils.examples/CMakeFiles/example_mutex.dir/depend:
	cd /home/ras/IGVC2013/jaus/lib/active-ist/libraries/cxutils/trunk && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ras/IGVC2013/jaus/lib/active-ist/libraries/cxutils/trunk /home/ras/IGVC2013/jaus/lib/active-ist/libraries/cxutils/trunk/build/cmake/examples /home/ras/IGVC2013/jaus/lib/active-ist/libraries/cxutils/trunk /home/ras/IGVC2013/jaus/lib/active-ist/libraries/cxutils/trunk/build.root/cmake.cxutils.examples /home/ras/IGVC2013/jaus/lib/active-ist/libraries/cxutils/trunk/build.root/cmake.cxutils.examples/CMakeFiles/example_mutex.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : build.root/cmake.cxutils.examples/CMakeFiles/example_mutex.dir/depend
