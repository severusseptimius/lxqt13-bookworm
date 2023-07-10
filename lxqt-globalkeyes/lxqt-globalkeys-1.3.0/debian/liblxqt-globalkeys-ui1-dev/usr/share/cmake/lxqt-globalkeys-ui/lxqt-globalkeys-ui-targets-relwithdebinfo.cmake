#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "lxqt-globalkeys-ui" for configuration "RelWithDebInfo"
set_property(TARGET lxqt-globalkeys-ui APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(lxqt-globalkeys-ui PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/x86_64-linux-gnu/liblxqt-globalkeys-ui.so.1.3.0"
  IMPORTED_SONAME_RELWITHDEBINFO "liblxqt-globalkeys-ui.so.1"
  )

list(APPEND _cmake_import_check_targets lxqt-globalkeys-ui )
list(APPEND _cmake_import_check_files_for_lxqt-globalkeys-ui "${_IMPORT_PREFIX}/lib/x86_64-linux-gnu/liblxqt-globalkeys-ui.so.1.3.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
