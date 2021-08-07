# Minimum CMake vesion
cmake_minimum_required(VERSION 3.21.1) 

# Project
project(Spark CXX)

# Engine
add_subdirectory(Engine/src/Engine)

# Game
add_subdirectory(Game/src/Game)