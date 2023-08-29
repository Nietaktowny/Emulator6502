add_library(Memory STATIC
        src/Memory.c
)
target_include_directories(Memory PUBLIC
        include
)

target_sources(Memory PRIVATE src/Memory.c)