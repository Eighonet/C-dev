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
CMAKE_SOURCE_DIR = "C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Motarak's-birthday"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Motarak's-birthday\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Motarak_s_birthday.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Motarak_s_birthday.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Motarak_s_birthday.dir/flags.make

CMakeFiles/Motarak_s_birthday.dir/main.cpp.obj: CMakeFiles/Motarak_s_birthday.dir/flags.make
CMakeFiles/Motarak_s_birthday.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Motarak's-birthday\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Motarak_s_birthday.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Motarak_s_birthday.dir\main.cpp.obj -c "C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Motarak's-birthday\main.cpp"

CMakeFiles/Motarak_s_birthday.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Motarak_s_birthday.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Motarak's-birthday\main.cpp" > CMakeFiles\Motarak_s_birthday.dir\main.cpp.i

CMakeFiles/Motarak_s_birthday.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Motarak_s_birthday.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Motarak's-birthday\main.cpp" -o CMakeFiles\Motarak_s_birthday.dir\main.cpp.s

# Object files for target Motarak_s_birthday
Motarak_s_birthday_OBJECTS = \
"CMakeFiles/Motarak_s_birthday.dir/main.cpp.obj"

# External object files for target Motarak_s_birthday
Motarak_s_birthday_EXTERNAL_OBJECTS =

Motarak_s_birthday.exe: CMakeFiles/Motarak_s_birthday.dir/main.cpp.obj
Motarak_s_birthday.exe: CMakeFiles/Motarak_s_birthday.dir/build.make
Motarak_s_birthday.exe: CMakeFiles/Motarak_s_birthday.dir/linklibs.rsp
Motarak_s_birthday.exe: CMakeFiles/Motarak_s_birthday.dir/objects1.rsp
Motarak_s_birthday.exe: CMakeFiles/Motarak_s_birthday.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Motarak's-birthday\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Motarak_s_birthday.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Motarak_s_birthday.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Motarak_s_birthday.dir/build: Motarak_s_birthday.exe

.PHONY : CMakeFiles/Motarak_s_birthday.dir/build

CMakeFiles/Motarak_s_birthday.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Motarak_s_birthday.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Motarak_s_birthday.dir/clean

CMakeFiles/Motarak_s_birthday.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Motarak's-birthday" "C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Motarak's-birthday" "C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Motarak's-birthday\cmake-build-debug" "C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Motarak's-birthday\cmake-build-debug" "C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Motarak's-birthday\cmake-build-debug\CMakeFiles\Motarak_s_birthday.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Motarak_s_birthday.dir/depend
