add_library(CPU STATIC
        src/CPU.c
)
target_include_directories(CPU PUBLIC
        include
)

target_link_libraries(CPU Memory)

target_sources(CPU PRIVATE src/CPU.c)