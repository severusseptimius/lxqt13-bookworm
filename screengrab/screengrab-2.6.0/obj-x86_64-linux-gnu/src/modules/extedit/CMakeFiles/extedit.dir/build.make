# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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

# Produce verbose output by default.
VERBOSE = 1

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
CMAKE_SOURCE_DIR = /home/debian/Lxqt1.3/screengrab/screengrab-2.6.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu

# Include any dependencies generated for this target.
include src/modules/extedit/CMakeFiles/extedit.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/modules/extedit/CMakeFiles/extedit.dir/compiler_depend.make

# Include the progress variables for this target.
include src/modules/extedit/CMakeFiles/extedit.dir/progress.make

# Include the compile flags for this target's objects.
include src/modules/extedit/CMakeFiles/extedit.dir/flags.make

src/modules/extedit/CMakeFiles/extedit.dir/extedit_autogen/mocs_compilation.cpp.o: src/modules/extedit/CMakeFiles/extedit.dir/flags.make
src/modules/extedit/CMakeFiles/extedit.dir/extedit_autogen/mocs_compilation.cpp.o: src/modules/extedit/extedit_autogen/mocs_compilation.cpp
src/modules/extedit/CMakeFiles/extedit.dir/extedit_autogen/mocs_compilation.cpp.o: src/modules/extedit/CMakeFiles/extedit.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/modules/extedit/CMakeFiles/extedit.dir/extedit_autogen/mocs_compilation.cpp.o"
	cd /home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/src/modules/extedit && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/modules/extedit/CMakeFiles/extedit.dir/extedit_autogen/mocs_compilation.cpp.o -MF CMakeFiles/extedit.dir/extedit_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/extedit.dir/extedit_autogen/mocs_compilation.cpp.o -c /home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/src/modules/extedit/extedit_autogen/mocs_compilation.cpp

src/modules/extedit/CMakeFiles/extedit.dir/extedit_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/extedit.dir/extedit_autogen/mocs_compilation.cpp.i"
	cd /home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/src/modules/extedit && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/src/modules/extedit/extedit_autogen/mocs_compilation.cpp > CMakeFiles/extedit.dir/extedit_autogen/mocs_compilation.cpp.i

src/modules/extedit/CMakeFiles/extedit.dir/extedit_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/extedit.dir/extedit_autogen/mocs_compilation.cpp.s"
	cd /home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/src/modules/extedit && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/src/modules/extedit/extedit_autogen/mocs_compilation.cpp -o CMakeFiles/extedit.dir/extedit_autogen/mocs_compilation.cpp.s

src/modules/extedit/CMakeFiles/extedit.dir/moduleextedit.cpp.o: src/modules/extedit/CMakeFiles/extedit.dir/flags.make
src/modules/extedit/CMakeFiles/extedit.dir/moduleextedit.cpp.o: /home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/src/modules/extedit/moduleextedit.cpp
src/modules/extedit/CMakeFiles/extedit.dir/moduleextedit.cpp.o: src/modules/extedit/CMakeFiles/extedit.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/modules/extedit/CMakeFiles/extedit.dir/moduleextedit.cpp.o"
	cd /home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/src/modules/extedit && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/modules/extedit/CMakeFiles/extedit.dir/moduleextedit.cpp.o -MF CMakeFiles/extedit.dir/moduleextedit.cpp.o.d -o CMakeFiles/extedit.dir/moduleextedit.cpp.o -c /home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/src/modules/extedit/moduleextedit.cpp

src/modules/extedit/CMakeFiles/extedit.dir/moduleextedit.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/extedit.dir/moduleextedit.cpp.i"
	cd /home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/src/modules/extedit && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/src/modules/extedit/moduleextedit.cpp > CMakeFiles/extedit.dir/moduleextedit.cpp.i

src/modules/extedit/CMakeFiles/extedit.dir/moduleextedit.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/extedit.dir/moduleextedit.cpp.s"
	cd /home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/src/modules/extedit && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/src/modules/extedit/moduleextedit.cpp -o CMakeFiles/extedit.dir/moduleextedit.cpp.s

src/modules/extedit/CMakeFiles/extedit.dir/extedit.cpp.o: src/modules/extedit/CMakeFiles/extedit.dir/flags.make
src/modules/extedit/CMakeFiles/extedit.dir/extedit.cpp.o: /home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/src/modules/extedit/extedit.cpp
src/modules/extedit/CMakeFiles/extedit.dir/extedit.cpp.o: src/modules/extedit/CMakeFiles/extedit.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/modules/extedit/CMakeFiles/extedit.dir/extedit.cpp.o"
	cd /home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/src/modules/extedit && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/modules/extedit/CMakeFiles/extedit.dir/extedit.cpp.o -MF CMakeFiles/extedit.dir/extedit.cpp.o.d -o CMakeFiles/extedit.dir/extedit.cpp.o -c /home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/src/modules/extedit/extedit.cpp

src/modules/extedit/CMakeFiles/extedit.dir/extedit.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/extedit.dir/extedit.cpp.i"
	cd /home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/src/modules/extedit && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/src/modules/extedit/extedit.cpp > CMakeFiles/extedit.dir/extedit.cpp.i

src/modules/extedit/CMakeFiles/extedit.dir/extedit.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/extedit.dir/extedit.cpp.s"
	cd /home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/src/modules/extedit && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/src/modules/extedit/extedit.cpp -o CMakeFiles/extedit.dir/extedit.cpp.s

src/modules/extedit/CMakeFiles/extedit.dir/Qt5TranslationLoader.cpp.o: src/modules/extedit/CMakeFiles/extedit.dir/flags.make
src/modules/extedit/CMakeFiles/extedit.dir/Qt5TranslationLoader.cpp.o: src/modules/extedit/Qt5TranslationLoader.cpp
src/modules/extedit/CMakeFiles/extedit.dir/Qt5TranslationLoader.cpp.o: src/modules/extedit/CMakeFiles/extedit.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/modules/extedit/CMakeFiles/extedit.dir/Qt5TranslationLoader.cpp.o"
	cd /home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/src/modules/extedit && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/modules/extedit/CMakeFiles/extedit.dir/Qt5TranslationLoader.cpp.o -MF CMakeFiles/extedit.dir/Qt5TranslationLoader.cpp.o.d -o CMakeFiles/extedit.dir/Qt5TranslationLoader.cpp.o -c /home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/src/modules/extedit/Qt5TranslationLoader.cpp

src/modules/extedit/CMakeFiles/extedit.dir/Qt5TranslationLoader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/extedit.dir/Qt5TranslationLoader.cpp.i"
	cd /home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/src/modules/extedit && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/src/modules/extedit/Qt5TranslationLoader.cpp > CMakeFiles/extedit.dir/Qt5TranslationLoader.cpp.i

src/modules/extedit/CMakeFiles/extedit.dir/Qt5TranslationLoader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/extedit.dir/Qt5TranslationLoader.cpp.s"
	cd /home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/src/modules/extedit && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/src/modules/extedit/Qt5TranslationLoader.cpp -o CMakeFiles/extedit.dir/Qt5TranslationLoader.cpp.s

# Object files for target extedit
extedit_OBJECTS = \
"CMakeFiles/extedit.dir/extedit_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/extedit.dir/moduleextedit.cpp.o" \
"CMakeFiles/extedit.dir/extedit.cpp.o" \
"CMakeFiles/extedit.dir/Qt5TranslationLoader.cpp.o"

# External object files for target extedit
extedit_EXTERNAL_OBJECTS =

src/modules/extedit/libextedit.a: src/modules/extedit/CMakeFiles/extedit.dir/extedit_autogen/mocs_compilation.cpp.o
src/modules/extedit/libextedit.a: src/modules/extedit/CMakeFiles/extedit.dir/moduleextedit.cpp.o
src/modules/extedit/libextedit.a: src/modules/extedit/CMakeFiles/extedit.dir/extedit.cpp.o
src/modules/extedit/libextedit.a: src/modules/extedit/CMakeFiles/extedit.dir/Qt5TranslationLoader.cpp.o
src/modules/extedit/libextedit.a: src/modules/extedit/CMakeFiles/extedit.dir/build.make
src/modules/extedit/libextedit.a: src/modules/extedit/CMakeFiles/extedit.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library libextedit.a"
	cd /home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/src/modules/extedit && $(CMAKE_COMMAND) -P CMakeFiles/extedit.dir/cmake_clean_target.cmake
	cd /home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/src/modules/extedit && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/extedit.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/modules/extedit/CMakeFiles/extedit.dir/build: src/modules/extedit/libextedit.a
.PHONY : src/modules/extedit/CMakeFiles/extedit.dir/build

src/modules/extedit/CMakeFiles/extedit.dir/clean:
	cd /home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/src/modules/extedit && $(CMAKE_COMMAND) -P CMakeFiles/extedit.dir/cmake_clean.cmake
.PHONY : src/modules/extedit/CMakeFiles/extedit.dir/clean

src/modules/extedit/CMakeFiles/extedit.dir/depend:
	cd /home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/debian/Lxqt1.3/screengrab/screengrab-2.6.0 /home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/src/modules/extedit /home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu /home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/src/modules/extedit /home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/src/modules/extedit/CMakeFiles/extedit.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/modules/extedit/CMakeFiles/extedit.dir/depend

