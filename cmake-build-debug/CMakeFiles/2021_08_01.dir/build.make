# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /usr/lib/clion-2019.3.6/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /usr/lib/clion-2019.3.6/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ubantu/c/2021-08-01

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubantu/c/2021-08-01/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/2021_08_01.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/2021_08_01.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/2021_08_01.dir/flags.make

CMakeFiles/2021_08_01.dir/main.c.o: CMakeFiles/2021_08_01.dir/flags.make
CMakeFiles/2021_08_01.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubantu/c/2021-08-01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/2021_08_01.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/2021_08_01.dir/main.c.o   -c /home/ubantu/c/2021-08-01/main.c

CMakeFiles/2021_08_01.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/2021_08_01.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubantu/c/2021-08-01/main.c > CMakeFiles/2021_08_01.dir/main.c.i

CMakeFiles/2021_08_01.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/2021_08_01.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubantu/c/2021-08-01/main.c -o CMakeFiles/2021_08_01.dir/main.c.s

# Object files for target 2021_08_01
2021_08_01_OBJECTS = \
"CMakeFiles/2021_08_01.dir/main.c.o"

# External object files for target 2021_08_01
2021_08_01_EXTERNAL_OBJECTS =

2021_08_01: CMakeFiles/2021_08_01.dir/main.c.o
2021_08_01: CMakeFiles/2021_08_01.dir/build.make
2021_08_01: CMakeFiles/2021_08_01.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ubantu/c/2021-08-01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 2021_08_01"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/2021_08_01.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/2021_08_01.dir/build: 2021_08_01

.PHONY : CMakeFiles/2021_08_01.dir/build

CMakeFiles/2021_08_01.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/2021_08_01.dir/cmake_clean.cmake
.PHONY : CMakeFiles/2021_08_01.dir/clean

CMakeFiles/2021_08_01.dir/depend:
	cd /home/ubantu/c/2021-08-01/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubantu/c/2021-08-01 /home/ubantu/c/2021-08-01 /home/ubantu/c/2021-08-01/cmake-build-debug /home/ubantu/c/2021-08-01/cmake-build-debug /home/ubantu/c/2021-08-01/cmake-build-debug/CMakeFiles/2021_08_01.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/2021_08_01.dir/depend

