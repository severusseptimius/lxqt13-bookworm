# Install script for directory: /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/plugin-worldclock

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
   "/usr/share/lxqt/translations/lxqt-panel/worldclock/worldclock_ar.qm;/usr/share/lxqt/translations/lxqt-panel/worldclock/worldclock_arn.qm;/usr/share/lxqt/translations/lxqt-panel/worldclock/worldclock_ast.qm;/usr/share/lxqt/translations/lxqt-panel/worldclock/worldclock_bg.qm;/usr/share/lxqt/translations/lxqt-panel/worldclock/worldclock_ca.qm;/usr/share/lxqt/translations/lxqt-panel/worldclock/worldclock_cs.qm;/usr/share/lxqt/translations/lxqt-panel/worldclock/worldclock_cy.qm;/usr/share/lxqt/translations/lxqt-panel/worldclock/worldclock_da.qm;/usr/share/lxqt/translations/lxqt-panel/worldclock/worldclock_de.qm;/usr/share/lxqt/translations/lxqt-panel/worldclock/worldclock_el.qm;/usr/share/lxqt/translations/lxqt-panel/worldclock/worldclock_es.qm;/usr/share/lxqt/translations/lxqt-panel/worldclock/worldclock_et.qm;/usr/share/lxqt/translations/lxqt-panel/worldclock/worldclock_fr.qm;/usr/share/lxqt/translations/lxqt-panel/worldclock/worldclock_gl.qm;/usr/share/lxqt/translations/lxqt-panel/worldclock/worldclock_he.qm;/usr/share/lxqt/translations/lxqt-panel/worldclock/worldclock_hr.qm;/usr/share/lxqt/translations/lxqt-panel/worldclock/worldclock_hu.qm;/usr/share/lxqt/translations/lxqt-panel/worldclock/worldclock_id.qm;/usr/share/lxqt/translations/lxqt-panel/worldclock/worldclock_it.qm;/usr/share/lxqt/translations/lxqt-panel/worldclock/worldclock_ja.qm;/usr/share/lxqt/translations/lxqt-panel/worldclock/worldclock_ko.qm;/usr/share/lxqt/translations/lxqt-panel/worldclock/worldclock_lt.qm;/usr/share/lxqt/translations/lxqt-panel/worldclock/worldclock_lv.qm;/usr/share/lxqt/translations/lxqt-panel/worldclock/worldclock_nb_NO.qm;/usr/share/lxqt/translations/lxqt-panel/worldclock/worldclock_nl.qm;/usr/share/lxqt/translations/lxqt-panel/worldclock/worldclock_oc.qm;/usr/share/lxqt/translations/lxqt-panel/worldclock/worldclock_pl.qm;/usr/share/lxqt/translations/lxqt-panel/worldclock/worldclock_pt.qm;/usr/share/lxqt/translations/lxqt-panel/worldclock/worldclock_pt_BR.qm;/usr/share/lxqt/translations/lxqt-panel/worldclock/worldclock_ru.qm;/usr/share/lxqt/translations/lxqt-panel/worldclock/worldclock_si.qm;/usr/share/lxqt/translations/lxqt-panel/worldclock/worldclock_sk_SK.qm;/usr/share/lxqt/translations/lxqt-panel/worldclock/worldclock_sr.qm;/usr/share/lxqt/translations/lxqt-panel/worldclock/worldclock_tr.qm;/usr/share/lxqt/translations/lxqt-panel/worldclock/worldclock_uk.qm;/usr/share/lxqt/translations/lxqt-panel/worldclock/worldclock_zh_CN.qm")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/lxqt/translations/lxqt-panel/worldclock" TYPE FILE FILES
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-worldclock/worldclock_ar.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-worldclock/worldclock_arn.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-worldclock/worldclock_ast.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-worldclock/worldclock_bg.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-worldclock/worldclock_ca.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-worldclock/worldclock_cs.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-worldclock/worldclock_cy.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-worldclock/worldclock_da.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-worldclock/worldclock_de.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-worldclock/worldclock_el.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-worldclock/worldclock_es.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-worldclock/worldclock_et.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-worldclock/worldclock_fr.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-worldclock/worldclock_gl.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-worldclock/worldclock_he.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-worldclock/worldclock_hr.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-worldclock/worldclock_hu.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-worldclock/worldclock_id.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-worldclock/worldclock_it.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-worldclock/worldclock_ja.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-worldclock/worldclock_ko.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-worldclock/worldclock_lt.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-worldclock/worldclock_lv.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-worldclock/worldclock_nb_NO.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-worldclock/worldclock_nl.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-worldclock/worldclock_oc.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-worldclock/worldclock_pl.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-worldclock/worldclock_pt.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-worldclock/worldclock_pt_BR.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-worldclock/worldclock_ru.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-worldclock/worldclock_si.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-worldclock/worldclock_sk_SK.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-worldclock/worldclock_sr.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-worldclock/worldclock_tr.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-worldclock/worldclock_uk.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-worldclock/worldclock_zh_CN.qm"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/lxqt/lxqt-panel/worldclock.desktop")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/lxqt/lxqt-panel" TYPE FILE FILES "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-worldclock/worldclock.desktop")
endif()

