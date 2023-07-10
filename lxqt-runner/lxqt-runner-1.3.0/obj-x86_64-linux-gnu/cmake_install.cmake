# Install script for directory: /home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0

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
   "/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_ar.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_arn.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_ast.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_bg.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_ca.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_cs.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_cy.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_da.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_de.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_el.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_eo.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_es.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_es_VE.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_et.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_eu.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_fi.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_fr.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_gl.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_he.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_hi.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_hr.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_hu.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_ia.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_id.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_it.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_ja.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_ko.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_lt.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_nb_NO.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_nl.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_oc.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_pl.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_pt.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_pt_BR.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_ro_RO.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_ru.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_si.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_sk.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_sl.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_sr@latin.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_sr_BA.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_sr_RS.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_th_TH.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_tr.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_uk.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_vi.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_zh_CN.qm;/usr/share/lxqt/translations/lxqt-runner/lxqt-runner_zh_TW.qm")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/lxqt/translations/lxqt-runner" TYPE FILE FILES
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_ar.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_arn.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_ast.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_bg.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_ca.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_cs.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_cy.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_da.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_de.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_el.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_eo.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_es.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_es_VE.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_et.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_eu.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_fi.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_fr.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_gl.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_he.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_hi.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_hr.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_hu.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_ia.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_id.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_it.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_ja.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_ko.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_lt.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_nb_NO.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_nl.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_oc.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_pl.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_pt.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_pt_BR.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_ro_RO.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_ru.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_si.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_sk.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_sl.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_sr@latin.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_sr_BA.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_sr_RS.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_th_TH.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_tr.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_uk.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_vi.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_zh_CN.qm"
    "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner_zh_TW.qm"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-runner" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-runner")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-runner"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/lxqt-runner")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-runner" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-runner")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-runner")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/man1" TYPE FILE FILES "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/man/lxqt-runner.1")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/autostart/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/debian/Lxqt1.3/lxqt-runner/lxqt-runner-1.3.0/obj-x86_64-linux-gnu/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
