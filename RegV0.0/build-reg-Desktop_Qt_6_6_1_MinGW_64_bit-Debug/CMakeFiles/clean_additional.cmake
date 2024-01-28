# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\reg_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\reg_autogen.dir\\ParseCache.txt"
  "reg_autogen"
  )
endif()
