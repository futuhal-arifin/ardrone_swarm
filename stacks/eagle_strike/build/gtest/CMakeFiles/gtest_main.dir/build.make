# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_SOURCE_DIR = /home/futuhal57/ros/stacks/eagle_strike

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/futuhal57/ros/stacks/eagle_strike/build

# Include any dependencies generated for this target.
include gtest/CMakeFiles/gtest_main.dir/depend.make

# Include the progress variables for this target.
include gtest/CMakeFiles/gtest_main.dir/progress.make

# Include the compile flags for this target's objects.
include gtest/CMakeFiles/gtest_main.dir/flags.make

gtest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o: gtest/CMakeFiles/gtest_main.dir/flags.make
gtest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o: /usr/src/gtest/src/gtest_main.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/futuhal57/ros/stacks/eagle_strike/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object gtest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o"
	cd /home/futuhal57/ros/stacks/eagle_strike/build/gtest && /usr/bin/g++-4.7   $(CXX_DEFINES) $(CXX_FLAGS)  -Wall -Wshadow -DGTEST_HAS_PTHREAD=1 -fexceptions -Wextra -o CMakeFiles/gtest_main.dir/src/gtest_main.cc.o -c /usr/src/gtest/src/gtest_main.cc

gtest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gtest_main.dir/src/gtest_main.cc.i"
	cd /home/futuhal57/ros/stacks/eagle_strike/build/gtest && /usr/bin/g++-4.7  $(CXX_DEFINES) $(CXX_FLAGS)  -Wall -Wshadow -DGTEST_HAS_PTHREAD=1 -fexceptions -Wextra -E /usr/src/gtest/src/gtest_main.cc > CMakeFiles/gtest_main.dir/src/gtest_main.cc.i

gtest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gtest_main.dir/src/gtest_main.cc.s"
	cd /home/futuhal57/ros/stacks/eagle_strike/build/gtest && /usr/bin/g++-4.7  $(CXX_DEFINES) $(CXX_FLAGS)  -Wall -Wshadow -DGTEST_HAS_PTHREAD=1 -fexceptions -Wextra -S /usr/src/gtest/src/gtest_main.cc -o CMakeFiles/gtest_main.dir/src/gtest_main.cc.s

gtest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o.requires:
.PHONY : gtest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o.requires

gtest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o.provides: gtest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o.requires
	$(MAKE) -f gtest/CMakeFiles/gtest_main.dir/build.make gtest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o.provides.build
.PHONY : gtest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o.provides

gtest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o.provides.build: gtest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o

# Object files for target gtest_main
gtest_main_OBJECTS = \
"CMakeFiles/gtest_main.dir/src/gtest_main.cc.o"

# External object files for target gtest_main
gtest_main_EXTERNAL_OBJECTS =

/home/futuhal57/ros/stacks/eagle_strike/lib/libgtest_main.so: gtest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o
/home/futuhal57/ros/stacks/eagle_strike/lib/libgtest_main.so: gtest/CMakeFiles/gtest_main.dir/build.make
/home/futuhal57/ros/stacks/eagle_strike/lib/libgtest_main.so: /home/futuhal57/ros/stacks/eagle_strike/lib/libgtest.so
/home/futuhal57/ros/stacks/eagle_strike/lib/libgtest_main.so: gtest/CMakeFiles/gtest_main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library /home/futuhal57/ros/stacks/eagle_strike/lib/libgtest_main.so"
	cd /home/futuhal57/ros/stacks/eagle_strike/build/gtest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gtest_main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
gtest/CMakeFiles/gtest_main.dir/build: /home/futuhal57/ros/stacks/eagle_strike/lib/libgtest_main.so
.PHONY : gtest/CMakeFiles/gtest_main.dir/build

gtest/CMakeFiles/gtest_main.dir/requires: gtest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o.requires
.PHONY : gtest/CMakeFiles/gtest_main.dir/requires

gtest/CMakeFiles/gtest_main.dir/clean:
	cd /home/futuhal57/ros/stacks/eagle_strike/build/gtest && $(CMAKE_COMMAND) -P CMakeFiles/gtest_main.dir/cmake_clean.cmake
.PHONY : gtest/CMakeFiles/gtest_main.dir/clean

gtest/CMakeFiles/gtest_main.dir/depend:
	cd /home/futuhal57/ros/stacks/eagle_strike/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/futuhal57/ros/stacks/eagle_strike /usr/src/gtest /home/futuhal57/ros/stacks/eagle_strike/build /home/futuhal57/ros/stacks/eagle_strike/build/gtest /home/futuhal57/ros/stacks/eagle_strike/build/gtest/CMakeFiles/gtest_main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : gtest/CMakeFiles/gtest_main.dir/depend

