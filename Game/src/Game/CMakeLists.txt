# Library name
set(GAME_NAME Spark)


# Path to .hpp
set(INCROOT ${PROJECT_SOURCE_DIR}/Game/include/Game)
# Path to .cpp
set(SRCROOT ${PROJECT_SOURCE_DIR}/Game/src/Game) 


# SRC
set(SRC
	${SRCROOT}/Main.cpp
	${INCROOT}/States/MenuState.hpp
	${SRCROOT}/States/MenuState.cpp
)


# Executable
add_executable(${GAME_NAME} ${SRC})


# Link engine libraries
target_link_libraries(${GAME_NAME} PRIVATE Engine)

# Include headers
target_include_directories(${GAME_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/Game/include)

