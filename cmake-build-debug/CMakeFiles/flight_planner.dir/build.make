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


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/stimmins/Documents/GitHub/Flight-Planner

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/stimmins/Documents/GitHub/Flight-Planner/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/flight_planner.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/flight_planner.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/flight_planner.dir/flags.make

CMakeFiles/flight_planner.dir/main.cpp.o: CMakeFiles/flight_planner.dir/flags.make
CMakeFiles/flight_planner.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/stimmins/Documents/GitHub/Flight-Planner/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/flight_planner.dir/main.cpp.o"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/flight_planner.dir/main.cpp.o -c /Users/stimmins/Documents/GitHub/Flight-Planner/main.cpp

CMakeFiles/flight_planner.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/flight_planner.dir/main.cpp.i"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/stimmins/Documents/GitHub/Flight-Planner/main.cpp > CMakeFiles/flight_planner.dir/main.cpp.i

CMakeFiles/flight_planner.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/flight_planner.dir/main.cpp.s"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/stimmins/Documents/GitHub/Flight-Planner/main.cpp -o CMakeFiles/flight_planner.dir/main.cpp.s

CMakeFiles/flight_planner.dir/DSString.cpp.o: CMakeFiles/flight_planner.dir/flags.make
CMakeFiles/flight_planner.dir/DSString.cpp.o: ../DSString.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/stimmins/Documents/GitHub/Flight-Planner/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/flight_planner.dir/DSString.cpp.o"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/flight_planner.dir/DSString.cpp.o -c /Users/stimmins/Documents/GitHub/Flight-Planner/DSString.cpp

CMakeFiles/flight_planner.dir/DSString.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/flight_planner.dir/DSString.cpp.i"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/stimmins/Documents/GitHub/Flight-Planner/DSString.cpp > CMakeFiles/flight_planner.dir/DSString.cpp.i

CMakeFiles/flight_planner.dir/DSString.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/flight_planner.dir/DSString.cpp.s"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/stimmins/Documents/GitHub/Flight-Planner/DSString.cpp -o CMakeFiles/flight_planner.dir/DSString.cpp.s

CMakeFiles/flight_planner.dir/DSStackTests.cpp.o: CMakeFiles/flight_planner.dir/flags.make
CMakeFiles/flight_planner.dir/DSStackTests.cpp.o: ../DSStackTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/stimmins/Documents/GitHub/Flight-Planner/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/flight_planner.dir/DSStackTests.cpp.o"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/flight_planner.dir/DSStackTests.cpp.o -c /Users/stimmins/Documents/GitHub/Flight-Planner/DSStackTests.cpp

CMakeFiles/flight_planner.dir/DSStackTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/flight_planner.dir/DSStackTests.cpp.i"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/stimmins/Documents/GitHub/Flight-Planner/DSStackTests.cpp > CMakeFiles/flight_planner.dir/DSStackTests.cpp.i

CMakeFiles/flight_planner.dir/DSStackTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/flight_planner.dir/DSStackTests.cpp.s"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/stimmins/Documents/GitHub/Flight-Planner/DSStackTests.cpp -o CMakeFiles/flight_planner.dir/DSStackTests.cpp.s

CMakeFiles/flight_planner.dir/LinkedListTest.cpp.o: CMakeFiles/flight_planner.dir/flags.make
CMakeFiles/flight_planner.dir/LinkedListTest.cpp.o: ../LinkedListTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/stimmins/Documents/GitHub/Flight-Planner/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/flight_planner.dir/LinkedListTest.cpp.o"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/flight_planner.dir/LinkedListTest.cpp.o -c /Users/stimmins/Documents/GitHub/Flight-Planner/LinkedListTest.cpp

CMakeFiles/flight_planner.dir/LinkedListTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/flight_planner.dir/LinkedListTest.cpp.i"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/stimmins/Documents/GitHub/Flight-Planner/LinkedListTest.cpp > CMakeFiles/flight_planner.dir/LinkedListTest.cpp.i

CMakeFiles/flight_planner.dir/LinkedListTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/flight_planner.dir/LinkedListTest.cpp.s"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/stimmins/Documents/GitHub/Flight-Planner/LinkedListTest.cpp -o CMakeFiles/flight_planner.dir/LinkedListTest.cpp.s

CMakeFiles/flight_planner.dir/FlightAdjacencyList.cpp.o: CMakeFiles/flight_planner.dir/flags.make
CMakeFiles/flight_planner.dir/FlightAdjacencyList.cpp.o: ../FlightAdjacencyList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/stimmins/Documents/GitHub/Flight-Planner/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/flight_planner.dir/FlightAdjacencyList.cpp.o"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/flight_planner.dir/FlightAdjacencyList.cpp.o -c /Users/stimmins/Documents/GitHub/Flight-Planner/FlightAdjacencyList.cpp

CMakeFiles/flight_planner.dir/FlightAdjacencyList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/flight_planner.dir/FlightAdjacencyList.cpp.i"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/stimmins/Documents/GitHub/Flight-Planner/FlightAdjacencyList.cpp > CMakeFiles/flight_planner.dir/FlightAdjacencyList.cpp.i

CMakeFiles/flight_planner.dir/FlightAdjacencyList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/flight_planner.dir/FlightAdjacencyList.cpp.s"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/stimmins/Documents/GitHub/Flight-Planner/FlightAdjacencyList.cpp -o CMakeFiles/flight_planner.dir/FlightAdjacencyList.cpp.s

CMakeFiles/flight_planner.dir/AdjListTests.cpp.o: CMakeFiles/flight_planner.dir/flags.make
CMakeFiles/flight_planner.dir/AdjListTests.cpp.o: ../AdjListTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/stimmins/Documents/GitHub/Flight-Planner/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/flight_planner.dir/AdjListTests.cpp.o"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/flight_planner.dir/AdjListTests.cpp.o -c /Users/stimmins/Documents/GitHub/Flight-Planner/AdjListTests.cpp

CMakeFiles/flight_planner.dir/AdjListTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/flight_planner.dir/AdjListTests.cpp.i"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/stimmins/Documents/GitHub/Flight-Planner/AdjListTests.cpp > CMakeFiles/flight_planner.dir/AdjListTests.cpp.i

CMakeFiles/flight_planner.dir/AdjListTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/flight_planner.dir/AdjListTests.cpp.s"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/stimmins/Documents/GitHub/Flight-Planner/AdjListTests.cpp -o CMakeFiles/flight_planner.dir/AdjListTests.cpp.s

CMakeFiles/flight_planner.dir/FlightPlan.cpp.o: CMakeFiles/flight_planner.dir/flags.make
CMakeFiles/flight_planner.dir/FlightPlan.cpp.o: ../FlightPlan.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/stimmins/Documents/GitHub/Flight-Planner/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/flight_planner.dir/FlightPlan.cpp.o"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/flight_planner.dir/FlightPlan.cpp.o -c /Users/stimmins/Documents/GitHub/Flight-Planner/FlightPlan.cpp

CMakeFiles/flight_planner.dir/FlightPlan.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/flight_planner.dir/FlightPlan.cpp.i"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/stimmins/Documents/GitHub/Flight-Planner/FlightPlan.cpp > CMakeFiles/flight_planner.dir/FlightPlan.cpp.i

CMakeFiles/flight_planner.dir/FlightPlan.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/flight_planner.dir/FlightPlan.cpp.s"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/stimmins/Documents/GitHub/Flight-Planner/FlightPlan.cpp -o CMakeFiles/flight_planner.dir/FlightPlan.cpp.s

CMakeFiles/flight_planner.dir/Flight.cpp.o: CMakeFiles/flight_planner.dir/flags.make
CMakeFiles/flight_planner.dir/Flight.cpp.o: ../Flight.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/stimmins/Documents/GitHub/Flight-Planner/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/flight_planner.dir/Flight.cpp.o"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/flight_planner.dir/Flight.cpp.o -c /Users/stimmins/Documents/GitHub/Flight-Planner/Flight.cpp

CMakeFiles/flight_planner.dir/Flight.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/flight_planner.dir/Flight.cpp.i"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/stimmins/Documents/GitHub/Flight-Planner/Flight.cpp > CMakeFiles/flight_planner.dir/Flight.cpp.i

CMakeFiles/flight_planner.dir/Flight.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/flight_planner.dir/Flight.cpp.s"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/stimmins/Documents/GitHub/Flight-Planner/Flight.cpp -o CMakeFiles/flight_planner.dir/Flight.cpp.s

# Object files for target flight_planner
flight_planner_OBJECTS = \
"CMakeFiles/flight_planner.dir/main.cpp.o" \
"CMakeFiles/flight_planner.dir/DSString.cpp.o" \
"CMakeFiles/flight_planner.dir/DSStackTests.cpp.o" \
"CMakeFiles/flight_planner.dir/LinkedListTest.cpp.o" \
"CMakeFiles/flight_planner.dir/FlightAdjacencyList.cpp.o" \
"CMakeFiles/flight_planner.dir/AdjListTests.cpp.o" \
"CMakeFiles/flight_planner.dir/FlightPlan.cpp.o" \
"CMakeFiles/flight_planner.dir/Flight.cpp.o"

# External object files for target flight_planner
flight_planner_EXTERNAL_OBJECTS =

flight_planner: CMakeFiles/flight_planner.dir/main.cpp.o
flight_planner: CMakeFiles/flight_planner.dir/DSString.cpp.o
flight_planner: CMakeFiles/flight_planner.dir/DSStackTests.cpp.o
flight_planner: CMakeFiles/flight_planner.dir/LinkedListTest.cpp.o
flight_planner: CMakeFiles/flight_planner.dir/FlightAdjacencyList.cpp.o
flight_planner: CMakeFiles/flight_planner.dir/AdjListTests.cpp.o
flight_planner: CMakeFiles/flight_planner.dir/FlightPlan.cpp.o
flight_planner: CMakeFiles/flight_planner.dir/Flight.cpp.o
flight_planner: CMakeFiles/flight_planner.dir/build.make
flight_planner: CMakeFiles/flight_planner.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/stimmins/Documents/GitHub/Flight-Planner/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable flight_planner"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/flight_planner.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/flight_planner.dir/build: flight_planner

.PHONY : CMakeFiles/flight_planner.dir/build

CMakeFiles/flight_planner.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/flight_planner.dir/cmake_clean.cmake
.PHONY : CMakeFiles/flight_planner.dir/clean

CMakeFiles/flight_planner.dir/depend:
	cd /Users/stimmins/Documents/GitHub/Flight-Planner/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/stimmins/Documents/GitHub/Flight-Planner /Users/stimmins/Documents/GitHub/Flight-Planner /Users/stimmins/Documents/GitHub/Flight-Planner/cmake-build-debug /Users/stimmins/Documents/GitHub/Flight-Planner/cmake-build-debug /Users/stimmins/Documents/GitHub/Flight-Planner/cmake-build-debug/CMakeFiles/flight_planner.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/flight_planner.dir/depend

