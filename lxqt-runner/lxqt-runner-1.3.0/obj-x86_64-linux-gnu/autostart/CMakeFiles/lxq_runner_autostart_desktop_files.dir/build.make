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
CMAKE_SOURCE_DIR = /home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu

# Utility rule file for lxq_runner_autostart_desktop_files.

# Include any custom commands dependencies for this target.
include autostart/CMakeFiles/lxq_runner_autostart_desktop_files.dir/compiler_depend.make

# Include the progress variables for this target.
include autostart/CMakeFiles/lxq_runner_autostart_desktop_files.dir/progress.make

autostart/CMakeFiles/lxq_runner_autostart_desktop_files: autostart/lxqt-runner.desktop

autostart/lxqt-runner.desktop:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating lxqt-runner.desktop"
	cd /home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/autostart && /usr/bin/perl /usr/share/cmake/lxqt-build-tools/modules//LXQtTranslateDesktopYaml.pl /home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/autostart/lxqt-runner.desktop.in lxqt-runner "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/autostart/translations/lxqt-runner[_.]*desktop.yaml" >> /home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/autostart/lxqt-runner.desktop

lxq_runner_autostart_desktop_files: autostart/CMakeFiles/lxq_runner_autostart_desktop_files
lxq_runner_autostart_desktop_files: autostart/lxqt-runner.desktop
lxq_runner_autostart_desktop_files: autostart/CMakeFiles/lxq_runner_autostart_desktop_files.dir/build.make
.PHONY : lxq_runner_autostart_desktop_files

# Rule to build all files generated by this target.
autostart/CMakeFiles/lxq_runner_autostart_desktop_files.dir/build: lxq_runner_autostart_desktop_files
.PHONY : autostart/CMakeFiles/lxq_runner_autostart_desktop_files.dir/build

autostart/CMakeFiles/lxq_runner_autostart_desktop_files.dir/clean:
	cd /home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/autostart && $(CMAKE_COMMAND) -P CMakeFiles/lxq_runner_autostart_desktop_files.dir/cmake_clean.cmake
.PHONY : autostart/CMakeFiles/lxq_runner_autostart_desktop_files.dir/clean

autostart/CMakeFiles/lxq_runner_autostart_desktop_files.dir/depend:
	cd /home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0 /home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/autostart /home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu /home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/autostart /home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/autostart/CMakeFiles/lxq_runner_autostart_desktop_files.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : autostart/CMakeFiles/lxq_runner_autostart_desktop_files.dir/depend

