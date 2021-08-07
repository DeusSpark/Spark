# Library name
set(ENGINE_NAME Engine)


# Path to .hpp
set(INCROOT ${PROJECT_SOURCE_DIR}/Engine/include/Engine)
# Path to .cpp
set(SRCROOT ${PROJECT_SOURCE_DIR}/Engine/src/Engine) 


# SRC
set(SRC
	${INCROOT}/Engine.hpp
	${SRCROOT}/Engine.cpp
	${INCROOT}/Logger.hpp
	${SRCROOT}/Logger.cpp
	${INCROOT}/State.hpp
	${SRCROOT}/State.cpp
)


# Library
add_library(${ENGINE_NAME} STATIC ${SRC})


# Find SFML
find_package(SFML 2.5 COMPONENTS system window graphics REQUIRED)

# Link SFML
target_link_libraries(${ENGINE_NAME} PRIVATE sfml-system sfml-window sfml-graphics)


# Include headers
target_include_directories(${ENGINE_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/Engine/include)

