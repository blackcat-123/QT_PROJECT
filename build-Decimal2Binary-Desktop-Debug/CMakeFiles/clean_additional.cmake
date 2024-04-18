# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Decimal2Binary_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Decimal2Binary_autogen.dir\\ParseCache.txt"
  "Decimal2Binary_autogen"
  )
endif()
