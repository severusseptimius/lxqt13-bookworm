# Install script for directory: /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/plugin-taskbar

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
   "/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_ar.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_arn.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_ast.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_bg.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_ca.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_cs.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_cy.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_da.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_de.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_el.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_eo.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_es.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_es_VE.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_et.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_eu.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_fi.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_fr.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_gl.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_he.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_hr.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_hu.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_ia.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_id.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_it.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_ja.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_ko.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_lt.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_lv.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_nb_NO.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_nl.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_oc.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_pl.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_pt.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_pt_BR.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_ro_RO.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_ru.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_si.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_sk_SK.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_sl.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_sr@latin.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_sr_BA.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_sr_RS.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_th_TH.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_tr.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_uk.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_zh_CN.qm;/usr/share/lxqt/translations/lxqt-panel/taskbar/taskbar_zh_TW.qm")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/lxqt/translations/lxqt-panel/taskbar" TYPE FILE FILES
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_ar.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_arn.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_ast.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_bg.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_ca.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_cs.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_cy.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_da.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_de.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_el.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_eo.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_es.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_es_VE.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_et.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_eu.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_fi.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_fr.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_gl.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_he.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_hr.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_hu.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_ia.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_id.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_it.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_ja.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_ko.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_lt.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_lv.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_nb_NO.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_nl.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_oc.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_pl.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_pt.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_pt_BR.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_ro_RO.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_ru.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_si.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_sk_SK.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_sl.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_sr@latin.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_sr_BA.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_sr_RS.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_th_TH.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_tr.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_uk.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_zh_CN.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar_zh_TW.qm"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/lxqt/lxqt-panel/taskbar.desktop")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/lxqt/lxqt-panel" TYPE FILE FILES "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-taskbar/taskbar.desktop")
endif()

