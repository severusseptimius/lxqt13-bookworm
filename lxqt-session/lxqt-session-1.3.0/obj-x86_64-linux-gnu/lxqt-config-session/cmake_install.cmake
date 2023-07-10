# Install script for directory: /home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/lxqt-config-session

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
   "/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_ar.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_arn.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_ast.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_bg.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_ca.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_cs.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_cy.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_da.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_de.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_el.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_eo.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_es.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_es_UY.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_es_VE.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_et.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_eu.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_fi.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_fr.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_gl.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_he.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_hr.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_hu.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_ia.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_id.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_it.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_ja.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_ko.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_lt.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_nb_NO.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_nl.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_oc.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_pl.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_pt.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_pt_BR.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_ro_RO.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_ru.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_si.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_sk_SK.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_sl.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_sr@latin.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_sr_RS.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_th_TH.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_tr.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_uk.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_zh_CN.qm;/usr/share/lxqt/translations/lxqt-config-session/lxqt-config-session_zh_TW.qm")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/lxqt/translations/lxqt-config-session" TYPE FILE FILES
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_ar.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_arn.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_ast.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_bg.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_ca.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_cs.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_cy.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_da.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_de.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_el.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_eo.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_es.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_es_UY.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_es_VE.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_et.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_eu.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_fi.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_fr.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_gl.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_he.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_hr.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_hu.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_ia.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_id.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_it.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_ja.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_ko.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_lt.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_nb_NO.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_nl.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_oc.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_pl.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_pt.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_pt_BR.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_ro_RO.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_ru.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_si.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_sk_SK.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_sl.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_sr@latin.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_sr_RS.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_th_TH.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_tr.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_uk.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_zh_CN.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session_zh_TW.qm"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-config-session" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-config-session")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-config-session"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-config-session" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-config-session")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-config-session")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/applications" TYPE FILE FILES "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-config-session/lxqt-config-session.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/man1" TYPE FILE FILES "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/lxqt-config-session/man/lxqt-config-session.1")
endif()

