# - Find the lxqt-globalkeys include and library dirs and define a some macros
#
# The module defines the following variables
#  LXQT_GLOBALKEYS_FOUND         - Set to TRUE if all of the above has been found
#
# Typical usage:
#    find_package(lxqt-globalkeys)
#    add_executable(use-lxqt-globalkeys main.cpp)
#    target_link_libraries(use-lxqt-globalkeys lxqt-globalkeys)


####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was lxqt_globalkeys-config.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

macro(check_required_components _NAME)
  foreach(comp ${${_NAME}_FIND_COMPONENTS})
    if(NOT ${_NAME}_${comp}_FOUND)
      if(${_NAME}_FIND_REQUIRED_${comp})
        set(${_NAME}_FOUND FALSE)
      endif()
    endif()
  endforeach()
endmacro()

####################################################################################

if (CMAKE_VERSION VERSION_LESS 3.0.2)
    message(FATAL_ERROR \"lxqt-globalkeys requires at least CMake version 3.0.2\")
endif()

include(CMakeFindDependencyMacro)

set(LXQT_GLOBALKEYS_MAJOR_VERSION 1)
set(LXQT_GLOBALKEYS_MINOR_VERSION 3)
set(LXQT_GLOBALKEYS_PATCH_VERSION 0)
set(LXQT_GLOBALKEYS_VERSION 1.3.0)

find_dependency(Qt5Widgets 5.15.0)
find_dependency(Qt5DBus 5.15.0)

if (NOT TARGET lxqt-globalkeys)
    if (POLICY CMP0024)
        cmake_policy(SET CMP0024 NEW)
    endif()
    include("${CMAKE_CURRENT_LIST_DIR}/lxqt-globalkeys-targets.cmake")
endif()
