# Install script for directory: /home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/lxqt-leave

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
   "/usr/share/lxqt/translations/lxqt-leave/lxqt-leave_ar.qm;/usr/share/lxqt/translations/lxqt-leave/lxqt-leave_arn.qm;/usr/share/lxqt/translations/lxqt-leave/lxqt-leave_ast.qm;/usr/share/lxqt/translations/lxqt-leave/lxqt-leave_bg.qm;/usr/share/lxqt/translations/lxqt-leave/lxqt-leave_ca.qm;/usr/share/lxqt/translations/lxqt-leave/lxqt-leave_cs.qm;/usr/share/lxqt/translations/lxqt-leave/lxqt-leave_cy.qm;/usr/share/lxqt/translations/lxqt-leave/lxqt-leave_da.qm;/usr/share/lxqt/translations/lxqt-leave/lxqt-leave_de.qm;/usr/share/lxqt/translations/lxqt-leave/lxqt-leave_el.qm;/usr/share/lxqt/translations/lxqt-leave/lxqt-leave_es.qm;/usr/share/lxqt/translations/lxqt-leave/lxqt-leave_et.qm;/usr/share/lxqt/translations/lxqt-leave/lxqt-leave_fi.qm;/usr/share/lxqt/translations/lxqt-leave/lxqt-leave_fr.qm;/usr/share/lxqt/translations/lxqt-leave/lxqt-leave_gl.qm;/usr/share/lxqt/translations/lxqt-leave/lxqt-leave_he.qm;/usr/share/lxqt/translations/lxqt-leave/lxqt-leave_hr.qm;/usr/share/lxqt/translations/lxqt-leave/lxqt-leave_hu.qm;/usr/share/lxqt/translations/lxqt-leave/lxqt-leave_id.qm;/usr/share/lxqt/translations/lxqt-leave/lxqt-leave_it.qm;/usr/share/lxqt/translations/lxqt-leave/lxqt-leave_ja.qm;/usr/share/lxqt/translations/lxqt-leave/lxqt-leave_kk.qm;/usr/share/lxqt/translations/lxqt-leave/lxqt-leave_ko.qm;/usr/share/lxqt/translations/lxqt-leave/lxqt-leave_lt.qm;/usr/share/lxqt/translations/lxqt-leave/lxqt-leave_nb_NO.qm;/usr/share/lxqt/translations/lxqt-leave/lxqt-leave_nl.qm;/usr/share/lxqt/translations/lxqt-leave/lxqt-leave_oc.qm;/usr/share/lxqt/translations/lxqt-leave/lxqt-leave_pl.qm;/usr/share/lxqt/translations/lxqt-leave/lxqt-leave_pt.qm;/usr/share/lxqt/translations/lxqt-leave/lxqt-leave_pt_BR.qm;/usr/share/lxqt/translations/lxqt-leave/lxqt-leave_ru.qm;/usr/share/lxqt/translations/lxqt-leave/lxqt-leave_si.qm;/usr/share/lxqt/translations/lxqt-leave/lxqt-leave_sk.qm;/usr/share/lxqt/translations/lxqt-leave/lxqt-leave_sl.qm;/usr/share/lxqt/translations/lxqt-leave/lxqt-leave_tr.qm;/usr/share/lxqt/translations/lxqt-leave/lxqt-leave_uk.qm;/usr/share/lxqt/translations/lxqt-leave/lxqt-leave_vi.qm;/usr/share/lxqt/translations/lxqt-leave/lxqt-leave_zh_CN.qm;/usr/share/lxqt/translations/lxqt-leave/lxqt-leave_zh_TW.qm")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/lxqt/translations/lxqt-leave" TYPE FILE FILES
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave_ar.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave_arn.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave_ast.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave_bg.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave_ca.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave_cs.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave_cy.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave_da.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave_de.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave_el.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave_es.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave_et.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave_fi.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave_fr.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave_gl.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave_he.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave_hr.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave_hu.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave_id.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave_it.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave_ja.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave_kk.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave_ko.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave_lt.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave_nb_NO.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave_nl.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave_oc.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave_pl.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave_pt.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave_pt_BR.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave_ru.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave_si.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave_sk.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave_sl.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave_tr.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave_uk.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave_vi.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave_zh_CN.qm"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave_zh_TW.qm"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-leave" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-leave")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-leave"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-leave" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-leave")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-leave")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/applications" TYPE FILE FILES
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-leave.desktop"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-hibernate.desktop"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-lockscreen.desktop"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-logout.desktop"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-reboot.desktop"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-shutdown.desktop"
    "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/obj-x86_64-linux-gnu/lxqt-leave/lxqt-suspend.desktop"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/man1" TYPE FILE FILES "/home/debian/Lxqt1.3/lxqt-session/lxqt-session-1.3.0/lxqt-leave/resources/lxqt-leave.1")
endif()

