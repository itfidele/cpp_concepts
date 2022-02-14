cmake_minimum_required(VERSION 3.18)

project(OOP LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


set(OOP_SOURCEFILES
    main.cpp
        Account.cpp Player.cpp Player.hpp Shallow.cpp Shallow.hpp DeepCopy.cpp DeepCopy.hpp Move.cpp Move.hpp Movie.cpp Movie.hpp Movies.cpp Movies.hpp)


add_executable(${PROJECT_NAME} ${OOP_SOURCEFILES})