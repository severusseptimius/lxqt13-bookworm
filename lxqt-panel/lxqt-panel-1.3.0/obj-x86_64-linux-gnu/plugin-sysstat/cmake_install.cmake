# Install script for directory: /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/plugin-sysstat

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
   "/usr/share/lxqt/translations/lxqt-panel/sysstat/sysstat_ar.qm;/usr/share/lxqt/translations/lxqt-panel/sysstat/sysstat_arn.qm;/usr/share/lxqt/translations/lxqt-panel/sysstat/sysstat_ast.qm;/usr/share/lxqt/translations/lxqt-panel/sysstat/sysstat_bg.qm;/usr/share/lxqt/translations/lxqt-panel/sysstat/sysstat_ca.qm;/usr/share/lxqt/translations/lxqt-panel/sysstat/sysstat_cs.qm;/usr/share/lxqt/translations/lxqt-panel/sysstat/sysstat_cy.qm;/usr/share/lxqt/translations/lxqt-panel/sysstat/sysstat_da.qm;/usr/share/lxqt/translations/lxqt-panel/sysstat/sysstat_de.qm;/usr/share/lxqt/translations/lxqt-panel/sysstat/sysstat_el.qm;/usr/share/lxqt/translations/lxqt-panel/sysstat/sysstat_es.qm;/usr/share/lxqt/translations/lxqt-panel/sysstat/sysstat_et.qm;/usr/share/lxqt/translations/lxqt-panel/sysstat/sysstat_fr.qm;/usr/share/lxqt/translations/lxqt-panel/sysstat/sysstat_gl.qm;/usr/share/lxqt/translations/lxqt-panel/sysstat/sysstat_he.qm;/usr/share/lxqt/translations/lxqt-panel/sysstat/sysstat_hr.qm;/usr/share/lxqt/translations/lxqt-panel/sysstat/sysstat_hu.qm;/usr/share/lxqt/translations/lxqt-panel/sysstat/sysstat_id.qm;/usr/share/lxqt/translations/lxqt-panel/sysstat/sysstat_it.qm;/usr/share/lxqt/translations/lxqt-panel/sysstat/sysstat_ja.qm;/usr/share/lxqt/translations/lxqt-panel/sysstat/sysstat_ko.qm;/usr/share/lxqt/translations/lxqt-panel/sysstat/sysstat_lt.qm;/usr/share/lxqt/translations/lxqt-panel/sysstat/sysstat_lv.qm;/usr/share/lxqt/translations/lxqt-panel/sysstat/sysstat_nb_NO.qm;/usr/share/lxqt/translations/lxqt-panel/sysstat/sysstat_nl.qm;/usr/share/lxqt/translations/lxqt-panel/sysstat/sysstat_oc.qm;/usr/share/lxqt/translations/lxqt-panel/sysstat/sysstat_pl.qm;/usr/share/lxqt/translations/lxqt-panel/sysstat/sysstat_pt.qm;/usr/share/lxqt/translations/lxqt-panel/sysstat/sysstat_pt_BR.qm;/usr/share/lxqt/translations/lxqt-panel/sysstat/sysstat_ru.qm;/usr/share/lxqt/translations/lxqt-panel/sysstat/sysstat_si.qm;/usr/share/lxqt/translations/lxqt-panel/sysstat/sysstat_sk_SK.qm;/usr/share/lxqt/translations/lxqt-panel/sysstat/sysstat_tr.qm;/usr/share/lxqt/translations/lxqt-panel/sysstat/sysstat_uk.qm;/usr/share/lxqt/translations/lxqt-panel/sysstat/sysstat_zh_CN.qm")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/lxqt/translations/lxqt-panel/sysstat" TYPE FILE FILES
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-sysstat/sysstat_ar.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-sysstat/sysstat_arn.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-sysstat/sysstat_ast.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-sysstat/sysstat_bg.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-sysstat/sysstat_ca.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-sysstat/sysstat_cs.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-sysstat/sysstat_cy.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-sysstat/sysstat_da.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-sysstat/sysstat_de.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-sysstat/sysstat_el.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-sysstat/sysstat_es.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-sysstat/sysstat_et.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-sysstat/sysstat_fr.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-sysstat/sysstat_gl.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-sysstat/sysstat_he.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-sysstat/sysstat_hr.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-sysstat/sysstat_hu.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-sysstat/sysstat_id.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-sysstat/sysstat_it.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-sysstat/sysstat_ja.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-sysstat/sysstat_ko.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-sysstat/sysstat_lt.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-sysstat/sysstat_lv.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-sysstat/sysstat_nb_NO.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-sysstat/sysstat_nl.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-sysstat/sysstat_oc.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-sysstat/sysstat_pl.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-sysstat/sysstat_pt.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-sysstat/sysstat_pt_BR.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-sysstat/sysstat_ru.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-sysstat/sysstat_si.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-sysstat/sysstat_sk_SK.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-sysstat/sysstat_tr.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-sysstat/sysstat_uk.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-sysstat/sysstat_zh_CN.qm"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/lxqt-panel/libsysstat.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/lxqt-panel/libsysstat.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/lxqt-panel/libsysstat.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/x86_64-linux-gnu/lxqt-panel/libsysstat.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/lib/x86_64-linux-gnu/lxqt-panel" TYPE MODULE FILES "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-sysstat/libsysstat.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/lxqt-panel/libsysstat.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/lxqt-panel/libsysstat.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/lxqt-panel/libsysstat.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/lxqt/lxqt-panel/sysstat.desktop")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/lxqt/lxqt-panel" TYPE FILE FILES "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-sysstat/sysstat.desktop")
endif()

