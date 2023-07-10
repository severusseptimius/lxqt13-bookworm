# Install script for directory: /home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/lxqt-session

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
   "/usr/share/lxqt/translations/lxqt-session/lxqt-session_ar.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_arn.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_ast.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_bg.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_ca.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_cs.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_cy.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_da.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_de.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_el.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_eo.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_es.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_es_UY.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_es_VE.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_et.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_eu.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_fi.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_fr.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_gl.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_he.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_hr.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_hu.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_ia.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_id.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_it.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_ja.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_kk.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_ko.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_lt.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_nb_NO.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_nl.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_oc.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_or.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_pl.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_pt.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_pt_BR.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_ro_RO.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_ru.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_si.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_sk_SK.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_sl.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_sr@latin.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_sr_BA.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_sr_RS.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_th_TH.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_tr.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_uk.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_zh_CN.qm;/usr/share/lxqt/translations/lxqt-session/lxqt-session_zh_TW.qm")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/lxqt/translations/lxqt-session" TYPE FILE FILES
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_ar.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_arn.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_ast.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_bg.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_ca.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_cs.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_cy.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_da.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_de.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_el.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_eo.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_es.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_es_UY.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_es_VE.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_et.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_eu.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_fi.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_fr.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_gl.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_he.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_hr.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_hu.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_ia.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_id.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_it.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_ja.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_kk.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_ko.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_lt.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_nb_NO.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_nl.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_oc.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_or.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_pl.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_pt.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_pt_BR.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_ro_RO.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_ru.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_si.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_sk_SK.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_sl.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_sr@latin.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_sr_BA.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_sr_RS.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_th_TH.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_tr.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_uk.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_zh_CN.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session_zh_TW.qm"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-session" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-session")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-session"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-session/lxqt-session")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-session" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-session")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-session")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/man1" TYPE FILE FILES "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/lxqt-session/man/lxqt-session.1")
endif()

