cmake_minimum_required(VERSION 3.5)
project(CH2_WetherStation VERSION 0.1.0)
set(SOURCES
    src/DataCollector.cpp
    src/Display.cpp
    src/main.cpp
)

# Add an executable with the above sources
add_executable(${PROJECT_NAME} ${SOURCES})

# Set the directories that should be included in the build command for this target
# when running g++ these will be included as -I/directory/path/
target_include_directories(${PROJECT_NAME}
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/include
)

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 11)