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
CMAKE_SOURCE_DIR = C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Distribution-of-scores

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Distribution-of-scores\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Distribution_of_scores.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Distribution_of_scores.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Distribution_of_scores.dir/flags.make

CMakeFiles/Distribution_of_scores.dir/main.cpp.obj: CMakeFiles/Distribution_of_scores.dir/flags.make
CMakeFiles/Distribution_of_scores.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Distribution-of-scores\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Distribution_of_scores.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Distribution_of_scores.dir\main.cpp.obj -c C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Distribution-of-scores\main.cpp

CMakeFiles/Distribution_of_scores.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Distribution_of_scores.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Distribution-of-scores\main.cpp > CMakeFiles\Distribution_of_scores.dir\main.cpp.i

CMakeFiles/Distribution_of_scores.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Distribution_of_scores.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Distribution-of-scores\main.cpp -o CMakeFiles\Distribution_of_scores.dir\main.cpp.s

# Object files for target Distribution_of_scores
Distribution_of_scores_OBJECTS = \
"CMakeFiles/Distribution_of_scores.dir/main.cpp.obj"

# External object files for target Distribution_of_scores
Distribution_of_scores_EXTERNAL_OBJECTS =

Distribution_of_scores.exe: CMakeFiles/Distribution_of_scores.dir/main.cpp.obj
Distribution_of_scores.exe: CMakeFiles/Distribution_of_scores.dir/build.make
Distribution_of_scores.exe: CMakeFiles/Distribution_of_scores.dir/linklibs.rsp
Distribution_of_scores.exe: CMakeFiles/Distribution_of_scores.dir/objects1.rsp
Distribution_of_scores.exe: CMakeFiles/Distribution_of_scores.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Distribution-of-scores\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Distribution_of_scores.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Distribution_of_scores.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Distribution_of_scores.dir/build: Distribution_of_scores.exe

.PHONY : CMakeFiles/Distribution_of_scores.dir/build

CMakeFiles/Distribution_of_scores.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Distribution_of_scores.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Distribution_of_scores.dir/clean

CMakeFiles/Distribution_of_scores.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Distribution-of-scores C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Distribution-of-scores C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Distribution-of-scores\cmake-build-debug C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Distribution-of-scores\cmake-build-debug C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Distribution-of-scores\cmake-build-debug\CMakeFiles\Distribution_of_scores.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Distribution_of_scores.dir/depend

