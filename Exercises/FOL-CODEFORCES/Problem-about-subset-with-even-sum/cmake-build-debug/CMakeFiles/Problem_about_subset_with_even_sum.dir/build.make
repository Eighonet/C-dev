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
CMAKE_SOURCE_DIR = C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Problem-about-subset-with-even-sum

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Problem-about-subset-with-even-sum\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Problem_about_subset_with_even_sum.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Problem_about_subset_with_even_sum.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Problem_about_subset_with_even_sum.dir/flags.make

CMakeFiles/Problem_about_subset_with_even_sum.dir/main.cpp.obj: CMakeFiles/Problem_about_subset_with_even_sum.dir/flags.make
CMakeFiles/Problem_about_subset_with_even_sum.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Problem-about-subset-with-even-sum\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Problem_about_subset_with_even_sum.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Problem_about_subset_with_even_sum.dir\main.cpp.obj -c C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Problem-about-subset-with-even-sum\main.cpp

CMakeFiles/Problem_about_subset_with_even_sum.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Problem_about_subset_with_even_sum.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Problem-about-subset-with-even-sum\main.cpp > CMakeFiles\Problem_about_subset_with_even_sum.dir\main.cpp.i

CMakeFiles/Problem_about_subset_with_even_sum.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Problem_about_subset_with_even_sum.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Problem-about-subset-with-even-sum\main.cpp -o CMakeFiles\Problem_about_subset_with_even_sum.dir\main.cpp.s

# Object files for target Problem_about_subset_with_even_sum
Problem_about_subset_with_even_sum_OBJECTS = \
"CMakeFiles/Problem_about_subset_with_even_sum.dir/main.cpp.obj"

# External object files for target Problem_about_subset_with_even_sum
Problem_about_subset_with_even_sum_EXTERNAL_OBJECTS =

Problem_about_subset_with_even_sum.exe: CMakeFiles/Problem_about_subset_with_even_sum.dir/main.cpp.obj
Problem_about_subset_with_even_sum.exe: CMakeFiles/Problem_about_subset_with_even_sum.dir/build.make
Problem_about_subset_with_even_sum.exe: CMakeFiles/Problem_about_subset_with_even_sum.dir/linklibs.rsp
Problem_about_subset_with_even_sum.exe: CMakeFiles/Problem_about_subset_with_even_sum.dir/objects1.rsp
Problem_about_subset_with_even_sum.exe: CMakeFiles/Problem_about_subset_with_even_sum.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Problem-about-subset-with-even-sum\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Problem_about_subset_with_even_sum.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Problem_about_subset_with_even_sum.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Problem_about_subset_with_even_sum.dir/build: Problem_about_subset_with_even_sum.exe

.PHONY : CMakeFiles/Problem_about_subset_with_even_sum.dir/build

CMakeFiles/Problem_about_subset_with_even_sum.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Problem_about_subset_with_even_sum.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Problem_about_subset_with_even_sum.dir/clean

CMakeFiles/Problem_about_subset_with_even_sum.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Problem-about-subset-with-even-sum C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Problem-about-subset-with-even-sum C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Problem-about-subset-with-even-sum\cmake-build-debug C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Problem-about-subset-with-even-sum\cmake-build-debug C:\Users\eigho\GoogleDrive\SDA\C-dev\Exercises\Problem-about-subset-with-even-sum\cmake-build-debug\CMakeFiles\Problem_about_subset_with_even_sum.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Problem_about_subset_with_even_sum.dir/depend

