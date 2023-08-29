add_executable(test_Memory test_Memory.c)
include_directories(${unity_SOURCE_DIR}/src)
target_link_libraries(test_Memory unity)

add_test(NAME run_test_Memory COMMAND test_Memory)