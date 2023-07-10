# Install script for directory: /home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0

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
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/qtermwidget5/translations/qtermwidget_ar.qm;/usr/share/qtermwidget5/translations/qtermwidget_arn.qm;/usr/share/qtermwidget5/translations/qtermwidget_ast.qm;/usr/share/qtermwidget5/translations/qtermwidget_bg.qm;/usr/share/qtermwidget5/translations/qtermwidget_ca.qm;/usr/share/qtermwidget5/translations/qtermwidget_cs.qm;/usr/share/qtermwidget5/translations/qtermwidget_cy.qm;/usr/share/qtermwidget5/translations/qtermwidget_da.qm;/usr/share/qtermwidget5/translations/qtermwidget_de.qm;/usr/share/qtermwidget5/translations/qtermwidget_de_CH.qm;/usr/share/qtermwidget5/translations/qtermwidget_el.qm;/usr/share/qtermwidget5/translations/qtermwidget_es.qm;/usr/share/qtermwidget5/translations/qtermwidget_et.qm;/usr/share/qtermwidget5/translations/qtermwidget_fr.qm;/usr/share/qtermwidget5/translations/qtermwidget_gl.qm;/usr/share/qtermwidget5/translations/qtermwidget_he.qm;/usr/share/qtermwidget5/translations/qtermwidget_hr.qm;/usr/share/qtermwidget5/translations/qtermwidget_hu.qm;/usr/share/qtermwidget5/translations/qtermwidget_it.qm;/usr/share/qtermwidget5/translations/qtermwidget_ja.qm;/usr/share/qtermwidget5/translations/qtermwidget_ko.qm;/usr/share/qtermwidget5/translations/qtermwidget_lt.qm;/usr/share/qtermwidget5/translations/qtermwidget_nb_NO.qm;/usr/share/qtermwidget5/translations/qtermwidget_nl.qm;/usr/share/qtermwidget5/translations/qtermwidget_oc.qm;/usr/share/qtermwidget5/translations/qtermwidget_pl.qm;/usr/share/qtermwidget5/translations/qtermwidget_pt.qm;/usr/share/qtermwidget5/translations/qtermwidget_pt_BR.qm;/usr/share/qtermwidget5/translations/qtermwidget_ru.qm;/usr/share/qtermwidget5/translations/qtermwidget_si.qm;/usr/share/qtermwidget5/translations/qtermwidget_sk.qm;/usr/share/qtermwidget5/translations/qtermwidget_tr.qm;/usr/share/qtermwidget5/translations/qtermwidget_uk.qm;/usr/share/qtermwidget5/translations/qtermwidget_zh_CN.qm;/usr/share/qtermwidget5/translations/qtermwidget_zh_TW.qm")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/qtermwidget5/translations" TYPE FILE FILES
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/qtermwidget_ar.qm"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/qtermwidget_arn.qm"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/qtermwidget_ast.qm"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/qtermwidget_bg.qm"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/qtermwidget_ca.qm"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/qtermwidget_cs.qm"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/qtermwidget_cy.qm"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/qtermwidget_da.qm"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/qtermwidget_de.qm"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/qtermwidget_de_CH.qm"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/qtermwidget_el.qm"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/qtermwidget_es.qm"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/qtermwidget_et.qm"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/qtermwidget_fr.qm"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/qtermwidget_gl.qm"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/qtermwidget_he.qm"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/qtermwidget_hr.qm"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/qtermwidget_hu.qm"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/qtermwidget_it.qm"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/qtermwidget_ja.qm"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/qtermwidget_ko.qm"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/qtermwidget_lt.qm"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/qtermwidget_nb_NO.qm"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/qtermwidget_nl.qm"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/qtermwidget_oc.qm"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/qtermwidget_pl.qm"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/qtermwidget_pt.qm"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/qtermwidget_pt_BR.qm"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/qtermwidget_ru.qm"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/qtermwidget_si.qm"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/qtermwidget_sk.qm"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/qtermwidget_tr.qm"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/qtermwidget_uk.qm"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/qtermwidget_zh_CN.qm"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/qtermwidget_zh_TW.qm"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/cmake/qtermwidget5" TYPE FILE FILES "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/qtermwidget5-config-version.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/cmake/qtermwidget5/qtermwidget5-targets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/cmake/qtermwidget5/qtermwidget5-targets.cmake"
         "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/CMakeFiles/Export/5bd662d4f18202a9903fef70b7ae28aa/qtermwidget5-targets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/cmake/qtermwidget5/qtermwidget5-targets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/cmake/qtermwidget5/qtermwidget5-targets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/cmake/qtermwidget5" TYPE FILE FILES "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/CMakeFiles/Export/5bd662d4f18202a9903fef70b7ae28aa/qtermwidget5-targets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/cmake/qtermwidget5" TYPE FILE FILES "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/CMakeFiles/Export/5bd662d4f18202a9903fef70b7ae28aa/qtermwidget5-targets-relwithdebinfo.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtermwidget5" TYPE FILE FILES
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/lib/qtermwidget.h"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/lib/Emulation.h"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/lib/KeyboardTranslator.h"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/lib/Filter.h"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/lib/qtermwidget_interface.h"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/lib/qtermwidget_export.h"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/lib/qtermwidget_version.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/qtermwidget5/kb-layouts/")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/qtermwidget5/kb-layouts" TYPE DIRECTORY FILES "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/lib/kb-layouts/" FILES_MATCHING REGEX "/[^/]*\\.keytab$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/qtermwidget5/color-schemes/")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/qtermwidget5/color-schemes" TYPE DIRECTORY FILES "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/lib/color-schemes/" FILES_MATCHING REGEX "/[^/]*\\.[^/]*schem[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/pkgconfig" TYPE FILE FILES "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/qtermwidget5.pc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/cmake/qtermwidget5" TYPE FILE FILES "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/qtermwidget5-config.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libqtermwidget5.so.1.3.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libqtermwidget5.so.1"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu" TYPE SHARED_LIBRARY FILES
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/libqtermwidget5.so.1.3.0"
    "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/libqtermwidget5.so.1"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libqtermwidget5.so.1.3.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libqtermwidget5.so.1"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libqtermwidget5.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libqtermwidget5.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libqtermwidget5.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu" TYPE SHARED_LIBRARY FILES "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/libqtermwidget5.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libqtermwidget5.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libqtermwidget5.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libqtermwidget5.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
