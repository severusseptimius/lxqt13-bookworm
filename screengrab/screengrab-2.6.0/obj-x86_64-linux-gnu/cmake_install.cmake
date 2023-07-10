# Install script for directory: /home/debian/Lxqt1.3/screengrab/screengrab-2.6.0

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/screengrab/translations" TYPE FILE FILES
    "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/screengrab_ar.qm"
    "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/screengrab_arn.qm"
    "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/screengrab_ast.qm"
    "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/screengrab_bg.qm"
    "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/screengrab_ca.qm"
    "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/screengrab_cs.qm"
    "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/screengrab_cy.qm"
    "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/screengrab_de.qm"
    "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/screengrab_el.qm"
    "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/screengrab_es.qm"
    "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/screengrab_et.qm"
    "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/screengrab_fr.qm"
    "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/screengrab_gl.qm"
    "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/screengrab_he.qm"
    "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/screengrab_hr.qm"
    "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/screengrab_hu.qm"
    "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/screengrab_it.qm"
    "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/screengrab_ja.qm"
    "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/screengrab_ko.qm"
    "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/screengrab_lt.qm"
    "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/screengrab_nb_NO.qm"
    "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/screengrab_nl.qm"
    "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/screengrab_oc.qm"
    "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/screengrab_pl.qm"
    "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/screengrab_pt.qm"
    "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/screengrab_pt_BR.qm"
    "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/screengrab_ru.qm"
    "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/screengrab_si.qm"
    "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/screengrab_sk.qm"
    "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/screengrab_sl.qm"
    "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/screengrab_sv.qm"
    "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/screengrab_tr.qm"
    "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/screengrab_uk.qm"
    "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/screengrab_vi.qm"
    "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/screengrab_zh_CN.qm"
    "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/screengrab_zh_TW.qm"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/screengrab" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/screengrab")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/screengrab"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/screengrab")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/screengrab" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/screengrab")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/screengrab")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/doc/screengrab/html")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/doc/screengrab" TYPE DIRECTORY FILES "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/docs/html")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/screengrab" TYPE FILE FILES "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/screengrab.conf")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/applications" TYPE FILE FILES "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/screengrab.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/scalable/apps" TYPE FILE FILES "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/img/screengrab.svg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/metainfo" TYPE FILE FILES "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/screengrab.metainfo.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/src/common/qkeysequencewidget/cmake_install.cmake")
  include("/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/src/modules/extedit/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/debian/Lxqt1.3/screengrab/screengrab-2.6.0/obj-x86_64-linux-gnu/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
