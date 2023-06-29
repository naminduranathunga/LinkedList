cmake_minimum_required(VERSION 3.12)
project(example)

# Set the source files
set(SOURCES
    main.cpp
)

# Set the destination directory
set(DEST_DIR ./)

# Specify the C and C++ compilers
set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)


# Add the executable target
add_executable(example ${SOURCES})

# Link against library files
target_link_libraries(example
    ./../dest/libLinkedList.a
    # Add more library files here if needed
)
