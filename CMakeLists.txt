cmake_minimum_required(VERSION 3.0.0)

project(test)

find_package(SFML REQUIRED COMPONENTS graphics audio window system)

add_executable(test src/sf.cpp)

target_link_libraries(test sfml-graphics sfml-window sfml-system sfml-audio)