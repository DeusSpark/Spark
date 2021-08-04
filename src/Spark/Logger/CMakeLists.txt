# Library name
set(LIB_NAME Logger)

# Path to .hpp
set(INCROOT ${PROJECT_SOURCE_DIR}/include/Spark/Logger)
# Path to .cpp
set(SRCROOT ${PROJECT_SOURCE_DIR}/src/Spark/Logger) 

# SRC
set(SRC
	${INCROOT}/Logger.hpp
	${SRCROOT}/Logger.cpp
)

# Executable
add_library(${LIB_NAME} STATIC ${SRC})

# Include headers
target_include_directories(${LIB_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/include)

