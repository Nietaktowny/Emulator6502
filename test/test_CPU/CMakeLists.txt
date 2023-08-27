add_executable(test_CPU test_CPU.c)
target_link_libraries(test_CPU PRIVATE CPU unity)
include_directories(${unity_SOURCE_DIR}/src)


add_test(NAME run_test_CPU COMMAND test_CPU)
