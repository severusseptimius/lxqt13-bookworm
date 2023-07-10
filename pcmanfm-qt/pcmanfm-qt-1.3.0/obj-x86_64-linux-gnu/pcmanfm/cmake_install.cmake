# Install script for directory: /home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/pcmanfm

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pcmanfm-qt/translations" TYPE FILE FILES
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_ar.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_arn.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_ast.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_bg.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_ca.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_cs.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_cy.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_da.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_de.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_el.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_en_GB.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_es.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_et.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_fil.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_fr.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_ga.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_gl.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_he.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_hi.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_hr.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_hu.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_id.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_it.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_ja.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_kk.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_ko.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_lt.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_lv.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_nb_NO.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_nl.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_oc.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_pl.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_pt.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_pt_BR.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_ro.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_ru.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_si.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_sk_SK.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_sl.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_sv.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_tr.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_uk.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_vi.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_zh_CN.qm"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt_zh_TW.qm"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pcmanfm-qt" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pcmanfm-qt")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pcmanfm-qt"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pcmanfm-qt" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pcmanfm-qt")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pcmanfm-qt")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/applications" TYPE FILE FILES
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt.desktop"
    "/home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/obj-x86_64-linux-gnu/pcmanfm/pcmanfm-qt-desktop-pref.desktop"
    )
endif()

