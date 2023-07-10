# Install script for directory: /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/plugin-statusnotifier

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
   "/usr/share/lxqt/translations/lxqt-panel/statusnotifier/statusnotifier_ar.qm;/usr/share/lxqt/translations/lxqt-panel/statusnotifier/statusnotifier_arn.qm;/usr/share/lxqt/translations/lxqt-panel/statusnotifier/statusnotifier_ast.qm;/usr/share/lxqt/translations/lxqt-panel/statusnotifier/statusnotifier_bg.qm;/usr/share/lxqt/translations/lxqt-panel/statusnotifier/statusnotifier_ca.qm;/usr/share/lxqt/translations/lxqt-panel/statusnotifier/statusnotifier_cs.qm;/usr/share/lxqt/translations/lxqt-panel/statusnotifier/statusnotifier_cy.qm;/usr/share/lxqt/translations/lxqt-panel/statusnotifier/statusnotifier_da.qm;/usr/share/lxqt/translations/lxqt-panel/statusnotifier/statusnotifier_de.qm;/usr/share/lxqt/translations/lxqt-panel/statusnotifier/statusnotifier_et.qm;/usr/share/lxqt/translations/lxqt-panel/statusnotifier/statusnotifier_fr.qm;/usr/share/lxqt/translations/lxqt-panel/statusnotifier/statusnotifier_gl.qm;/usr/share/lxqt/translations/lxqt-panel/statusnotifier/statusnotifier_he.qm;/usr/share/lxqt/translations/lxqt-panel/statusnotifier/statusnotifier_hr.qm;/usr/share/lxqt/translations/lxqt-panel/statusnotifier/statusnotifier_hu.qm;/usr/share/lxqt/translations/lxqt-panel/statusnotifier/statusnotifier_it.qm;/usr/share/lxqt/translations/lxqt-panel/statusnotifier/statusnotifier_ja.qm;/usr/share/lxqt/translations/lxqt-panel/statusnotifier/statusnotifier_ko.qm;/usr/share/lxqt/translations/lxqt-panel/statusnotifier/statusnotifier_lt.qm;/usr/share/lxqt/translations/lxqt-panel/statusnotifier/statusnotifier_lv.qm;/usr/share/lxqt/translations/lxqt-panel/statusnotifier/statusnotifier_nb_NO.qm;/usr/share/lxqt/translations/lxqt-panel/statusnotifier/statusnotifier_nl.qm;/usr/share/lxqt/translations/lxqt-panel/statusnotifier/statusnotifier_oc.qm;/usr/share/lxqt/translations/lxqt-panel/statusnotifier/statusnotifier_pl.qm;/usr/share/lxqt/translations/lxqt-panel/statusnotifier/statusnotifier_pt.qm;/usr/share/lxqt/translations/lxqt-panel/statusnotifier/statusnotifier_ru.qm;/usr/share/lxqt/translations/lxqt-panel/statusnotifier/statusnotifier_si.qm;/usr/share/lxqt/translations/lxqt-panel/statusnotifier/statusnotifier_sk_SK.qm;/usr/share/lxqt/translations/lxqt-panel/statusnotifier/statusnotifier_tr.qm;/usr/share/lxqt/translations/lxqt-panel/statusnotifier/statusnotifier_uk.qm;/usr/share/lxqt/translations/lxqt-panel/statusnotifier/statusnotifier_zh_TW.qm")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/lxqt/translations/lxqt-panel/statusnotifier" TYPE FILE FILES
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-statusnotifier/statusnotifier_ar.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-statusnotifier/statusnotifier_arn.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-statusnotifier/statusnotifier_ast.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-statusnotifier/statusnotifier_bg.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-statusnotifier/statusnotifier_ca.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-statusnotifier/statusnotifier_cs.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-statusnotifier/statusnotifier_cy.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-statusnotifier/statusnotifier_da.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-statusnotifier/statusnotifier_de.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-statusnotifier/statusnotifier_et.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-statusnotifier/statusnotifier_fr.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-statusnotifier/statusnotifier_gl.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-statusnotifier/statusnotifier_he.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-statusnotifier/statusnotifier_hr.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-statusnotifier/statusnotifier_hu.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-statusnotifier/statusnotifier_it.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-statusnotifier/statusnotifier_ja.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-statusnotifier/statusnotifier_ko.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-statusnotifier/statusnotifier_lt.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-statusnotifier/statusnotifier_lv.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-statusnotifier/statusnotifier_nb_NO.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-statusnotifier/statusnotifier_nl.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-statusnotifier/statusnotifier_oc.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-statusnotifier/statusnotifier_pl.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-statusnotifier/statusnotifier_pt.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-statusnotifier/statusnotifier_ru.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-statusnotifier/statusnotifier_si.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-statusnotifier/statusnotifier_sk_SK.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-statusnotifier/statusnotifier_tr.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-statusnotifier/statusnotifier_uk.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-statusnotifier/statusnotifier_zh_TW.qm"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/lxqt/lxqt-panel/statusnotifier.desktop")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/lxqt/lxqt-panel" TYPE FILE FILES "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-statusnotifier/statusnotifier.desktop")
endif()

