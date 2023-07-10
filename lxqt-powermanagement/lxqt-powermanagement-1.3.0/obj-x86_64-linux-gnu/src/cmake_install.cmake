# Install script for directory: /home/debian/Lxqt1.3/lxqt-powermanagement/lxqt-powermanagement-1.3.0/src

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
   "/usr/share/lxqt/translations/lxqt-powermanagement/lxqt-powermanagement_ar.qm;/usr/share/lxqt/translations/lxqt-powermanagement/lxqt-powermanagement_arn.qm;/usr/share/lxqt/translations/lxqt-powermanagement/lxqt-powermanagement_ast.qm;/usr/share/lxqt/translations/lxqt-powermanagement/lxqt-powermanagement_bg.qm;/usr/share/lxqt/translations/lxqt-powermanagement/lxqt-powermanagement_ca.qm;/usr/share/lxqt/translations/lxqt-powermanagement/lxqt-powermanagement_cs.qm;/usr/share/lxqt/translations/lxqt-powermanagement/lxqt-powermanagement_cy.qm;/usr/share/lxqt/translations/lxqt-powermanagement/lxqt-powermanagement_da.qm;/usr/share/lxqt/translations/lxqt-powermanagement/lxqt-powermanagement_de.qm;/usr/share/lxqt/translations/lxqt-powermanagement/lxqt-powermanagement_el.qm;/usr/share/lxqt/translations/lxqt-powermanagement/lxqt-powermanagement_es.qm;/usr/share/lxqt/translations/lxqt-powermanagement/lxqt-powermanagement_et.qm;/usr/share/lxqt/translations/lxqt-powermanagement/lxqt-powermanagement_fi.qm;/usr/share/lxqt/translations/lxqt-powermanagement/lxqt-powermanagement_fr.qm;/usr/share/lxqt/translations/lxqt-powermanagement/lxqt-powermanagement_gl.qm;/usr/share/lxqt/translations/lxqt-powermanagement/lxqt-powermanagement_he.qm;/usr/share/lxqt/translations/lxqt-powermanagement/lxqt-powermanagement_hr.qm;/usr/share/lxqt/translations/lxqt-powermanagement/lxqt-powermanagement_hu.qm;/usr/share/lxqt/translations/lxqt-powermanagement/lxqt-powermanagement_id.qm;/usr/share/lxqt/translations/lxqt-powermanagement/lxqt-powermanagement_it.qm;/usr/share/lxqt/translations/lxqt-powermanagement/lxqt-powermanagement_ja.qm;/usr/share/lxqt/translations/lxqt-powermanagement/lxqt-powermanagement_ko.qm;/usr/share/lxqt/translations/lxqt-powermanagement/lxqt-powermanagement_lt.qm;/usr/share/lxqt/translations/lxqt-powermanagement/lxqt-powermanagement_nb_NO.qm;/usr/share/lxqt/translations/lxqt-powermanagement/lxqt-powermanagement_nl.qm;/usr/share/lxqt/translations/lxqt-powermanagement/lxqt-powermanagement_oc.qm;/usr/share/lxqt/translations/lxqt-powermanagement/lxqt-powermanagement_pl.qm;/usr/share/lxqt/translations/lxqt-powermanagement/lxqt-powermanagement_pt.qm;/usr/share/lxqt/translations/lxqt-powermanagement/lxqt-powermanagement_pt_BR.qm;/usr/share/lxqt/translations/lxqt-powermanagement/lxqt-powermanagement_ru.qm;/usr/share/lxqt/translations/lxqt-powermanagement/lxqt-powermanagement_si.qm;/usr/share/lxqt/translations/lxqt-powermanagement/lxqt-powermanagement_sk_SK.qm;/usr/share/lxqt/translations/lxqt-powermanagement/lxqt-powermanagement_tr.qm;/usr/share/lxqt/translations/lxqt-powermanagement/lxqt-powermanagement_uk.qm;/usr/share/lxqt/translations/lxqt-powermanagement/lxqt-powermanagement_vi.qm;/usr/share/lxqt/translations/lxqt-powermanagement/lxqt-powermanagement_zh_CN.qm")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/lxqt/translations/lxqt-powermanagement" TYPE FILE FILES
    "/home/debian/Lxqt1.3/lxqt-powermanagement/lxqt-powermanagement-1.3.0/obj-x86_64-linux-gnu/src/lxqt-powermanagement_ar.qm"
    "/home/debian/Lxqt1.3/lxqt-powermanagement/lxqt-powermanagement-1.3.0/obj-x86_64-linux-gnu/src/lxqt-powermanagement_arn.qm"
    "/home/debian/Lxqt1.3/lxqt-powermanagement/lxqt-powermanagement-1.3.0/obj-x86_64-linux-gnu/src/lxqt-powermanagement_ast.qm"
    "/home/debian/Lxqt1.3/lxqt-powermanagement/lxqt-powermanagement-1.3.0/obj-x86_64-linux-gnu/src/lxqt-powermanagement_bg.qm"
    "/home/debian/Lxqt1.3/lxqt-powermanagement/lxqt-powermanagement-1.3.0/obj-x86_64-linux-gnu/src/lxqt-powermanagement_ca.qm"
    "/home/debian/Lxqt1.3/lxqt-powermanagement/lxqt-powermanagement-1.3.0/obj-x86_64-linux-gnu/src/lxqt-powermanagement_cs.qm"
    "/home/debian/Lxqt1.3/lxqt-powermanagement/lxqt-powermanagement-1.3.0/obj-x86_64-linux-gnu/src/lxqt-powermanagement_cy.qm"
    "/home/debian/Lxqt1.3/lxqt-powermanagement/lxqt-powermanagement-1.3.0/obj-x86_64-linux-gnu/src/lxqt-powermanagement_da.qm"
    "/home/debian/Lxqt1.3/lxqt-powermanagement/lxqt-powermanagement-1.3.0/obj-x86_64-linux-gnu/src/lxqt-powermanagement_de.qm"
    "/home/debian/Lxqt1.3/lxqt-powermanagement/lxqt-powermanagement-1.3.0/obj-x86_64-linux-gnu/src/lxqt-powermanagement_el.qm"
    "/home/debian/Lxqt1.3/lxqt-powermanagement/lxqt-powermanagement-1.3.0/obj-x86_64-linux-gnu/src/lxqt-powermanagement_es.qm"
    "/home/debian/Lxqt1.3/lxqt-powermanagement/lxqt-powermanagement-1.3.0/obj-x86_64-linux-gnu/src/lxqt-powermanagement_et.qm"
    "/home/debian/Lxqt1.3/lxqt-powermanagement/lxqt-powermanagement-1.3.0/obj-x86_64-linux-gnu/src/lxqt-powermanagement_fi.qm"
    "/home/debian/Lxqt1.3/lxqt-powermanagement/lxqt-powermanagement-1.3.0/obj-x86_64-linux-gnu/src/lxqt-powermanagement_fr.qm"
    "/home/debian/Lxqt1.3/lxqt-powermanagement/lxqt-powermanagement-1.3.0/obj-x86_64-linux-gnu/src/lxqt-powermanagement_gl.qm"
    "/home/debian/Lxqt1.3/lxqt-powermanagement/lxqt-powermanagement-1.3.0/obj-x86_64-linux-gnu/src/lxqt-powermanagement_he.qm"
    "/home/debian/Lxqt1.3/lxqt-powermanagement/lxqt-powermanagement-1.3.0/obj-x86_64-linux-gnu/src/lxqt-powermanagement_hr.qm"
    "/home/debian/Lxqt1.3/lxqt-powermanagement/lxqt-powermanagement-1.3.0/obj-x86_64-linux-gnu/src/lxqt-powermanagement_hu.qm"
    "/home/debian/Lxqt1.3/lxqt-powermanagement/lxqt-powermanagement-1.3.0/obj-x86_64-linux-gnu/src/lxqt-powermanagement_id.qm"
    "/home/debian/Lxqt1.3/lxqt-powermanagement/lxqt-powermanagement-1.3.0/obj-x86_64-linux-gnu/src/lxqt-powermanagement_it.qm"
    "/home/debian/Lxqt1.3/lxqt-powermanagement/lxqt-powermanagement-1.3.0/obj-x86_64-linux-gnu/src/lxqt-powermanagement_ja.qm"
    "/home/debian/Lxqt1.3/lxqt-powermanagement/lxqt-powermanagement-1.3.0/obj-x86_64-linux-gnu/src/lxqt-powermanagement_ko.qm"
    "/home/debian/Lxqt1.3/lxqt-powermanagement/lxqt-powermanagement-1.3.0/obj-x86_64-linux-gnu/src/lxqt-powermanagement_lt.qm"
    "/home/debian/Lxqt1.3/lxqt-powermanagement/lxqt-powermanagement-1.3.0/obj-x86_64-linux-gnu/src/lxqt-powermanagement_nb_NO.qm"
    "/home/debian/Lxqt1.3/lxqt-powermanagement/lxqt-powermanagement-1.3.0/obj-x86_64-linux-gnu/src/lxqt-powermanagement_nl.qm"
    "/home/debian/Lxqt1.3/lxqt-powermanagement/lxqt-powermanagement-1.3.0/obj-x86_64-linux-gnu/src/lxqt-powermanagement_oc.qm"
    "/home/debian/Lxqt1.3/lxqt-powermanagement/lxqt-powermanagement-1.3.0/obj-x86_64-linux-gnu/src/lxqt-powermanagement_pl.qm"
    "/home/debian/Lxqt1.3/lxqt-powermanagement/lxqt-powermanagement-1.3.0/obj-x86_64-linux-gnu/src/lxqt-powermanagement_pt.qm"
    "/home/debian/Lxqt1.3/lxqt-powermanagement/lxqt-powermanagement-1.3.0/obj-x86_64-linux-gnu/src/lxqt-powermanagement_pt_BR.qm"
    "/home/debian/Lxqt1.3/lxqt-powermanagement/lxqt-powermanagement-1.3.0/obj-x86_64-linux-gnu/src/lxqt-powermanagement_ru.qm"
    "/home/debian/Lxqt1.3/lxqt-powermanagement/lxqt-powermanagement-1.3.0/obj-x86_64-linux-gnu/src/lxqt-powermanagement_si.qm"
    "/home/debian/Lxqt1.3/lxqt-powermanagement/lxqt-powermanagement-1.3.0/obj-x86_64-linux-gnu/src/lxqt-powermanagement_sk_SK.qm"
    "/home/debian/Lxqt1.3/lxqt-powermanagement/lxqt-powermanagement-1.3.0/obj-x86_64-linux-gnu/src/lxqt-powermanagement_tr.qm"
    "/home/debian/Lxqt1.3/lxqt-powermanagement/lxqt-powermanagement-1.3.0/obj-x86_64-linux-gnu/src/lxqt-powermanagement_uk.qm"
    "/home/debian/Lxqt1.3/lxqt-powermanagement/lxqt-powermanagement-1.3.0/obj-x86_64-linux-gnu/src/lxqt-powermanagement_vi.qm"
    "/home/debian/Lxqt1.3/lxqt-powermanagement/lxqt-powermanagement-1.3.0/obj-x86_64-linux-gnu/src/lxqt-powermanagement_zh_CN.qm"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-powermanagement" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-powermanagement")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-powermanagement"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/debian/Lxqt1.3/lxqt-powermanagement/lxqt-powermanagement-1.3.0/obj-x86_64-linux-gnu/src/lxqt-powermanagement")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-powermanagement" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-powermanagement")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-powermanagement")
    endif()
  endif()
endif()

