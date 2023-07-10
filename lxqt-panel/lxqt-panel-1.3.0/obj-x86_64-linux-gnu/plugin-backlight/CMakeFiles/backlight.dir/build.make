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

# Include any dependencies generated for this target.
include plugin-backlight/CMakeFiles/backlight.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include plugin-backlight/CMakeFiles/backlight.dir/compiler_depend.make

# Include the progress variables for this target.
include plugin-backlight/CMakeFiles/backlight.dir/progress.make

# Include the compile flags for this target's objects.
include plugin-backlight/CMakeFiles/backlight.dir/flags.make

plugin-backlight/backlight.desktop:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating backlight.desktop"
	cd /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-backlight && /usr/bin/perl /usr/share/cmake/lxqt-build-tools/modules//LXQtTranslateDesktopYaml.pl /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/plugin-backlight/resources/backlight.desktop.in backlight "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/plugin-backlight/translations/backlight[_.]*desktop.yaml" >> /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-backlight/backlight.desktop

plugin-backlight/CMakeFiles/backlight.dir/backlight_autogen/mocs_compilation.cpp.o: plugin-backlight/CMakeFiles/backlight.dir/flags.make
plugin-backlight/CMakeFiles/backlight.dir/backlight_autogen/mocs_compilation.cpp.o: plugin-backlight/backlight_autogen/mocs_compilation.cpp
plugin-backlight/CMakeFiles/backlight.dir/backlight_autogen/mocs_compilation.cpp.o: plugin-backlight/CMakeFiles/backlight.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object plugin-backlight/CMakeFiles/backlight.dir/backlight_autogen/mocs_compilation.cpp.o"
	cd /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-backlight && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT plugin-backlight/CMakeFiles/backlight.dir/backlight_autogen/mocs_compilation.cpp.o -MF CMakeFiles/backlight.dir/backlight_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/backlight.dir/backlight_autogen/mocs_compilation.cpp.o -c /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-backlight/backlight_autogen/mocs_compilation.cpp

plugin-backlight/CMakeFiles/backlight.dir/backlight_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/backlight.dir/backlight_autogen/mocs_compilation.cpp.i"
	cd /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-backlight && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-backlight/backlight_autogen/mocs_compilation.cpp > CMakeFiles/backlight.dir/backlight_autogen/mocs_compilation.cpp.i

plugin-backlight/CMakeFiles/backlight.dir/backlight_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/backlight.dir/backlight_autogen/mocs_compilation.cpp.s"
	cd /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-backlight && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-backlight/backlight_autogen/mocs_compilation.cpp -o CMakeFiles/backlight.dir/backlight_autogen/mocs_compilation.cpp.s

plugin-backlight/CMakeFiles/backlight.dir/backlight.cpp.o: plugin-backlight/CMakeFiles/backlight.dir/flags.make
plugin-backlight/CMakeFiles/backlight.dir/backlight.cpp.o: /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/plugin-backlight/backlight.cpp
plugin-backlight/CMakeFiles/backlight.dir/backlight.cpp.o: plugin-backlight/CMakeFiles/backlight.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object plugin-backlight/CMakeFiles/backlight.dir/backlight.cpp.o"
	cd /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-backlight && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT plugin-backlight/CMakeFiles/backlight.dir/backlight.cpp.o -MF CMakeFiles/backlight.dir/backlight.cpp.o.d -o CMakeFiles/backlight.dir/backlight.cpp.o -c /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/plugin-backlight/backlight.cpp

plugin-backlight/CMakeFiles/backlight.dir/backlight.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/backlight.dir/backlight.cpp.i"
	cd /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-backlight && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/plugin-backlight/backlight.cpp > CMakeFiles/backlight.dir/backlight.cpp.i

plugin-backlight/CMakeFiles/backlight.dir/backlight.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/backlight.dir/backlight.cpp.s"
	cd /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-backlight && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/plugin-backlight/backlight.cpp -o CMakeFiles/backlight.dir/backlight.cpp.s

plugin-backlight/CMakeFiles/backlight.dir/sliderdialog.cpp.o: plugin-backlight/CMakeFiles/backlight.dir/flags.make
plugin-backlight/CMakeFiles/backlight.dir/sliderdialog.cpp.o: /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/plugin-backlight/sliderdialog.cpp
plugin-backlight/CMakeFiles/backlight.dir/sliderdialog.cpp.o: plugin-backlight/CMakeFiles/backlight.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object plugin-backlight/CMakeFiles/backlight.dir/sliderdialog.cpp.o"
	cd /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-backlight && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT plugin-backlight/CMakeFiles/backlight.dir/sliderdialog.cpp.o -MF CMakeFiles/backlight.dir/sliderdialog.cpp.o.d -o CMakeFiles/backlight.dir/sliderdialog.cpp.o -c /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/plugin-backlight/sliderdialog.cpp

plugin-backlight/CMakeFiles/backlight.dir/sliderdialog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/backlight.dir/sliderdialog.cpp.i"
	cd /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-backlight && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/plugin-backlight/sliderdialog.cpp > CMakeFiles/backlight.dir/sliderdialog.cpp.i

plugin-backlight/CMakeFiles/backlight.dir/sliderdialog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/backlight.dir/sliderdialog.cpp.s"
	cd /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-backlight && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/plugin-backlight/sliderdialog.cpp -o CMakeFiles/backlight.dir/sliderdialog.cpp.s

plugin-backlight/CMakeFiles/backlight.dir/LXQtPluginTranslationLoader.cpp.o: plugin-backlight/CMakeFiles/backlight.dir/flags.make
plugin-backlight/CMakeFiles/backlight.dir/LXQtPluginTranslationLoader.cpp.o: plugin-backlight/LXQtPluginTranslationLoader.cpp
plugin-backlight/CMakeFiles/backlight.dir/LXQtPluginTranslationLoader.cpp.o: plugin-backlight/CMakeFiles/backlight.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object plugin-backlight/CMakeFiles/backlight.dir/LXQtPluginTranslationLoader.cpp.o"
	cd /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-backlight && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT plugin-backlight/CMakeFiles/backlight.dir/LXQtPluginTranslationLoader.cpp.o -MF CMakeFiles/backlight.dir/LXQtPluginTranslationLoader.cpp.o.d -o CMakeFiles/backlight.dir/LXQtPluginTranslationLoader.cpp.o -c /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-backlight/LXQtPluginTranslationLoader.cpp

plugin-backlight/CMakeFiles/backlight.dir/LXQtPluginTranslationLoader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/backlight.dir/LXQtPluginTranslationLoader.cpp.i"
	cd /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-backlight && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-backlight/LXQtPluginTranslationLoader.cpp > CMakeFiles/backlight.dir/LXQtPluginTranslationLoader.cpp.i

plugin-backlight/CMakeFiles/backlight.dir/LXQtPluginTranslationLoader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/backlight.dir/LXQtPluginTranslationLoader.cpp.s"
	cd /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-backlight && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-backlight/LXQtPluginTranslationLoader.cpp -o CMakeFiles/backlight.dir/LXQtPluginTranslationLoader.cpp.s

# Object files for target backlight
backlight_OBJECTS = \
"CMakeFiles/backlight.dir/backlight_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/backlight.dir/backlight.cpp.o" \
"CMakeFiles/backlight.dir/sliderdialog.cpp.o" \
"CMakeFiles/backlight.dir/LXQtPluginTranslationLoader.cpp.o"

# External object files for target backlight
backlight_EXTERNAL_OBJECTS =

plugin-backlight/libbacklight.so: plugin-backlight/CMakeFiles/backlight.dir/backlight_autogen/mocs_compilation.cpp.o
plugin-backlight/libbacklight.so: plugin-backlight/CMakeFiles/backlight.dir/backlight.cpp.o
plugin-backlight/libbacklight.so: plugin-backlight/CMakeFiles/backlight.dir/sliderdialog.cpp.o
plugin-backlight/libbacklight.so: plugin-backlight/CMakeFiles/backlight.dir/LXQtPluginTranslationLoader.cpp.o
plugin-backlight/libbacklight.so: plugin-backlight/CMakeFiles/backlight.dir/build.make
plugin-backlight/libbacklight.so: /usr/lib/x86_64-linux-gnu/liblxqt.so.1.3.0
plugin-backlight/libbacklight.so: /usr/lib/x86_64-linux-gnu/libKF5WindowSystem.so.5.103.0
plugin-backlight/libbacklight.so: /usr/lib/x86_64-linux-gnu/libX11.so
plugin-backlight/libbacklight.so: /usr/lib/x86_64-linux-gnu/libQt5Xdg.so.3.11.0
plugin-backlight/libbacklight.so: /usr/lib/x86_64-linux-gnu/libQt5DBus.so.5.15.8
plugin-backlight/libbacklight.so: /usr/lib/x86_64-linux-gnu/libQt5Xml.so.5.15.8
plugin-backlight/libbacklight.so: /usr/lib/x86_64-linux-gnu/libQt5XdgIconLoader.so.3.11.0
plugin-backlight/libbacklight.so: /usr/lib/x86_64-linux-gnu/libQt5Svg.so.5.15.8
plugin-backlight/libbacklight.so: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.15.8
plugin-backlight/libbacklight.so: /usr/lib/x86_64-linux-gnu/libglib-2.0.so
plugin-backlight/libbacklight.so: /usr/lib/x86_64-linux-gnu/libgobject-2.0.so
plugin-backlight/libbacklight.so: /usr/lib/x86_64-linux-gnu/libgio-2.0.so
plugin-backlight/libbacklight.so: /usr/lib/x86_64-linux-gnu/libQt5X11Extras.so.5.15.8
plugin-backlight/libbacklight.so: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.15.8
plugin-backlight/libbacklight.so: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.8
plugin-backlight/libbacklight.so: plugin-backlight/CMakeFiles/backlight.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX shared module libbacklight.so"
	cd /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-backlight && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/backlight.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugin-backlight/CMakeFiles/backlight.dir/build: plugin-backlight/libbacklight.so
.PHONY : plugin-backlight/CMakeFiles/backlight.dir/build

plugin-backlight/CMakeFiles/backlight.dir/clean:
	cd /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-backlight && $(CMAKE_COMMAND) -P CMakeFiles/backlight.dir/cmake_clean.cmake
.PHONY : plugin-backlight/CMakeFiles/backlight.dir/clean

plugin-backlight/CMakeFiles/backlight.dir/depend: plugin-backlight/backlight.desktop
	cd /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0 /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/plugin-backlight /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-backlight /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-backlight/CMakeFiles/backlight.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugin-backlight/CMakeFiles/backlight.dir/depend
