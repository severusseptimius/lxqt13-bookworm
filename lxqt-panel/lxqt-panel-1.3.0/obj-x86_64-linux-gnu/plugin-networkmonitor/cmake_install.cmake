# Install script for directory: /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/plugin-networkmonitor

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
   "/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_ar.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_arn.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_ast.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_bg.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_ca.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_cs.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_cy.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_da.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_de.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_el.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_eo.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_es.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_et.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_eu.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_fi.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_fr.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_gl.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_he.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_hi.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_hr.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_hu.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_id.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_it.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_ja.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_ko.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_lt.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_lv.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_nb_NO.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_nl.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_oc.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_pl.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_pt.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_pt_BR.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_ro_RO.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_ru.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_si.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_sk_SK.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_sr.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_sr@ijekavian.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_th_TH.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_tr.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_uk.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_zh_CN.qm;/usr/share/lxqt/translations/lxqt-panel/networkmonitor/networkmonitor_zh_TW.qm")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/lxqt/translations/lxqt-panel/networkmonitor" TYPE FILE FILES
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_ar.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_arn.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_ast.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_bg.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_ca.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_cs.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_cy.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_da.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_de.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_el.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_eo.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_es.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_et.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_eu.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_fi.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_fr.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_gl.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_he.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_hi.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_hr.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_hu.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_id.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_it.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_ja.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_ko.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_lt.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_lv.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_nb_NO.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_nl.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_oc.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_pl.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_pt.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_pt_BR.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_ro_RO.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_ru.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_si.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_sk_SK.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_sr.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_sr@ijekavian.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_th_TH.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_tr.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_uk.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_zh_CN.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor_zh_TW.qm"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/lxqt-panel/libnetworkmonitor.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/lxqt-panel/libnetworkmonitor.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/lxqt-panel/libnetworkmonitor.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/x86_64-linux-gnu/lxqt-panel/libnetworkmonitor.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/lib/x86_64-linux-gnu/lxqt-panel" TYPE MODULE FILES "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/libnetworkmonitor.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/lxqt-panel/libnetworkmonitor.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/lxqt-panel/libnetworkmonitor.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/lxqt-panel/libnetworkmonitor.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/lxqt/lxqt-panel/networkmonitor.desktop")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/lxqt/lxqt-panel" TYPE FILE FILES "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-networkmonitor/networkmonitor.desktop")
endif()

