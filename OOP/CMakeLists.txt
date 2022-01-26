cmake_minimum_required(VERSION 3.18)

project(OOP LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(OOP_SOURCEFILES
    main.cpp
        Account.cpp Account.hpp)


add_executable(${PROJECT_NAME} ${OOP_SOURCEFILES})