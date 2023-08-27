add_executable(test_main test_main.c)
include_directories(${unity_SOURCE_DIR}/src)
target_link_libraries(test_main unity)

add_test(NAME run_test_main COMMAND test_main)