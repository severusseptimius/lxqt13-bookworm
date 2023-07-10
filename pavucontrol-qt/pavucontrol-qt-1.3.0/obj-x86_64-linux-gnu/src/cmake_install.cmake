# Install script for directory: /home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/src

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pavucontrol-qt/translations" TYPE FILE FILES
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_ar.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_arn.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_as.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_ast.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_bg.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_bn_IN.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_ca.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_cs.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_cy.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_da.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_de.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_el.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_es.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_et.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_fi.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_fr.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_gl.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_gu.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_he.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_hi.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_hr.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_hu.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_id.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_it.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_ja.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_kn.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_ko.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_lt.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_ml.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_mr.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_nb_NO.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_nl.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_oc.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_or.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_pa.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_pl.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_pt.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_pt_BR.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_ro.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_ru.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_si.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_sk.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_sr.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_sr@latin.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_sv.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_ta.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_te.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_th.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_tr.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_uk.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_zh_CN.qm"
    "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt_zh_TW.qm"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pavucontrol-qt" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pavucontrol-qt")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pavucontrol-qt"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pavucontrol-qt" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pavucontrol-qt")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pavucontrol-qt")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/applications" TYPE FILE FILES "/home/debian/Lxqt1.3/pavucontrol-qt/pavucontrol-qt-1.3.0/obj-x86_64-linux-gnu/src/pavucontrol-qt.desktop")
endif()

