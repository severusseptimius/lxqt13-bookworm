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
CMAKE_SOURCE_DIR = /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu

# Include any dependencies generated for this target.
include client/CMakeFiles/lxqt-globalkeys.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include client/CMakeFiles/lxqt-globalkeys.dir/compiler_depend.make

# Include the progress variables for this target.
include client/CMakeFiles/lxqt-globalkeys.dir/progress.make

# Include the compile flags for this target's objects.
include client/CMakeFiles/lxqt-globalkeys.dir/flags.make

client/org.lxqt.global_key_shortcuts.native.moc: client/org.lxqt.global_key_shortcuts.native.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating org.lxqt.global_key_shortcuts.native.moc"
	cd /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/client && /usr/lib/qt5/bin/moc @/home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/client/org.lxqt.global_key_shortcuts.native.moc_parameters

client/org.lxqt.global_key_shortcuts.native.cpp: client/org.lxqt.global_key_shortcuts.native.xml
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating org.lxqt.global_key_shortcuts.native.cpp, org.lxqt.global_key_shortcuts.native.h"
	cd /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/client && /usr/lib/qt5/bin/qdbusxml2cpp -m -p org.lxqt.global_key_shortcuts.native /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/client/org.lxqt.global_key_shortcuts.native.xml

client/org.lxqt.global_key_shortcuts.native.h: client/org.lxqt.global_key_shortcuts.native.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate client/org.lxqt.global_key_shortcuts.native.h

client/org.lxqt.global_key_shortcuts.client.moc: client/org.lxqt.global_key_shortcuts.client.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating org.lxqt.global_key_shortcuts.client.moc"
	cd /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/client && /usr/lib/qt5/bin/moc @/home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/client/org.lxqt.global_key_shortcuts.client.moc_parameters

client/org.lxqt.global_key_shortcuts.client.cpp: client/org.lxqt.global_key_shortcuts.client.xml
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Generating org.lxqt.global_key_shortcuts.client.cpp, org.lxqt.global_key_shortcuts.client.h"
	cd /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/client && /usr/lib/qt5/bin/qdbusxml2cpp -m -a org.lxqt.global_key_shortcuts.client -c OrgLxqtActionClientAdaptor -i action_p.h -l GlobalKeyShortcut::ActionImpl /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/client/org.lxqt.global_key_shortcuts.client.xml

client/org.lxqt.global_key_shortcuts.client.h: client/org.lxqt.global_key_shortcuts.client.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate client/org.lxqt.global_key_shortcuts.client.h

client/CMakeFiles/lxqt-globalkeys.dir/lxqt-globalkeys_autogen/mocs_compilation.cpp.o: client/CMakeFiles/lxqt-globalkeys.dir/flags.make
client/CMakeFiles/lxqt-globalkeys.dir/lxqt-globalkeys_autogen/mocs_compilation.cpp.o: client/lxqt-globalkeys_autogen/mocs_compilation.cpp
client/CMakeFiles/lxqt-globalkeys.dir/lxqt-globalkeys_autogen/mocs_compilation.cpp.o: client/CMakeFiles/lxqt-globalkeys.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object client/CMakeFiles/lxqt-globalkeys.dir/lxqt-globalkeys_autogen/mocs_compilation.cpp.o"
	cd /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT client/CMakeFiles/lxqt-globalkeys.dir/lxqt-globalkeys_autogen/mocs_compilation.cpp.o -MF CMakeFiles/lxqt-globalkeys.dir/lxqt-globalkeys_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/lxqt-globalkeys.dir/lxqt-globalkeys_autogen/mocs_compilation.cpp.o -c /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/client/lxqt-globalkeys_autogen/mocs_compilation.cpp

client/CMakeFiles/lxqt-globalkeys.dir/lxqt-globalkeys_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lxqt-globalkeys.dir/lxqt-globalkeys_autogen/mocs_compilation.cpp.i"
	cd /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/client/lxqt-globalkeys_autogen/mocs_compilation.cpp > CMakeFiles/lxqt-globalkeys.dir/lxqt-globalkeys_autogen/mocs_compilation.cpp.i

client/CMakeFiles/lxqt-globalkeys.dir/lxqt-globalkeys_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lxqt-globalkeys.dir/lxqt-globalkeys_autogen/mocs_compilation.cpp.s"
	cd /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/client/lxqt-globalkeys_autogen/mocs_compilation.cpp -o CMakeFiles/lxqt-globalkeys.dir/lxqt-globalkeys_autogen/mocs_compilation.cpp.s

client/CMakeFiles/lxqt-globalkeys.dir/client.cpp.o: client/CMakeFiles/lxqt-globalkeys.dir/flags.make
client/CMakeFiles/lxqt-globalkeys.dir/client.cpp.o: /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/client/client.cpp
client/CMakeFiles/lxqt-globalkeys.dir/client.cpp.o: client/CMakeFiles/lxqt-globalkeys.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object client/CMakeFiles/lxqt-globalkeys.dir/client.cpp.o"
	cd /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT client/CMakeFiles/lxqt-globalkeys.dir/client.cpp.o -MF CMakeFiles/lxqt-globalkeys.dir/client.cpp.o.d -o CMakeFiles/lxqt-globalkeys.dir/client.cpp.o -c /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/client/client.cpp

client/CMakeFiles/lxqt-globalkeys.dir/client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lxqt-globalkeys.dir/client.cpp.i"
	cd /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/client/client.cpp > CMakeFiles/lxqt-globalkeys.dir/client.cpp.i

client/CMakeFiles/lxqt-globalkeys.dir/client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lxqt-globalkeys.dir/client.cpp.s"
	cd /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/client/client.cpp -o CMakeFiles/lxqt-globalkeys.dir/client.cpp.s

client/CMakeFiles/lxqt-globalkeys.dir/action.cpp.o: client/CMakeFiles/lxqt-globalkeys.dir/flags.make
client/CMakeFiles/lxqt-globalkeys.dir/action.cpp.o: /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/client/action.cpp
client/CMakeFiles/lxqt-globalkeys.dir/action.cpp.o: client/CMakeFiles/lxqt-globalkeys.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object client/CMakeFiles/lxqt-globalkeys.dir/action.cpp.o"
	cd /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT client/CMakeFiles/lxqt-globalkeys.dir/action.cpp.o -MF CMakeFiles/lxqt-globalkeys.dir/action.cpp.o.d -o CMakeFiles/lxqt-globalkeys.dir/action.cpp.o -c /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/client/action.cpp

client/CMakeFiles/lxqt-globalkeys.dir/action.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lxqt-globalkeys.dir/action.cpp.i"
	cd /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/client/action.cpp > CMakeFiles/lxqt-globalkeys.dir/action.cpp.i

client/CMakeFiles/lxqt-globalkeys.dir/action.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lxqt-globalkeys.dir/action.cpp.s"
	cd /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/client/action.cpp -o CMakeFiles/lxqt-globalkeys.dir/action.cpp.s

client/CMakeFiles/lxqt-globalkeys.dir/org.lxqt.global_key_shortcuts.native.cpp.o: client/CMakeFiles/lxqt-globalkeys.dir/flags.make
client/CMakeFiles/lxqt-globalkeys.dir/org.lxqt.global_key_shortcuts.native.cpp.o: client/org.lxqt.global_key_shortcuts.native.cpp
client/CMakeFiles/lxqt-globalkeys.dir/org.lxqt.global_key_shortcuts.native.cpp.o: client/org.lxqt.global_key_shortcuts.native.moc
client/CMakeFiles/lxqt-globalkeys.dir/org.lxqt.global_key_shortcuts.native.cpp.o: client/CMakeFiles/lxqt-globalkeys.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object client/CMakeFiles/lxqt-globalkeys.dir/org.lxqt.global_key_shortcuts.native.cpp.o"
	cd /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT client/CMakeFiles/lxqt-globalkeys.dir/org.lxqt.global_key_shortcuts.native.cpp.o -MF CMakeFiles/lxqt-globalkeys.dir/org.lxqt.global_key_shortcuts.native.cpp.o.d -o CMakeFiles/lxqt-globalkeys.dir/org.lxqt.global_key_shortcuts.native.cpp.o -c /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/client/org.lxqt.global_key_shortcuts.native.cpp

client/CMakeFiles/lxqt-globalkeys.dir/org.lxqt.global_key_shortcuts.native.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lxqt-globalkeys.dir/org.lxqt.global_key_shortcuts.native.cpp.i"
	cd /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/client/org.lxqt.global_key_shortcuts.native.cpp > CMakeFiles/lxqt-globalkeys.dir/org.lxqt.global_key_shortcuts.native.cpp.i

client/CMakeFiles/lxqt-globalkeys.dir/org.lxqt.global_key_shortcuts.native.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lxqt-globalkeys.dir/org.lxqt.global_key_shortcuts.native.cpp.s"
	cd /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/client/org.lxqt.global_key_shortcuts.native.cpp -o CMakeFiles/lxqt-globalkeys.dir/org.lxqt.global_key_shortcuts.native.cpp.s

client/CMakeFiles/lxqt-globalkeys.dir/org.lxqt.global_key_shortcuts.client.cpp.o: client/CMakeFiles/lxqt-globalkeys.dir/flags.make
client/CMakeFiles/lxqt-globalkeys.dir/org.lxqt.global_key_shortcuts.client.cpp.o: client/org.lxqt.global_key_shortcuts.client.cpp
client/CMakeFiles/lxqt-globalkeys.dir/org.lxqt.global_key_shortcuts.client.cpp.o: client/org.lxqt.global_key_shortcuts.client.moc
client/CMakeFiles/lxqt-globalkeys.dir/org.lxqt.global_key_shortcuts.client.cpp.o: client/CMakeFiles/lxqt-globalkeys.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object client/CMakeFiles/lxqt-globalkeys.dir/org.lxqt.global_key_shortcuts.client.cpp.o"
	cd /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT client/CMakeFiles/lxqt-globalkeys.dir/org.lxqt.global_key_shortcuts.client.cpp.o -MF CMakeFiles/lxqt-globalkeys.dir/org.lxqt.global_key_shortcuts.client.cpp.o.d -o CMakeFiles/lxqt-globalkeys.dir/org.lxqt.global_key_shortcuts.client.cpp.o -c /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/client/org.lxqt.global_key_shortcuts.client.cpp

client/CMakeFiles/lxqt-globalkeys.dir/org.lxqt.global_key_shortcuts.client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lxqt-globalkeys.dir/org.lxqt.global_key_shortcuts.client.cpp.i"
	cd /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/client/org.lxqt.global_key_shortcuts.client.cpp > CMakeFiles/lxqt-globalkeys.dir/org.lxqt.global_key_shortcuts.client.cpp.i

client/CMakeFiles/lxqt-globalkeys.dir/org.lxqt.global_key_shortcuts.client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lxqt-globalkeys.dir/org.lxqt.global_key_shortcuts.client.cpp.s"
	cd /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/client/org.lxqt.global_key_shortcuts.client.cpp -o CMakeFiles/lxqt-globalkeys.dir/org.lxqt.global_key_shortcuts.client.cpp.s

# Object files for target lxqt-globalkeys
lxqt__globalkeys_OBJECTS = \
"CMakeFiles/lxqt-globalkeys.dir/lxqt-globalkeys_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/lxqt-globalkeys.dir/client.cpp.o" \
"CMakeFiles/lxqt-globalkeys.dir/action.cpp.o" \
"CMakeFiles/lxqt-globalkeys.dir/org.lxqt.global_key_shortcuts.native.cpp.o" \
"CMakeFiles/lxqt-globalkeys.dir/org.lxqt.global_key_shortcuts.client.cpp.o"

# External object files for target lxqt-globalkeys
lxqt__globalkeys_EXTERNAL_OBJECTS =

client/liblxqt-globalkeys.so.1.3.0: client/CMakeFiles/lxqt-globalkeys.dir/lxqt-globalkeys_autogen/mocs_compilation.cpp.o
client/liblxqt-globalkeys.so.1.3.0: client/CMakeFiles/lxqt-globalkeys.dir/client.cpp.o
client/liblxqt-globalkeys.so.1.3.0: client/CMakeFiles/lxqt-globalkeys.dir/action.cpp.o
client/liblxqt-globalkeys.so.1.3.0: client/CMakeFiles/lxqt-globalkeys.dir/org.lxqt.global_key_shortcuts.native.cpp.o
client/liblxqt-globalkeys.so.1.3.0: client/CMakeFiles/lxqt-globalkeys.dir/org.lxqt.global_key_shortcuts.client.cpp.o
client/liblxqt-globalkeys.so.1.3.0: client/CMakeFiles/lxqt-globalkeys.dir/build.make
client/liblxqt-globalkeys.so.1.3.0: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.15.8
client/liblxqt-globalkeys.so.1.3.0: /usr/lib/x86_64-linux-gnu/libQt5DBus.so.5.15.8
client/liblxqt-globalkeys.so.1.3.0: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.15.8
client/liblxqt-globalkeys.so.1.3.0: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.8
client/liblxqt-globalkeys.so.1.3.0: client/CMakeFiles/lxqt-globalkeys.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX shared library liblxqt-globalkeys.so"
	cd /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/client && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lxqt-globalkeys.dir/link.txt --verbose=$(VERBOSE)
	cd /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/client && $(CMAKE_COMMAND) -E cmake_symlink_library liblxqt-globalkeys.so.1.3.0 liblxqt-globalkeys.so.1 liblxqt-globalkeys.so

client/liblxqt-globalkeys.so.1: client/liblxqt-globalkeys.so.1.3.0
	@$(CMAKE_COMMAND) -E touch_nocreate client/liblxqt-globalkeys.so.1

client/liblxqt-globalkeys.so: client/liblxqt-globalkeys.so.1.3.0
	@$(CMAKE_COMMAND) -E touch_nocreate client/liblxqt-globalkeys.so

# Rule to build all files generated by this target.
client/CMakeFiles/lxqt-globalkeys.dir/build: client/liblxqt-globalkeys.so
.PHONY : client/CMakeFiles/lxqt-globalkeys.dir/build

client/CMakeFiles/lxqt-globalkeys.dir/clean:
	cd /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/client && $(CMAKE_COMMAND) -P CMakeFiles/lxqt-globalkeys.dir/cmake_clean.cmake
.PHONY : client/CMakeFiles/lxqt-globalkeys.dir/clean

client/CMakeFiles/lxqt-globalkeys.dir/depend: client/org.lxqt.global_key_shortcuts.client.cpp
client/CMakeFiles/lxqt-globalkeys.dir/depend: client/org.lxqt.global_key_shortcuts.client.h
client/CMakeFiles/lxqt-globalkeys.dir/depend: client/org.lxqt.global_key_shortcuts.client.moc
client/CMakeFiles/lxqt-globalkeys.dir/depend: client/org.lxqt.global_key_shortcuts.native.cpp
client/CMakeFiles/lxqt-globalkeys.dir/depend: client/org.lxqt.global_key_shortcuts.native.h
client/CMakeFiles/lxqt-globalkeys.dir/depend: client/org.lxqt.global_key_shortcuts.native.moc
	cd /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0 /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/client /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/client /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/client/CMakeFiles/lxqt-globalkeys.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : client/CMakeFiles/lxqt-globalkeys.dir/depend

