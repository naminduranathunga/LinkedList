cmake_minimum_required(VERSION 3.12)
project(LinkedList)

# Set the source directory
set(SOURCE_DIR ./LinkedList)

# Set the destination directory
set(DEST_DIR ./dest)


# Specify the C and C++ compilers
set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)


# Add the library source files
set(SOURCES
    ${SOURCE_DIR}/LinkedList.h
    ${SOURCE_DIR}/LinkedList.cpp
)

# Create the library
add_library(LinkedList ${SOURCES})

# Set the output directory for the library
set_target_properties(LinkedList PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${DEST_DIR}
    LIBRARY_OUTPUT_DIRECTORY ${DEST_DIR}
    RUNTIME_OUTPUT_DIRECTORY ${DEST_DIR}
)
