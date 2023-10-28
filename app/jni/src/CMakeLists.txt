cmake_minimum_required(VERSION 3.6)

project(MY_APP)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_definitions(-std=c++17)

set(CXX_FLAGS "-Wall -Werror") # -stdlib=libc++ -lc++abi
set(CMAKE_CXX_FLAGS "${CXX_FLAGS}")

find_library(SDL2 SDL2)

add_library(main SHARED)

target_sources(main PRIVATE game.cpp renderer.cpp)

target_link_libraries(main SDL2 -pthread)


