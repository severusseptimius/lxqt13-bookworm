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
CMAKE_SOURCE_DIR = /home/debian/Lxqt1.3/xdg-desktop-portal-lxqt/xdg-desktop-portal-lxqt-0.4.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/debian/Lxqt1.3/xdg-desktop-portal-lxqt/xdg-desktop-portal-lxqt-0.4.0/obj-x86_64-linux-gnu

# Utility rule file for xdg-desktop-portal-lxqt_autogen.

# Include any custom commands dependencies for this target.
include src/CMakeFiles/xdg-desktop-portal-lxqt_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/xdg-desktop-portal-lxqt_autogen.dir/progress.make

src/CMakeFiles/xdg-desktop-portal-lxqt_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/debian/Lxqt1.3/xdg-desktop-portal-lxqt/xdg-desktop-portal-lxqt-0.4.0/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target xdg-desktop-portal-lxqt"
	cd /home/debian/Lxqt1.3/xdg-desktop-portal-lxqt/xdg-desktop-portal-lxqt-0.4.0/obj-x86_64-linux-gnu/src && /usr/bin/cmake -E cmake_autogen /home/debian/Lxqt1.3/xdg-desktop-portal-lxqt/xdg-desktop-portal-lxqt-0.4.0/obj-x86_64-linux-gnu/src/CMakeFiles/xdg-desktop-portal-lxqt_autogen.dir/AutogenInfo.json RelWithDebInfo

xdg-desktop-portal-lxqt_autogen: src/CMakeFiles/xdg-desktop-portal-lxqt_autogen
xdg-desktop-portal-lxqt_autogen: src/CMakeFiles/xdg-desktop-portal-lxqt_autogen.dir/build.make
.PHONY : xdg-desktop-portal-lxqt_autogen

# Rule to build all files generated by this target.
src/CMakeFiles/xdg-desktop-portal-lxqt_autogen.dir/build: xdg-desktop-portal-lxqt_autogen
.PHONY : src/CMakeFiles/xdg-desktop-portal-lxqt_autogen.dir/build

src/CMakeFiles/xdg-desktop-portal-lxqt_autogen.dir/clean:
	cd /home/debian/Lxqt1.3/xdg-desktop-portal-lxqt/xdg-desktop-portal-lxqt-0.4.0/obj-x86_64-linux-gnu/src && $(CMAKE_COMMAND) -P CMakeFiles/xdg-desktop-portal-lxqt_autogen.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/xdg-desktop-portal-lxqt_autogen.dir/clean

src/CMakeFiles/xdg-desktop-portal-lxqt_autogen.dir/depend:
	cd /home/debian/Lxqt1.3/xdg-desktop-portal-lxqt/xdg-desktop-portal-lxqt-0.4.0/obj-x86_64-linux-gnu && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/debian/Lxqt1.3/xdg-desktop-portal-lxqt/xdg-desktop-portal-lxqt-0.4.0 /home/debian/Lxqt1.3/xdg-desktop-portal-lxqt/xdg-desktop-portal-lxqt-0.4.0/src /home/debian/Lxqt1.3/xdg-desktop-portal-lxqt/xdg-desktop-portal-lxqt-0.4.0/obj-x86_64-linux-gnu /home/debian/Lxqt1.3/xdg-desktop-portal-lxqt/xdg-desktop-portal-lxqt-0.4.0/obj-x86_64-linux-gnu/src /home/debian/Lxqt1.3/xdg-desktop-portal-lxqt/xdg-desktop-portal-lxqt-0.4.0/obj-x86_64-linux-gnu/src/CMakeFiles/xdg-desktop-portal-lxqt_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/xdg-desktop-portal-lxqt_autogen.dir/depend

