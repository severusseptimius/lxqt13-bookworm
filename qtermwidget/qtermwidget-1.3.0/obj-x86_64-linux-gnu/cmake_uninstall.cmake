IF(NOT EXISTS "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/install_manifest.txt")
  MESSAGE(FATAL_ERROR "Cannot find install manifest: \"/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/install_manifest.txt\"")
ENDIF(NOT EXISTS "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/install_manifest.txt")

# this works on Linux, but not on mac.
#FILE(READ "/home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/install_manifest.txt" files)
#STRING(REGEX REPLACE "\n" ";" files "${files}")
#FOREACH(file ${files})
#  MESSAGE(STATUS "Uninstalling \"${file}\"")
#  IF(NOT EXISTS "${file}")
#    MESSAGE(FATAL_ERROR "File \"${file}\" does not exists.")
#  ENDIF(NOT EXISTS "${file}")
#  EXEC_PROGRAM("/usr/bin/cmake" ARGS "-E remove \"${file}\""
#    OUTPUT_VARIABLE rm_out
#    RETURN_VARIABLE rm_retval)
#  IF("${rm_retval}" GREATER 0)
#    MESSAGE(FATAL_ERROR "Problem when removing \"${file}\"")
#  ENDIF("${rm_retval}" GREATER 0)
#ENDFOREACH(file)

EXEC_PROGRAM("xargs rm < /home/debian/Lxqt1.3/qtermwidget/qtermwidget-1.3.0/obj-x86_64-linux-gnu/install_manifest.txt"
            OUTPUT_VARIABLE rm_out
            RETURN_VARIABLE rm_ret)
