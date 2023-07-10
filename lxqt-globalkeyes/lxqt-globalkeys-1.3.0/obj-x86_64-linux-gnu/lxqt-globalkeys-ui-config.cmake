# - Find the lxqt-globalkeys-ui include and library dirs and define a some macros
#
# The module defines the following variables
#  LXQT_GLOBALKEYS_UI_FOUND         - Set to TRUE if all of the above has been found
#
# Typical usage:
#    find_package(lxqt-globalkeys-ui)
#    add_executable(use-lxqt-globalkeys-ui main.cpp)
#    target_link_libraries(use-lxqt-globalkeys-ui lxqt-globalkeys-ui)


####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was lxqt_globalkeys_ui-config.cmake.in                            ########

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

find_dependency(lxqt-globalkeys 1.3.0)

if (NOT TARGET lxqt-globalkeys-ui)
    if (POLICY CMP0024)
        cmake_policy(SET CMP0024 NEW)
    endif()
    include("${CMAKE_CURRENT_LIST_DIR}/lxqt-globalkeys-ui-targets.cmake")
endif()
