# Install script for directory: /home/debian/Lxqt1.3/qps/qps-2.7.0/src

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
   "/usr/share/qps/translations/qps_ar.qm;/usr/share/qps/translations/qps_arn.qm;/usr/share/qps/translations/qps_ast.qm;/usr/share/qps/translations/qps_bg.qm;/usr/share/qps/translations/qps_ca.qm;/usr/share/qps/translations/qps_cs.qm;/usr/share/qps/translations/qps_cy.qm;/usr/share/qps/translations/qps_da.qm;/usr/share/qps/translations/qps_de.qm;/usr/share/qps/translations/qps_el.qm;/usr/share/qps/translations/qps_es.qm;/usr/share/qps/translations/qps_et.qm;/usr/share/qps/translations/qps_fr.qm;/usr/share/qps/translations/qps_gl.qm;/usr/share/qps/translations/qps_he.qm;/usr/share/qps/translations/qps_hi.qm;/usr/share/qps/translations/qps_hr.qm;/usr/share/qps/translations/qps_hu.qm;/usr/share/qps/translations/qps_id.qm;/usr/share/qps/translations/qps_it.qm;/usr/share/qps/translations/qps_ja.qm;/usr/share/qps/translations/qps_ko.qm;/usr/share/qps/translations/qps_lt.qm;/usr/share/qps/translations/qps_nb_NO.qm;/usr/share/qps/translations/qps_nl.qm;/usr/share/qps/translations/qps_oc.qm;/usr/share/qps/translations/qps_pl.qm;/usr/share/qps/translations/qps_pt.qm;/usr/share/qps/translations/qps_pt_BR.qm;/usr/share/qps/translations/qps_ru.qm;/usr/share/qps/translations/qps_si.qm;/usr/share/qps/translations/qps_sk_SK.qm;/usr/share/qps/translations/qps_tr.qm;/usr/share/qps/translations/qps_uk.qm")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/qps/translations" TYPE FILE FILES
    "/home/debian/Lxqt1.3/qps/qps-2.7.0/obj-x86_64-linux-gnu/src/qps_ar.qm"
    "/home/debian/Lxqt1.3/qps/qps-2.7.0/obj-x86_64-linux-gnu/src/qps_arn.qm"
    "/home/debian/Lxqt1.3/qps/qps-2.7.0/obj-x86_64-linux-gnu/src/qps_ast.qm"
    "/home/debian/Lxqt1.3/qps/qps-2.7.0/obj-x86_64-linux-gnu/src/qps_bg.qm"
    "/home/debian/Lxqt1.3/qps/qps-2.7.0/obj-x86_64-linux-gnu/src/qps_ca.qm"
    "/home/debian/Lxqt1.3/qps/qps-2.7.0/obj-x86_64-linux-gnu/src/qps_cs.qm"
    "/home/debian/Lxqt1.3/qps/qps-2.7.0/obj-x86_64-linux-gnu/src/qps_cy.qm"
    "/home/debian/Lxqt1.3/qps/qps-2.7.0/obj-x86_64-linux-gnu/src/qps_da.qm"
    "/home/debian/Lxqt1.3/qps/qps-2.7.0/obj-x86_64-linux-gnu/src/qps_de.qm"
    "/home/debian/Lxqt1.3/qps/qps-2.7.0/obj-x86_64-linux-gnu/src/qps_el.qm"
    "/home/debian/Lxqt1.3/qps/qps-2.7.0/obj-x86_64-linux-gnu/src/qps_es.qm"
    "/home/debian/Lxqt1.3/qps/qps-2.7.0/obj-x86_64-linux-gnu/src/qps_et.qm"
    "/home/debian/Lxqt1.3/qps/qps-2.7.0/obj-x86_64-linux-gnu/src/qps_fr.qm"
    "/home/debian/Lxqt1.3/qps/qps-2.7.0/obj-x86_64-linux-gnu/src/qps_gl.qm"
    "/home/debian/Lxqt1.3/qps/qps-2.7.0/obj-x86_64-linux-gnu/src/qps_he.qm"
    "/home/debian/Lxqt1.3/qps/qps-2.7.0/obj-x86_64-linux-gnu/src/qps_hi.qm"
    "/home/debian/Lxqt1.3/qps/qps-2.7.0/obj-x86_64-linux-gnu/src/qps_hr.qm"
    "/home/debian/Lxqt1.3/qps/qps-2.7.0/obj-x86_64-linux-gnu/src/qps_hu.qm"
    "/home/debian/Lxqt1.3/qps/qps-2.7.0/obj-x86_64-linux-gnu/src/qps_id.qm"
    "/home/debian/Lxqt1.3/qps/qps-2.7.0/obj-x86_64-linux-gnu/src/qps_it.qm"
    "/home/debian/Lxqt1.3/qps/qps-2.7.0/obj-x86_64-linux-gnu/src/qps_ja.qm"
    "/home/debian/Lxqt1.3/qps/qps-2.7.0/obj-x86_64-linux-gnu/src/qps_ko.qm"
    "/home/debian/Lxqt1.3/qps/qps-2.7.0/obj-x86_64-linux-gnu/src/qps_lt.qm"
    "/home/debian/Lxqt1.3/qps/qps-2.7.0/obj-x86_64-linux-gnu/src/qps_nb_NO.qm"
    "/home/debian/Lxqt1.3/qps/qps-2.7.0/obj-x86_64-linux-gnu/src/qps_nl.qm"
    "/home/debian/Lxqt1.3/qps/qps-2.7.0/obj-x86_64-linux-gnu/src/qps_oc.qm"
    "/home/debian/Lxqt1.3/qps/qps-2.7.0/obj-x86_64-linux-gnu/src/qps_pl.qm"
    "/home/debian/Lxqt1.3/qps/qps-2.7.0/obj-x86_64-linux-gnu/src/qps_pt.qm"
    "/home/debian/Lxqt1.3/qps/qps-2.7.0/obj-x86_64-linux-gnu/src/qps_pt_BR.qm"
    "/home/debian/Lxqt1.3/qps/qps-2.7.0/obj-x86_64-linux-gnu/src/qps_ru.qm"
    "/home/debian/Lxqt1.3/qps/qps-2.7.0/obj-x86_64-linux-gnu/src/qps_si.qm"
    "/home/debian/Lxqt1.3/qps/qps-2.7.0/obj-x86_64-linux-gnu/src/qps_sk_SK.qm"
    "/home/debian/Lxqt1.3/qps/qps-2.7.0/obj-x86_64-linux-gnu/src/qps_tr.qm"
    "/home/debian/Lxqt1.3/qps/qps-2.7.0/obj-x86_64-linux-gnu/src/qps_uk.qm"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/bin/qps" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/bin/qps")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/bin/qps"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/bin/qps")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/bin" TYPE EXECUTABLE FILES "/home/debian/Lxqt1.3/qps/qps-2.7.0/obj-x86_64-linux-gnu/src/qps")
  if(EXISTS "$ENV{DESTDIR}/usr/bin/qps" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/bin/qps")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/bin/qps")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/applications" TYPE FILE FILES "/home/debian/Lxqt1.3/qps/qps-2.7.0/obj-x86_64-linux-gnu/src/qps.desktop")
endif()

