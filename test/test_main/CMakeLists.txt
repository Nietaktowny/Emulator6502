add_executable(test_main test_main.c)
include_directories(${unity_SOURCE_DIR}/src)
target_link_libraries(test_main unity)
add_test(NAME test_if_system_uses_little_endian COMMAND test_main)