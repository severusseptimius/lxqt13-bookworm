# Install script for directory: /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/plugin-desktopswitch

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
   "/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_ar.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_arn.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_ast.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_bg.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_ca.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_cs.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_cy.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_da.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_de.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_el.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_eo.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_es.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_es_UY.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_es_VE.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_et.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_eu.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_fi.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_fr.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_gl.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_he.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_hr.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_hu.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_ia.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_id.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_it.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_ja.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_ko.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_lt.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_lv.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_nb_NO.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_nl.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_oc.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_pl.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_pt.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_pt_BR.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_ro_RO.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_ru.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_si.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_sk_SK.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_sl.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_sr@ijekavian.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_sr@latin.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_sr_BA.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_sr_RS.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_sv.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_th_TH.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_tr.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_uk.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_zh_CN.qm;/usr/share/lxqt/translations/lxqt-panel/desktopswitch/desktopswitch_zh_TW.qm")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/lxqt/translations/lxqt-panel/desktopswitch" TYPE FILE FILES
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_ar.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_arn.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_ast.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_bg.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_ca.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_cs.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_cy.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_da.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_de.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_el.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_eo.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_es.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_es_UY.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_es_VE.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_et.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_eu.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_fi.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_fr.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_gl.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_he.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_hr.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_hu.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_ia.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_id.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_it.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_ja.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_ko.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_lt.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_lv.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_nb_NO.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_nl.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_oc.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_pl.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_pt.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_pt_BR.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_ro_RO.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_ru.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_si.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_sk_SK.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_sl.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_sr@ijekavian.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_sr@latin.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_sr_BA.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_sr_RS.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_sv.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_th_TH.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_tr.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_uk.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_zh_CN.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch_zh_TW.qm"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/lxqt/lxqt-panel/desktopswitch.desktop")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/lxqt/lxqt-panel" TYPE FILE FILES "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-desktopswitch/desktopswitch.desktop")
endif()

