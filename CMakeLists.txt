# Minimum CMake vesion
cmake_minimum_required(VERSION 3.21.1) 

# Project
project(Spark CXX)

# SRC
set(SRC src/Main.cpp)

# Executable
add_executable(${PROJECT_NAME} ${SRC})

# Find SFML
find_package(SFML 2.5 COMPONENTS system window graphics REQUIRED)

# Link libraries
target_link_libraries(${PROJECT_NAME} PRIVATE sfml-system sfml-window sfml-graphics) 

# Include headers
target_include_directories(${PROJECT_NAME} PRIVATE include)
