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
CMAKE_SOURCE_DIR = /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu

# Utility rule file for KF5Solid_QCH.

# Include any custom commands dependencies for this target.
include plugin-mount/CMakeFiles/KF5Solid_QCH.dir/compiler_depend.make

# Include the progress variables for this target.
include plugin-mount/CMakeFiles/KF5Solid_QCH.dir/progress.make

KF5Solid_QCH: plugin-mount/CMakeFiles/KF5Solid_QCH.dir/build.make
.PHONY : KF5Solid_QCH

# Rule to build all files generated by this target.
plugin-mount/CMakeFiles/KF5Solid_QCH.dir/build: KF5Solid_QCH
.PHONY : plugin-mount/CMakeFiles/KF5Solid_QCH.dir/build

plugin-mount/CMakeFiles/KF5Solid_QCH.dir/clean:
	cd /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-mount && $(CMAKE_COMMAND) -P CMakeFiles/KF5Solid_QCH.dir/cmake_clean.cmake
.PHONY : plugin-mount/CMakeFiles/KF5Solid_QCH.dir/clean

plugin-mount/CMakeFiles/KF5Solid_QCH.dir/depend:
	cd /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0 /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/plugin-mount /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-mount /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-mount/CMakeFiles/KF5Solid_QCH.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugin-mount/CMakeFiles/KF5Solid_QCH.dir/depend
