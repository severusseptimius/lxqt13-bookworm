# Install script for directory: /home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/src

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
   "/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_ar.qm;/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_arn.qm;/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_ast.qm;/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_bg.qm;/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_ca.qm;/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_cs.qm;/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_cy.qm;/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_da.qm;/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_de.qm;/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_el.qm;/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_en_GB.qm;/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_es.qm;/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_et.qm;/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_fr.qm;/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_gl.qm;/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_he.qm;/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_hr.qm;/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_hu.qm;/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_id.qm;/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_it.qm;/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_ja.qm;/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_kk.qm;/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_ko.qm;/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_lt.qm;/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_lv.qm;/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_nb_NO.qm;/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_nl.qm;/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_oc.qm;/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_pl.qm;/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_pt.qm;/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_pt_BR.qm;/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_ru.qm;/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_si.qm;/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_sk_SK.qm;/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_sv.qm;/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_tr.qm;/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_uk.qm;/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_vi.qm;/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_zh_CN.qm;/usr/share/lxqt/translations/lxqt-notificationd/lxqt-notificationd_zh_TW.qm")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/lxqt/translations/lxqt-notificationd" TYPE FILE FILES
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_ar.qm"
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_arn.qm"
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_ast.qm"
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_bg.qm"
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_ca.qm"
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_cs.qm"
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_cy.qm"
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_da.qm"
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_de.qm"
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_el.qm"
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_en_GB.qm"
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_es.qm"
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_et.qm"
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_fr.qm"
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_gl.qm"
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_he.qm"
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_hr.qm"
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_hu.qm"
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_id.qm"
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_it.qm"
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_ja.qm"
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_kk.qm"
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_ko.qm"
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_lt.qm"
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_lv.qm"
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_nb_NO.qm"
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_nl.qm"
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_oc.qm"
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_pl.qm"
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_pt.qm"
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_pt_BR.qm"
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_ru.qm"
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_si.qm"
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_sk_SK.qm"
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_sv.qm"
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_tr.qm"
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_uk.qm"
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_vi.qm"
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_zh_CN.qm"
    "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd_zh_TW.qm"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-notificationd" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-notificationd")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-notificationd"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/debian/Lxqt1.3/lxqt-notificationd/lxqt-notificationd-1.3.0/obj-x86_64-linux-gnu/src/lxqt-notificationd")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-notificationd" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-notificationd")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-notificationd")
    endif()
  endif()
endif()

