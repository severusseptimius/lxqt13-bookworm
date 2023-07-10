# Install script for directory: /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/plugin-cpuload

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
   "/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_ar.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_arn.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_ast.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_bg.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_ca.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_cs.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_cy.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_da.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_de.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_el.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_eo.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_es.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_es_VE.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_et.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_eu.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_fi.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_fr.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_gl.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_he.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_hr.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_hu.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_id.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_it.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_ja.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_ko.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_lt.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_lv.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_nb_NO.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_nl.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_oc.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_pl.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_pt.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_pt_BR.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_ro_RO.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_ru.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_si.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_sk_SK.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_sl.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_sr.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_sv.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_th_TH.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_tr.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_uk.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_zh_CN.qm;/usr/share/lxqt/translations/lxqt-panel/cpuload/cpuload_zh_TW.qm")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/lxqt/translations/lxqt-panel/cpuload" TYPE FILE FILES
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_ar.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_arn.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_ast.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_bg.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_ca.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_cs.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_cy.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_da.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_de.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_el.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_eo.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_es.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_es_VE.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_et.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_eu.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_fi.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_fr.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_gl.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_he.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_hr.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_hu.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_id.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_it.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_ja.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_ko.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_lt.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_lv.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_nb_NO.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_nl.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_oc.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_pl.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_pt.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_pt_BR.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_ro_RO.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_ru.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_si.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_sk_SK.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_sl.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_sr.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_sv.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_th_TH.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_tr.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_uk.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_zh_CN.qm"
    "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload_zh_TW.qm"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/lxqt-panel/libcpuload.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/lxqt-panel/libcpuload.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/lxqt-panel/libcpuload.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/x86_64-linux-gnu/lxqt-panel/libcpuload.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/lib/x86_64-linux-gnu/lxqt-panel" TYPE MODULE FILES "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/libcpuload.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/lxqt-panel/libcpuload.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/lxqt-panel/libcpuload.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/lxqt-panel/libcpuload.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/lxqt/lxqt-panel/cpuload.desktop")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/lxqt/lxqt-panel" TYPE FILE FILES "/home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/obj-x86_64-linux-gnu/plugin-cpuload/cpuload.desktop")
endif()

