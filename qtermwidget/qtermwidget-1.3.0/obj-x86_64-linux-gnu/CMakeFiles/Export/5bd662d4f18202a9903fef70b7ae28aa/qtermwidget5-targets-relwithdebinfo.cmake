#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "qtermwidget5" for configuration "RelWithDebInfo"
set_property(TARGET qtermwidget5 APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(qtermwidget5 PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/x86_64-linux-gnu/libqtermwidget5.so.1.3.0"
  IMPORTED_SONAME_RELWITHDEBINFO "libqtermwidget5.so.1"
  )

list(APPEND _cmake_import_check_targets qtermwidget5 )
list(APPEND _cmake_import_check_files_for_qtermwidget5 "${_IMPORT_PREFIX}/lib/x86_64-linux-gnu/libqtermwidget5.so.1.3.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
