cmake_minimum_required(VERSION 3.5)
project(CH1_Ducks VERSION 0.1.0)
# Create a sources variable with a link to all cpp files to compile
set(SOURCES
    src/Duck.cpp
    src/main.cpp
)

# Add an executable with the above sources
add_executable(CH1_Ducks ${SOURCES})

# Set the directories that should be included in the build command for this target
# when running g++ these will be included as -I/directory/path/
target_include_directories(CH1_Ducks
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/include
)

set_property(TARGET CH1_Ducks PROPERTY CXX_STANDARD 11)