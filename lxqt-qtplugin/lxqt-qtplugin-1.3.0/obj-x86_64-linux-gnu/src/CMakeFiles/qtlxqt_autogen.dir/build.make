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
CMAKE_SOURCE_DIR = /home/debian/Lxqt1.3/lxqt-qtplugin/lxqt-qtplugin-1.3.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/debian/Lxqt1.3/lxqt-qtplugin/lxqt-qtplugin-1.3.0/obj-x86_64-linux-gnu

# Utility rule file for qtlxqt_autogen.

# Include any custom commands dependencies for this target.
include src/CMakeFiles/qtlxqt_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/qtlxqt_autogen.dir/progress.make

src/CMakeFiles/qtlxqt_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/debian/Lxqt1.3/lxqt-qtplugin/lxqt-qtplugin-1.3.0/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target qtlxqt"
	cd /home/debian/Lxqt1.3/lxqt-qtplugin/lxqt-qtplugin-1.3.0/obj-x86_64-linux-gnu/src && /usr/bin/cmake -E cmake_autogen /home/debian/Lxqt1.3/lxqt-qtplugin/lxqt-qtplugin-1.3.0/obj-x86_64-linux-gnu/src/CMakeFiles/qtlxqt_autogen.dir/AutogenInfo.json RelWithDebInfo

qtlxqt_autogen: src/CMakeFiles/qtlxqt_autogen
qtlxqt_autogen: src/CMakeFiles/qtlxqt_autogen.dir/build.make
.PHONY : qtlxqt_autogen

# Rule to build all files generated by this target.
src/CMakeFiles/qtlxqt_autogen.dir/build: qtlxqt_autogen
.PHONY : src/CMakeFiles/qtlxqt_autogen.dir/build

src/CMakeFiles/qtlxqt_autogen.dir/clean:
	cd /home/debian/Lxqt1.3/lxqt-qtplugin/lxqt-qtplugin-1.3.0/obj-x86_64-linux-gnu/src && $(CMAKE_COMMAND) -P CMakeFiles/qtlxqt_autogen.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/qtlxqt_autogen.dir/clean

src/CMakeFiles/qtlxqt_autogen.dir/depend:
	cd /home/debian/Lxqt1.3/lxqt-qtplugin/lxqt-qtplugin-1.3.0/obj-x86_64-linux-gnu && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/debian/Lxqt1.3/lxqt-qtplugin/lxqt-qtplugin-1.3.0 /home/debian/Lxqt1.3/lxqt-qtplugin/lxqt-qtplugin-1.3.0/src /home/debian/Lxqt1.3/lxqt-qtplugin/lxqt-qtplugin-1.3.0/obj-x86_64-linux-gnu /home/debian/Lxqt1.3/lxqt-qtplugin/lxqt-qtplugin-1.3.0/obj-x86_64-linux-gnu/src /home/debian/Lxqt1.3/lxqt-qtplugin/lxqt-qtplugin-1.3.0/obj-x86_64-linux-gnu/src/CMakeFiles/qtlxqt_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/qtlxqt_autogen.dir/depend

