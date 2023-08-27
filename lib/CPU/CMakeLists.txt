add_library(CPU STATIC
        src/CPU.c
)

target_include_directories(CPU PUBLIC
        include
)