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
CMAKE_SOURCE_DIR = C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Do-combo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Do-combo\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Do_combo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Do_combo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Do_combo.dir/flags.make

CMakeFiles/Do_combo.dir/main.cpp.obj: CMakeFiles/Do_combo.dir/flags.make
CMakeFiles/Do_combo.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Do-combo\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Do_combo.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Do_combo.dir\main.cpp.obj -c C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Do-combo\main.cpp

CMakeFiles/Do_combo.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Do_combo.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Do-combo\main.cpp > CMakeFiles\Do_combo.dir\main.cpp.i

CMakeFiles/Do_combo.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Do_combo.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Do-combo\main.cpp -o CMakeFiles\Do_combo.dir\main.cpp.s

# Object files for target Do_combo
Do_combo_OBJECTS = \
"CMakeFiles/Do_combo.dir/main.cpp.obj"

# External object files for target Do_combo
Do_combo_EXTERNAL_OBJECTS =

Do_combo.exe: CMakeFiles/Do_combo.dir/main.cpp.obj
Do_combo.exe: CMakeFiles/Do_combo.dir/build.make
Do_combo.exe: CMakeFiles/Do_combo.dir/linklibs.rsp
Do_combo.exe: CMakeFiles/Do_combo.dir/objects1.rsp
Do_combo.exe: CMakeFiles/Do_combo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Do-combo\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Do_combo.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Do_combo.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Do_combo.dir/build: Do_combo.exe

.PHONY : CMakeFiles/Do_combo.dir/build

CMakeFiles/Do_combo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Do_combo.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Do_combo.dir/clean

CMakeFiles/Do_combo.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Do-combo C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Do-combo C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Do-combo\cmake-build-debug C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Do-combo\cmake-build-debug C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Do-combo\cmake-build-debug\CMakeFiles\Do_combo.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Do_combo.dir/depend

