# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Coursera\GCD

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Coursera\GCD\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/GCD.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/GCD.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GCD.dir/flags.make

CMakeFiles/GCD.dir/main.cpp.obj: CMakeFiles/GCD.dir/flags.make
CMakeFiles/GCD.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Coursera\GCD\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GCD.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\GCD.dir\main.cpp.obj -c C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Coursera\GCD\main.cpp

CMakeFiles/GCD.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GCD.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Coursera\GCD\main.cpp > CMakeFiles\GCD.dir\main.cpp.i

CMakeFiles/GCD.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GCD.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Coursera\GCD\main.cpp -o CMakeFiles\GCD.dir\main.cpp.s

# Object files for target GCD
GCD_OBJECTS = \
"CMakeFiles/GCD.dir/main.cpp.obj"

# External object files for target GCD
GCD_EXTERNAL_OBJECTS =

GCD.exe: CMakeFiles/GCD.dir/main.cpp.obj
GCD.exe: CMakeFiles/GCD.dir/build.make
GCD.exe: CMakeFiles/GCD.dir/linklibs.rsp
GCD.exe: CMakeFiles/GCD.dir/objects1.rsp
GCD.exe: CMakeFiles/GCD.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Coursera\GCD\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable GCD.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\GCD.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GCD.dir/build: GCD.exe

.PHONY : CMakeFiles/GCD.dir/build

CMakeFiles/GCD.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\GCD.dir\cmake_clean.cmake
.PHONY : CMakeFiles/GCD.dir/clean

CMakeFiles/GCD.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Coursera\GCD C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Coursera\GCD C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Coursera\GCD\cmake-build-debug C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Coursera\GCD\cmake-build-debug C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Coursera\GCD\cmake-build-debug\CMakeFiles\GCD.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GCD.dir/depend

