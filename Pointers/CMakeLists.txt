cmake_minimum_required(VERSION 3.18)

file(GLOB SRC_FILES *.cpp)
file(GLOB HDR_FILES ./include/*.hpp)

project(Pointers LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_executable(${PROJECT_NAME} ${SRC_FILES} ${HDR_FILES})
target_include_directories(${PROJECT_NAME} PUBLIC ./include)