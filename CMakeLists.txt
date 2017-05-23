cmake_minimum_required (VERSION 2.6)

project (Quiz)

configure_file(c++_1.txt c++_1.txt COPYONLY)
configure_file(c++_2.txt c++_2.txt COPYONLY)
configure_file(c++_3.txt c++_3.txt COPYONLY)

configure_file(stl_1.txt stl_1.txt COPYONLY)
configure_file(stl_2.txt stl_2.txt COPYONLY)
configure_file(stl_3.txt stl_3.txt COPYONLY)

add_executable(Quiz main.cpp operating_functions.cpp question.cpp quiz.cpp Game.cpp UserInOut.cpp)
add_definitions(-std=c++11)