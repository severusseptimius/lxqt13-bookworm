# Install script for directory: /home/debian/Lxqt1.3/lxqt-policykit/lxqt-policykit-1.3.0

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
   "/usr/share/lxqt/translations/lxqt-policykit-agent/lxqt-policykit-agent_ar.qm;/usr/share/lxqt/translations/lxqt-policykit-agent/lxqt-policykit-agent_arn.qm;/usr/share/lxqt/translations/lxqt-policykit-agent/lxqt-policykit-agent_ast.qm;/usr/share/lxqt/translations/lxqt-policykit-agent/lxqt-policykit-agent_bg.qm;/usr/share/lxqt/translations/lxqt-policykit-agent/lxqt-policykit-agent_ca.qm;/usr/share/lxqt/translations/lxqt-policykit-agent/lxqt-policykit-agent_cs.qm;/usr/share/lxqt/translations/lxqt-policykit-agent/lxqt-policykit-agent_cy.qm;/usr/share/lxqt/translations/lxqt-policykit-agent/lxqt-policykit-agent_da.qm;/usr/share/lxqt/translations/lxqt-policykit-agent/lxqt-policykit-agent_de.qm;/usr/share/lxqt/translations/lxqt-policykit-agent/lxqt-policykit-agent_el.qm;/usr/share/lxqt/translations/lxqt-policykit-agent/lxqt-policykit-agent_es.qm;/usr/share/lxqt/translations/lxqt-policykit-agent/lxqt-policykit-agent_et.qm;/usr/share/lxqt/translations/lxqt-policykit-agent/lxqt-policykit-agent_fr.qm;/usr/share/lxqt/translations/lxqt-policykit-agent/lxqt-policykit-agent_gl.qm;/usr/share/lxqt/translations/lxqt-policykit-agent/lxqt-policykit-agent_he.qm;/usr/share/lxqt/translations/lxqt-policykit-agent/lxqt-policykit-agent_hr.qm;/usr/share/lxqt/translations/lxqt-policykit-agent/lxqt-policykit-agent_hu.qm;/usr/share/lxqt/translations/lxqt-policykit-agent/lxqt-policykit-agent_id.qm;/usr/share/lxqt/translations/lxqt-policykit-agent/lxqt-policykit-agent_it.qm;/usr/share/lxqt/translations/lxqt-policykit-agent/lxqt-policykit-agent_ja.qm;/usr/share/lxqt/translations/lxqt-policykit-agent/lxqt-policykit-agent_ko.qm;/usr/share/lxqt/translations/lxqt-policykit-agent/lxqt-policykit-agent_lt.qm;/usr/share/lxqt/translations/lxqt-policykit-agent/lxqt-policykit-agent_nb_NO.qm;/usr/share/lxqt/translations/lxqt-policykit-agent/lxqt-policykit-agent_nl.qm;/usr/share/lxqt/translations/lxqt-policykit-agent/lxqt-policykit-agent_oc.qm;/usr/share/lxqt/translations/lxqt-policykit-agent/lxqt-policykit-agent_pl.qm;/usr/share/lxqt/translations/lxqt-policykit-agent/lxqt-policykit-agent_pt.qm;/usr/share/lxqt/translations/lxqt-policykit-agent/lxqt-policykit-agent_ro.qm;/usr/share/lxqt/translations/lxqt-policykit-agent/lxqt-policykit-agent_ru.qm;/usr/share/lxqt/translations/lxqt-policykit-agent/lxqt-policykit-agent_sk_SK.qm;/usr/share/lxqt/translations/lxqt-policykit-agent/lxqt-policykit-agent_tr.qm;/usr/share/lxqt/translations/lxqt-policykit-agent/lxqt-policykit-agent_uk.qm;/usr/share/lxqt/translations/lxqt-policykit-agent/lxqt-policykit-agent_vi.qm;/usr/share/lxqt/translations/lxqt-policykit-agent/lxqt-policykit-agent_zh_CN.qm")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/lxqt/translations/lxqt-policykit-agent" TYPE FILE FILES
    "/home/debian/Lxqt1.3/lxqt-policykit/lxqt-policykit-1.3.0/obj-x86_64-linux-gnu/lxqt-policykit-agent_ar.qm"
    "/home/debian/Lxqt1.3/lxqt-policykit/lxqt-policykit-1.3.0/obj-x86_64-linux-gnu/lxqt-policykit-agent_arn.qm"
    "/home/debian/Lxqt1.3/lxqt-policykit/lxqt-policykit-1.3.0/obj-x86_64-linux-gnu/lxqt-policykit-agent_ast.qm"
    "/home/debian/Lxqt1.3/lxqt-policykit/lxqt-policykit-1.3.0/obj-x86_64-linux-gnu/lxqt-policykit-agent_bg.qm"
    "/home/debian/Lxqt1.3/lxqt-policykit/lxqt-policykit-1.3.0/obj-x86_64-linux-gnu/lxqt-policykit-agent_ca.qm"
    "/home/debian/Lxqt1.3/lxqt-policykit/lxqt-policykit-1.3.0/obj-x86_64-linux-gnu/lxqt-policykit-agent_cs.qm"
    "/home/debian/Lxqt1.3/lxqt-policykit/lxqt-policykit-1.3.0/obj-x86_64-linux-gnu/lxqt-policykit-agent_cy.qm"
    "/home/debian/Lxqt1.3/lxqt-policykit/lxqt-policykit-1.3.0/obj-x86_64-linux-gnu/lxqt-policykit-agent_da.qm"
    "/home/debian/Lxqt1.3/lxqt-policykit/lxqt-policykit-1.3.0/obj-x86_64-linux-gnu/lxqt-policykit-agent_de.qm"
    "/home/debian/Lxqt1.3/lxqt-policykit/lxqt-policykit-1.3.0/obj-x86_64-linux-gnu/lxqt-policykit-agent_el.qm"
    "/home/debian/Lxqt1.3/lxqt-policykit/lxqt-policykit-1.3.0/obj-x86_64-linux-gnu/lxqt-policykit-agent_es.qm"
    "/home/debian/Lxqt1.3/lxqt-policykit/lxqt-policykit-1.3.0/obj-x86_64-linux-gnu/lxqt-policykit-agent_et.qm"
    "/home/debian/Lxqt1.3/lxqt-policykit/lxqt-policykit-1.3.0/obj-x86_64-linux-gnu/lxqt-policykit-agent_fr.qm"
    "/home/debian/Lxqt1.3/lxqt-policykit/lxqt-policykit-1.3.0/obj-x86_64-linux-gnu/lxqt-policykit-agent_gl.qm"
    "/home/debian/Lxqt1.3/lxqt-policykit/lxqt-policykit-1.3.0/obj-x86_64-linux-gnu/lxqt-policykit-agent_he.qm"
    "/home/debian/Lxqt1.3/lxqt-policykit/lxqt-policykit-1.3.0/obj-x86_64-linux-gnu/lxqt-policykit-agent_hr.qm"
    "/home/debian/Lxqt1.3/lxqt-policykit/lxqt-policykit-1.3.0/obj-x86_64-linux-gnu/lxqt-policykit-agent_hu.qm"
    "/home/debian/Lxqt1.3/lxqt-policykit/lxqt-policykit-1.3.0/obj-x86_64-linux-gnu/lxqt-policykit-agent_id.qm"
    "/home/debian/Lxqt1.3/lxqt-policykit/lxqt-policykit-1.3.0/obj-x86_64-linux-gnu/lxqt-policykit-agent_it.qm"
    "/home/debian/Lxqt1.3/lxqt-policykit/lxqt-policykit-1.3.0/obj-x86_64-linux-gnu/lxqt-policykit-agent_ja.qm"
    "/home/debian/Lxqt1.3/lxqt-policykit/lxqt-policykit-1.3.0/obj-x86_64-linux-gnu/lxqt-policykit-agent_ko.qm"
    "/home/debian/Lxqt1.3/lxqt-policykit/lxqt-policykit-1.3.0/obj-x86_64-linux-gnu/lxqt-policykit-agent_lt.qm"
    "/home/debian/Lxqt1.3/lxqt-policykit/lxqt-policykit-1.3.0/obj-x86_64-linux-gnu/lxqt-policykit-agent_nb_NO.qm"
    "/home/debian/Lxqt1.3/lxqt-policykit/lxqt-policykit-1.3.0/obj-x86_64-linux-gnu/lxqt-policykit-agent_nl.qm"
    "/home/debian/Lxqt1.3/lxqt-policykit/lxqt-policykit-1.3.0/obj-x86_64-linux-gnu/lxqt-policykit-agent_oc.qm"
    "/home/debian/Lxqt1.3/lxqt-policykit/lxqt-policykit-1.3.0/obj-x86_64-linux-gnu/lxqt-policykit-agent_pl.qm"
    "/home/debian/Lxqt1.3/lxqt-policykit/lxqt-policykit-1.3.0/obj-x86_64-linux-gnu/lxqt-policykit-agent_pt.qm"
    "/home/debian/Lxqt1.3/lxqt-policykit/lxqt-policykit-1.3.0/obj-x86_64-linux-gnu/lxqt-policykit-agent_ro.qm"
    "/home/debian/Lxqt1.3/lxqt-policykit/lxqt-policykit-1.3.0/obj-x86_64-linux-gnu/lxqt-policykit-agent_ru.qm"
    "/home/debian/Lxqt1.3/lxqt-policykit/lxqt-policykit-1.3.0/obj-x86_64-linux-gnu/lxqt-policykit-agent_sk_SK.qm"
    "/home/debian/Lxqt1.3/lxqt-policykit/lxqt-policykit-1.3.0/obj-x86_64-linux-gnu/lxqt-policykit-agent_tr.qm"
    "/home/debian/Lxqt1.3/lxqt-policykit/lxqt-policykit-1.3.0/obj-x86_64-linux-gnu/lxqt-policykit-agent_uk.qm"
    "/home/debian/Lxqt1.3/lxqt-policykit/lxqt-policykit-1.3.0/obj-x86_64-linux-gnu/lxqt-policykit-agent_vi.qm"
    "/home/debian/Lxqt1.3/lxqt-policykit/lxqt-policykit-1.3.0/obj-x86_64-linux-gnu/lxqt-policykit-agent_zh_CN.qm"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-policykit-agent" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-policykit-agent")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-policykit-agent"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/debian/Lxqt1.3/lxqt-policykit/lxqt-policykit-1.3.0/obj-x86_64-linux-gnu/lxqt-policykit-agent")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-policykit-agent" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-policykit-agent")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lxqt-policykit-agent")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/man1" TYPE FILE FILES "/home/debian/Lxqt1.3/lxqt-policykit/lxqt-policykit-1.3.0/man/lxqt-policykit-agent.1")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/debian/Lxqt1.3/lxqt-policykit/lxqt-policykit-1.3.0/obj-x86_64-linux-gnu/autostart/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/debian/Lxqt1.3/lxqt-policykit/lxqt-policykit-1.3.0/obj-x86_64-linux-gnu/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
