# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/martin/Msc Human Computer Interaction/022 Bsc Programmiersprachen/Übung2020/programmiersprachen-aufgabe-1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/martin/Msc Human Computer Interaction/022 Bsc Programmiersprachen/Übung2020/programmiersprachen-aufgabe-1/build"

# Include any dependencies generated for this target.
include source/CMakeFiles/main.dir/depend.make

# Include the progress variables for this target.
include source/CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include source/CMakeFiles/main.dir/flags.make

source/CMakeFiles/main.dir/main.cpp.o: source/CMakeFiles/main.dir/flags.make
source/CMakeFiles/main.dir/main.cpp.o: ../source/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/martin/Msc Human Computer Interaction/022 Bsc Programmiersprachen/Übung2020/programmiersprachen-aufgabe-1/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object source/CMakeFiles/main.dir/main.cpp.o"
	cd "/home/martin/Msc Human Computer Interaction/022 Bsc Programmiersprachen/Übung2020/programmiersprachen-aufgabe-1/build/source" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/main.cpp.o -c "/home/martin/Msc Human Computer Interaction/022 Bsc Programmiersprachen/Übung2020/programmiersprachen-aufgabe-1/source/main.cpp"

source/CMakeFiles/main.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/main.cpp.i"
	cd "/home/martin/Msc Human Computer Interaction/022 Bsc Programmiersprachen/Übung2020/programmiersprachen-aufgabe-1/build/source" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/martin/Msc Human Computer Interaction/022 Bsc Programmiersprachen/Übung2020/programmiersprachen-aufgabe-1/source/main.cpp" > CMakeFiles/main.dir/main.cpp.i

source/CMakeFiles/main.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/main.cpp.s"
	cd "/home/martin/Msc Human Computer Interaction/022 Bsc Programmiersprachen/Übung2020/programmiersprachen-aufgabe-1/build/source" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/martin/Msc Human Computer Interaction/022 Bsc Programmiersprachen/Übung2020/programmiersprachen-aufgabe-1/source/main.cpp" -o CMakeFiles/main.dir/main.cpp.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/main.cpp.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

source/main: source/CMakeFiles/main.dir/main.cpp.o
source/main: source/CMakeFiles/main.dir/build.make
source/main: source/CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/martin/Msc Human Computer Interaction/022 Bsc Programmiersprachen/Übung2020/programmiersprachen-aufgabe-1/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable main"
	cd "/home/martin/Msc Human Computer Interaction/022 Bsc Programmiersprachen/Übung2020/programmiersprachen-aufgabe-1/build/source" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
source/CMakeFiles/main.dir/build: source/main

.PHONY : source/CMakeFiles/main.dir/build

source/CMakeFiles/main.dir/clean:
	cd "/home/martin/Msc Human Computer Interaction/022 Bsc Programmiersprachen/Übung2020/programmiersprachen-aufgabe-1/build/source" && $(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : source/CMakeFiles/main.dir/clean

source/CMakeFiles/main.dir/depend:
	cd "/home/martin/Msc Human Computer Interaction/022 Bsc Programmiersprachen/Übung2020/programmiersprachen-aufgabe-1/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/martin/Msc Human Computer Interaction/022 Bsc Programmiersprachen/Übung2020/programmiersprachen-aufgabe-1" "/home/martin/Msc Human Computer Interaction/022 Bsc Programmiersprachen/Übung2020/programmiersprachen-aufgabe-1/source" "/home/martin/Msc Human Computer Interaction/022 Bsc Programmiersprachen/Übung2020/programmiersprachen-aufgabe-1/build" "/home/martin/Msc Human Computer Interaction/022 Bsc Programmiersprachen/Übung2020/programmiersprachen-aufgabe-1/build/source" "/home/martin/Msc Human Computer Interaction/022 Bsc Programmiersprachen/Übung2020/programmiersprachen-aufgabe-1/build/source/CMakeFiles/main.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : source/CMakeFiles/main.dir/depend

