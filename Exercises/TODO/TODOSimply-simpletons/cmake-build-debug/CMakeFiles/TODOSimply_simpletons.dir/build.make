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
CMAKE_SOURCE_DIR = C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\TODOSimply-simpletons

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\TODOSimply-simpletons\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TODOSimply_simpletons.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TODOSimply_simpletons.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TODOSimply_simpletons.dir/flags.make

CMakeFiles/TODOSimply_simpletons.dir/main.cpp.obj: CMakeFiles/TODOSimply_simpletons.dir/flags.make
CMakeFiles/TODOSimply_simpletons.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\TODOSimply-simpletons\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TODOSimply_simpletons.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\TODOSimply_simpletons.dir\main.cpp.obj -c C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\TODOSimply-simpletons\main.cpp

CMakeFiles/TODOSimply_simpletons.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TODOSimply_simpletons.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\TODOSimply-simpletons\main.cpp > CMakeFiles\TODOSimply_simpletons.dir\main.cpp.i

CMakeFiles/TODOSimply_simpletons.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TODOSimply_simpletons.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\TODOSimply-simpletons\main.cpp -o CMakeFiles\TODOSimply_simpletons.dir\main.cpp.s

# Object files for target TODOSimply_simpletons
TODOSimply_simpletons_OBJECTS = \
"CMakeFiles/TODOSimply_simpletons.dir/main.cpp.obj"

# External object files for target TODOSimply_simpletons
TODOSimply_simpletons_EXTERNAL_OBJECTS =

TODOSimply_simpletons.exe: CMakeFiles/TODOSimply_simpletons.dir/main.cpp.obj
TODOSimply_simpletons.exe: CMakeFiles/TODOSimply_simpletons.dir/build.make
TODOSimply_simpletons.exe: CMakeFiles/TODOSimply_simpletons.dir/linklibs.rsp
TODOSimply_simpletons.exe: CMakeFiles/TODOSimply_simpletons.dir/objects1.rsp
TODOSimply_simpletons.exe: CMakeFiles/TODOSimply_simpletons.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\TODOSimply-simpletons\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TODOSimply_simpletons.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\TODOSimply_simpletons.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TODOSimply_simpletons.dir/build: TODOSimply_simpletons.exe

.PHONY : CMakeFiles/TODOSimply_simpletons.dir/build

CMakeFiles/TODOSimply_simpletons.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\TODOSimply_simpletons.dir\cmake_clean.cmake
.PHONY : CMakeFiles/TODOSimply_simpletons.dir/clean

CMakeFiles/TODOSimply_simpletons.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\TODOSimply-simpletons C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\TODOSimply-simpletons C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\TODOSimply-simpletons\cmake-build-debug C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\TODOSimply-simpletons\cmake-build-debug C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\TODOSimply-simpletons\cmake-build-debug\CMakeFiles\TODOSimply_simpletons.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TODOSimply_simpletons.dir/depend

