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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.5\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.5\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\GoogleDrive\SDA\C-dev\Exercises\K-beatiful-string

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\GoogleDrive\SDA\C-dev\Exercises\K-beatiful-string\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/K_beatiful_string.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/K_beatiful_string.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/K_beatiful_string.dir/flags.make

CMakeFiles/K_beatiful_string.dir/main.cpp.obj: CMakeFiles/K_beatiful_string.dir/flags.make
CMakeFiles/K_beatiful_string.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\GoogleDrive\SDA\C-dev\Exercises\K-beatiful-string\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/K_beatiful_string.dir/main.cpp.obj"
	D:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\K_beatiful_string.dir\main.cpp.obj -c E:\GoogleDrive\SDA\C-dev\Exercises\K-beatiful-string\main.cpp

CMakeFiles/K_beatiful_string.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/K_beatiful_string.dir/main.cpp.i"
	D:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\GoogleDrive\SDA\C-dev\Exercises\K-beatiful-string\main.cpp > CMakeFiles\K_beatiful_string.dir\main.cpp.i

CMakeFiles/K_beatiful_string.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/K_beatiful_string.dir/main.cpp.s"
	D:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\GoogleDrive\SDA\C-dev\Exercises\K-beatiful-string\main.cpp -o CMakeFiles\K_beatiful_string.dir\main.cpp.s

# Object files for target K_beatiful_string
K_beatiful_string_OBJECTS = \
"CMakeFiles/K_beatiful_string.dir/main.cpp.obj"

# External object files for target K_beatiful_string
K_beatiful_string_EXTERNAL_OBJECTS =

K_beatiful_string.exe: CMakeFiles/K_beatiful_string.dir/main.cpp.obj
K_beatiful_string.exe: CMakeFiles/K_beatiful_string.dir/build.make
K_beatiful_string.exe: CMakeFiles/K_beatiful_string.dir/linklibs.rsp
K_beatiful_string.exe: CMakeFiles/K_beatiful_string.dir/objects1.rsp
K_beatiful_string.exe: CMakeFiles/K_beatiful_string.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\GoogleDrive\SDA\C-dev\Exercises\K-beatiful-string\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable K_beatiful_string.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\K_beatiful_string.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/K_beatiful_string.dir/build: K_beatiful_string.exe

.PHONY : CMakeFiles/K_beatiful_string.dir/build

CMakeFiles/K_beatiful_string.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\K_beatiful_string.dir\cmake_clean.cmake
.PHONY : CMakeFiles/K_beatiful_string.dir/clean

CMakeFiles/K_beatiful_string.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\GoogleDrive\SDA\C-dev\Exercises\K-beatiful-string E:\GoogleDrive\SDA\C-dev\Exercises\K-beatiful-string E:\GoogleDrive\SDA\C-dev\Exercises\K-beatiful-string\cmake-build-debug E:\GoogleDrive\SDA\C-dev\Exercises\K-beatiful-string\cmake-build-debug E:\GoogleDrive\SDA\C-dev\Exercises\K-beatiful-string\cmake-build-debug\CMakeFiles\K_beatiful_string.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/K_beatiful_string.dir/depend

