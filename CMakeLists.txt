cmake_minimum_required(VERSION 3.27)
project(Emulator6502
        VERSION 0.1
        DESCRIPTION "Emulator of 6502 chip."
        LANGUAGES C)

set(CMAKE_C_STANDARD 11)

enable_testing()

add_subdirectory(main)
add_subdirectory(test)
add_subdirectory(lib)

# Let's tell it a bit about our environment SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
# We declare a variable to select what to build set
#(TARGET_GROUP production CACHE STRING "What Should I Build?")
# Modules that exist in both our release and our unit tests, are added now   add_subdirectory(src)   if(TARGET_GROUP STREQUAL release)
# If we had any files that ONLY were compiled into our release, for example startup code,
# it's really handy to put it here.  elseif(TARGET_GROUP STREQUAL test)
# Our tests need to let CTest know we're running tests    include(CTest)
# It also needs to understand we have code in source
# and test directories  add_subdirectory(unity)    add_subdirectory(test)  else()
#message(FATAL_ERROR "I don't know the TARGET_GROUP you gave me!") endif()
