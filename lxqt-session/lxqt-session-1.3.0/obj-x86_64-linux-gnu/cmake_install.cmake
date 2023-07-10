# Install script for directory: /home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM FILES "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/startlxqt")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/man1" TYPE FILE FILES "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/startlxqt.1")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/cmake_install.cmake")
  include("/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/cmake_install.cmake")
  include("/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/cmake_install.cmake")
  include("/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/config/cmake_install.cmake")
  include("/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/autostart/cmake_install.cmake")
  include("/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/xsession/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
