# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\breeze\CC++\CLion\CppClass

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\breeze\CC++\CLion\CppClass\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CppClass.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/CppClass.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CppClass.dir/flags.make

CMakeFiles/CppClass.dir/main.cpp.obj: CMakeFiles/CppClass.dir/flags.make
CMakeFiles/CppClass.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\breeze\CC++\CLion\CppClass\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CppClass.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CppClass.dir\main.cpp.obj -c D:\breeze\CC++\CLion\CppClass\main.cpp

CMakeFiles/CppClass.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CppClass.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\breeze\CC++\CLion\CppClass\main.cpp > CMakeFiles\CppClass.dir\main.cpp.i

CMakeFiles/CppClass.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CppClass.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\breeze\CC++\CLion\CppClass\main.cpp -o CMakeFiles\CppClass.dir\main.cpp.s

CMakeFiles/CppClass.dir/GraphAll/Graph.cpp.obj: CMakeFiles/CppClass.dir/flags.make
CMakeFiles/CppClass.dir/GraphAll/Graph.cpp.obj: ../GraphAll/Graph.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\breeze\CC++\CLion\CppClass\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/CppClass.dir/GraphAll/Graph.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CppClass.dir\GraphAll\Graph.cpp.obj -c D:\breeze\CC++\CLion\CppClass\GraphAll\Graph.cpp

CMakeFiles/CppClass.dir/GraphAll/Graph.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CppClass.dir/GraphAll/Graph.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\breeze\CC++\CLion\CppClass\GraphAll\Graph.cpp > CMakeFiles\CppClass.dir\GraphAll\Graph.cpp.i

CMakeFiles/CppClass.dir/GraphAll/Graph.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CppClass.dir/GraphAll/Graph.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\breeze\CC++\CLion\CppClass\GraphAll\Graph.cpp -o CMakeFiles\CppClass.dir\GraphAll\Graph.cpp.s

CMakeFiles/CppClass.dir/MatrixALL/matrix.cpp.obj: CMakeFiles/CppClass.dir/flags.make
CMakeFiles/CppClass.dir/MatrixALL/matrix.cpp.obj: ../MatrixALL/matrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\breeze\CC++\CLion\CppClass\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/CppClass.dir/MatrixALL/matrix.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CppClass.dir\MatrixALL\matrix.cpp.obj -c D:\breeze\CC++\CLion\CppClass\MatrixALL\matrix.cpp

CMakeFiles/CppClass.dir/MatrixALL/matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CppClass.dir/MatrixALL/matrix.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\breeze\CC++\CLion\CppClass\MatrixALL\matrix.cpp > CMakeFiles\CppClass.dir\MatrixALL\matrix.cpp.i

CMakeFiles/CppClass.dir/MatrixALL/matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CppClass.dir/MatrixALL/matrix.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\breeze\CC++\CLion\CppClass\MatrixALL\matrix.cpp -o CMakeFiles\CppClass.dir\MatrixALL\matrix.cpp.s

CMakeFiles/CppClass.dir/TreeAll/Tree.cpp.obj: CMakeFiles/CppClass.dir/flags.make
CMakeFiles/CppClass.dir/TreeAll/Tree.cpp.obj: ../TreeAll/Tree.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\breeze\CC++\CLion\CppClass\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/CppClass.dir/TreeAll/Tree.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CppClass.dir\TreeAll\Tree.cpp.obj -c D:\breeze\CC++\CLion\CppClass\TreeAll\Tree.cpp

CMakeFiles/CppClass.dir/TreeAll/Tree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CppClass.dir/TreeAll/Tree.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\breeze\CC++\CLion\CppClass\TreeAll\Tree.cpp > CMakeFiles\CppClass.dir\TreeAll\Tree.cpp.i

CMakeFiles/CppClass.dir/TreeAll/Tree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CppClass.dir/TreeAll/Tree.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\breeze\CC++\CLion\CppClass\TreeAll\Tree.cpp -o CMakeFiles\CppClass.dir\TreeAll\Tree.cpp.s

CMakeFiles/CppClass.dir/TreeAll/Huffman.cpp.obj: CMakeFiles/CppClass.dir/flags.make
CMakeFiles/CppClass.dir/TreeAll/Huffman.cpp.obj: ../TreeAll/Huffman.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\breeze\CC++\CLion\CppClass\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/CppClass.dir/TreeAll/Huffman.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CppClass.dir\TreeAll\Huffman.cpp.obj -c D:\breeze\CC++\CLion\CppClass\TreeAll\Huffman.cpp

CMakeFiles/CppClass.dir/TreeAll/Huffman.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CppClass.dir/TreeAll/Huffman.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\breeze\CC++\CLion\CppClass\TreeAll\Huffman.cpp > CMakeFiles\CppClass.dir\TreeAll\Huffman.cpp.i

CMakeFiles/CppClass.dir/TreeAll/Huffman.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CppClass.dir/TreeAll/Huffman.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\breeze\CC++\CLion\CppClass\TreeAll\Huffman.cpp -o CMakeFiles\CppClass.dir\TreeAll\Huffman.cpp.s

CMakeFiles/CppClass.dir/TreeAll/RealTree.cpp.obj: CMakeFiles/CppClass.dir/flags.make
CMakeFiles/CppClass.dir/TreeAll/RealTree.cpp.obj: ../TreeAll/RealTree.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\breeze\CC++\CLion\CppClass\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/CppClass.dir/TreeAll/RealTree.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CppClass.dir\TreeAll\RealTree.cpp.obj -c D:\breeze\CC++\CLion\CppClass\TreeAll\RealTree.cpp

CMakeFiles/CppClass.dir/TreeAll/RealTree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CppClass.dir/TreeAll/RealTree.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\breeze\CC++\CLion\CppClass\TreeAll\RealTree.cpp > CMakeFiles\CppClass.dir\TreeAll\RealTree.cpp.i

CMakeFiles/CppClass.dir/TreeAll/RealTree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CppClass.dir/TreeAll/RealTree.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\breeze\CC++\CLion\CppClass\TreeAll\RealTree.cpp -o CMakeFiles\CppClass.dir\TreeAll\RealTree.cpp.s

# Object files for target CppClass
CppClass_OBJECTS = \
"CMakeFiles/CppClass.dir/main.cpp.obj" \
"CMakeFiles/CppClass.dir/GraphAll/Graph.cpp.obj" \
"CMakeFiles/CppClass.dir/MatrixALL/matrix.cpp.obj" \
"CMakeFiles/CppClass.dir/TreeAll/Tree.cpp.obj" \
"CMakeFiles/CppClass.dir/TreeAll/Huffman.cpp.obj" \
"CMakeFiles/CppClass.dir/TreeAll/RealTree.cpp.obj"

# External object files for target CppClass
CppClass_EXTERNAL_OBJECTS =

CppClass.exe: CMakeFiles/CppClass.dir/main.cpp.obj
CppClass.exe: CMakeFiles/CppClass.dir/GraphAll/Graph.cpp.obj
CppClass.exe: CMakeFiles/CppClass.dir/MatrixALL/matrix.cpp.obj
CppClass.exe: CMakeFiles/CppClass.dir/TreeAll/Tree.cpp.obj
CppClass.exe: CMakeFiles/CppClass.dir/TreeAll/Huffman.cpp.obj
CppClass.exe: CMakeFiles/CppClass.dir/TreeAll/RealTree.cpp.obj
CppClass.exe: CMakeFiles/CppClass.dir/build.make
CppClass.exe: CMakeFiles/CppClass.dir/linklibs.rsp
CppClass.exe: CMakeFiles/CppClass.dir/objects1.rsp
CppClass.exe: CMakeFiles/CppClass.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\breeze\CC++\CLion\CppClass\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable CppClass.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CppClass.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CppClass.dir/build: CppClass.exe
.PHONY : CMakeFiles/CppClass.dir/build

CMakeFiles/CppClass.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CppClass.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CppClass.dir/clean

CMakeFiles/CppClass.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\breeze\CC++\CLion\CppClass D:\breeze\CC++\CLion\CppClass D:\breeze\CC++\CLion\CppClass\cmake-build-debug D:\breeze\CC++\CLion\CppClass\cmake-build-debug D:\breeze\CC++\CLion\CppClass\cmake-build-debug\CMakeFiles\CppClass.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CppClass.dir/depend

