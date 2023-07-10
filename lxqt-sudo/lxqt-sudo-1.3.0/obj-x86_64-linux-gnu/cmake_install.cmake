# Install script for directory: /home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0

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
   "/usr/share/lxqt/translations/lxqt-sudo/lxqt-sudo_ar.qm;/usr/share/lxqt/translations/lxqt-sudo/lxqt-sudo_arn.qm;/usr/share/lxqt/translations/lxqt-sudo/lxqt-sudo_ast.qm;/usr/share/lxqt/translations/lxqt-sudo/lxqt-sudo_bg.qm;/usr/share/lxqt/translations/lxqt-sudo/lxqt-sudo_ca.qm;/usr/share/lxqt/translations/lxqt-sudo/lxqt-sudo_cs.qm;/usr/share/lxqt/translations/lxqt-sudo/lxqt-sudo_cy.qm;/usr/share/lxqt/translations/lxqt-sudo/lxqt-sudo_da.qm;/usr/share/lxqt/translations/lxqt-sudo/lxqt-sudo_de.qm;/usr/share/lxqt/translations/lxqt-sudo/lxqt-sudo_el.qm;/usr/share/lxqt/translations/lxqt-sudo/lxqt-sudo_es.qm;/usr/share/lxqt/translations/lxqt-sudo/lxqt-sudo_et.qm;/usr/share/lxqt/translations/lxqt-sudo/lxqt-sudo_fi.qm;/usr/share/lxqt/translations/lxqt-sudo/lxqt-sudo_fr.qm;/usr/share/lxqt/translations/lxqt-sudo/lxqt-sudo_gl.qm;/usr/share/lxqt/translations/lxqt-sudo/lxqt-sudo_he.qm;/usr/share/lxqt/translations/lxqt-sudo/lxqt-sudo_hr.qm;/usr/share/lxqt/translations/lxqt-sudo/lxqt-sudo_hu.qm;/usr/share/lxqt/translations/lxqt-sudo/lxqt-sudo_id.qm;/usr/share/lxqt/translations/lxqt-sudo/lxqt-sudo_it.qm;/usr/share/lxqt/translations/lxqt-sudo/lxqt-sudo_ja.qm;/usr/share/lxqt/translations/lxqt-sudo/lxqt-sudo_ko.qm;/usr/share/lxqt/translations/lxqt-sudo/lxqt-sudo_lt.qm;/usr/share/lxqt/translations/lxqt-sudo/lxqt-sudo_nb_NO.qm;/usr/share/lxqt/translations/lxqt-sudo/lxqt-sudo_nl.qm;/usr/share/lxqt/translations/lxqt-sudo/lxqt-sudo_oc.qm;/usr/share/lxqt/translations/lxqt-sudo/lxqt-sudo_pl.qm;/usr/share/lxqt/translations/lxqt-sudo/lxqt-sudo_pt.qm;/usr/share/lxqt/translations/lxqt-sudo/lxqt-sudo_pt_BR.qm;/usr/share/lxqt/translations/lxqt-sudo/lxqt-sudo_ru.qm;/usr/share/lxqt/translations/lxqt-sudo/lxqt-sudo_si.qm;/usr/share/lxqt/translations/lxqt-sudo/lxqt-sudo_sk.qm;/usr/share/lxqt/translations/lxqt-sudo/lxqt-sudo_sl.qm;/usr/share/lxqt/translations/lxqt-sudo/lxqt-sudo_tr.qm;/usr/share/lxqt/translations/lxqt-sudo/lxqt-sudo_uk.qm;/usr/share/lxqt/translations/lxqt-sudo/lxqt-sudo_vi.qm;/usr/share/lxqt/translations/lxqt-sudo/lxqt-sudo_zh_CN.qm;/usr/share/lxqt/translations/lxqt-sudo/lxqt-sudo_zh_TW.qm")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/lxqt/translations/lxqt-sudo" TYPE FILE FILES
    "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxqt-sudo_ar.qm"
    "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxqt-sudo_arn.qm"
    "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxqt-sudo_ast.qm"
    "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxqt-sudo_bg.qm"
    "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxqt-sudo_ca.qm"
    "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxqt-sudo_cs.qm"
    "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxqt-sudo_cy.qm"
    "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxqt-sudo_da.qm"
    "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxqt-sudo_de.qm"
    "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxqt-sudo_el.qm"
    "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxqt-sudo_es.qm"
    "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxqt-sudo_et.qm"
    "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxqt-sudo_fi.qm"
    "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxqt-sudo_fr.qm"
    "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxqt-sudo_gl.qm"
    "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxqt-sudo_he.qm"
    "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxqt-sudo_hr.qm"
    "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxqt-sudo_hu.qm"
    "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxqt-sudo_id.qm"
    "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxqt-sudo_it.qm"
    "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxqt-sudo_ja.qm"
    "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxqt-sudo_ko.qm"
    "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxqt-sudo_lt.qm"
    "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxqt-sudo_nb_NO.qm"
    "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxqt-sudo_nl.qm"
    "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxqt-sudo_oc.qm"
    "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxqt-sudo_pl.qm"
    "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxqt-sudo_pt.qm"
    "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxqt-sudo_pt_BR.qm"
    "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxqt-sudo_ru.qm"
    "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxqt-sudo_si.qm"
    "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxqt-sudo_sk.qm"
    "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxqt-sudo_sl.qm"
    "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxqt-sudo_tr.qm"
    "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxqt-sudo_uk.qm"
    "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxqt-sudo_vi.qm"
    "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxqt-sudo_zh_CN.qm"
    "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxqt-sudo_zh_TW.qm"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE FILES "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxsu")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/man1" TYPE FILE FILES "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/man/lxsu.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE FILES "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxsudo")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/man1" TYPE FILE FILES "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/man/lxsudo.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE FILES "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxdoas")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/man1" TYPE FILE FILES "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/man/lxdoas.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-sudo" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-sudo")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-sudo"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/lxqt-sudo")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-sudo" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-sudo")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-sudo")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/man1" TYPE FILE FILES "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/man/lxqt-sudo.1")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/debian/Lxqt1.3/lxqt-sudo/lxqt-sudo-1.3.0/obj-x86_64-linux-gnu/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
