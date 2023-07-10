# Install script for directory: /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/panel

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
   "/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_ar.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_arn.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_ast.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_bg.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_ca.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_cs.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_cy.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_da.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_de.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_el.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_en_GB.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_eo.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_es.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_es_UY.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_es_VE.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_et.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_eu.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_fa.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_fi.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_fr.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_gl.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_he.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_hr.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_hu.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_ia.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_id.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_it.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_ja.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_ko.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_lt.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_lv.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_nb_NO.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_nl.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_oc.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_pl.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_pt.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_pt_BR.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_ro_RO.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_ru.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_si.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_sk_SK.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_sl.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_sr@ijekavian.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_sr@latin.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_sr_BA.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_sr_RS.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_sv.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_th_TH.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_tr.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_uk.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_zh_CN.qm;/usr/share/lxqt/translations/lxqt-panel/lxqt-panel_zh_TW.qm")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/lxqt/translations/lxqt-panel" TYPE FILE FILES
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_ar.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_arn.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_ast.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_bg.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_ca.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_cs.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_cy.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_da.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_de.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_el.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_en_GB.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_eo.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_es.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_es_UY.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_es_VE.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_et.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_eu.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_fa.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_fi.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_fr.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_gl.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_he.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_hr.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_hu.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_ia.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_id.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_it.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_ja.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_ko.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_lt.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_lv.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_nb_NO.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_nl.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_oc.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_pl.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_pt.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_pt_BR.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_ro_RO.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_ru.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_si.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_sk_SK.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_sl.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_sr@ijekavian.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_sr@latin.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_sr_BA.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_sr_RS.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_sv.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_th_TH.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_tr.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_uk.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_zh_CN.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel_zh_TW.qm"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-panel" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-panel")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-panel"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/panel/lxqt-panel")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-panel" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-panel")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-panel")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/lxqt" TYPE FILE FILES "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/panel/resources/panel.conf")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/lxqt" TYPE FILE FILES
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/panel/lxqtpanelglobals.h"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/panel/pluginsettings.h"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/panel/ilxqtpanelplugin.h"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/panel/ilxqtpanel.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/man1" TYPE FILE FILES "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/panel/man/lxqt-panel.1")
endif()

