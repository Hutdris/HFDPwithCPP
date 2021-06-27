cmake_minimum_required(VERSION 3.0.0)
project(HFDPwithCPP VERSION 0.1.0)

add_subdirectory(CH1_Ducks)
target_link_libraries(${PROJECT_NAME} CH1_Ducks)
target_include_directories(${PROJECT_NAME} PUBLIC
                            ${PROJECT_BINARY_DIR}
                            ${PROJECT_SOURCE_DIR}/CH1_Ducks)
add_executable(HFDPwithCPP main.cpp)