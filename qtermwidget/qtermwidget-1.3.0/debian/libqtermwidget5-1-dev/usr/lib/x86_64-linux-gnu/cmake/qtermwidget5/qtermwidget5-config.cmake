# - Find the QTermWidget include and library
#
# Typical usage:
#    find_package(QTermWidget5 REQUIRED)
#
#    add_executable(foo main.cpp)
#    target_link_libraries(foo qtermwidget5)



if (CMAKE_VERSION VERSION_LESS 3.0.2)
    message(FATAL_ERROR \"qtermwidget requires at least CMake version 3.0.2\")
endif()

if (NOT TARGET qtermwidget5)
    if (POLICY CMP0024)
        cmake_policy(SET CMP0024 NEW)
    endif()
    include("${CMAKE_CURRENT_LIST_DIR}/qtermwidget5-targets.cmake")
endif()
