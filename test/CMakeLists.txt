add_subdirectory(test_CPU)
add_subdirectory(test_main)
add_subdirectory(test_Memory)

include(FetchContent)
FetchContent_Declare(
        Unity
        GIT_REPOSITORY https://github.com/ThrowTheSwitch/Unity.git
        GIT_TAG        v2.5.2
)
set(UNITY_EXTENSION_FIXTURE ON CACHE BOOL "Enable Unity Fixture Extension")
set(UNITY_EXTENSION_MEMORY  ON CACHE BOOL "Enable Unity Memory Extension")
FetchContent_MakeAvailable(Unity)

include(CTest)