# Install script for directory: /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/plugin-quicklaunch

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
   "/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_ar.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_arn.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_ast.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_bg.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_ca.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_cs.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_cy.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_da.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_de.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_el.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_eo.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_es.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_es_VE.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_et.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_eu.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_fi.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_fr.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_gl.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_he.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_hr.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_hu.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_ia.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_id.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_it.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_ja.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_ko.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_lt.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_lv.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_nb_NO.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_nl.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_oc.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_pl.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_pt.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_pt_BR.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_ro_RO.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_ru.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_si.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_sk_SK.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_sl.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_sr@latin.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_sr_BA.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_sr_RS.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_th_TH.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_tr.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_uk.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_zh_CN.qm;/usr/share/lxqt/translations/lxqt-panel/quicklaunch/quicklaunch_zh_TW.qm")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/lxqt/translations/lxqt-panel/quicklaunch" TYPE FILE FILES
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_ar.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_arn.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_ast.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_bg.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_ca.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_cs.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_cy.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_da.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_de.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_el.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_eo.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_es.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_es_VE.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_et.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_eu.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_fi.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_fr.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_gl.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_he.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_hr.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_hu.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_ia.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_id.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_it.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_ja.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_ko.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_lt.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_lv.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_nb_NO.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_nl.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_oc.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_pl.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_pt.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_pt_BR.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_ro_RO.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_ru.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_si.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_sk_SK.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_sl.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_sr@latin.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_sr_BA.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_sr_RS.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_th_TH.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_tr.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_uk.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_zh_CN.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch_zh_TW.qm"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/lxqt/lxqt-panel/quicklaunch.desktop")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/lxqt/lxqt-panel" TYPE FILE FILES "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-quicklaunch/quicklaunch.desktop")
endif()

