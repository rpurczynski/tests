cmake_minimum_required (VERSION 2.6)

project (Quiz)

configure_file(quiz_1.txt quiz_1.txt COPYONLY)
configure_file(quiz_2.txt quiz_2.txt COPYONLY)
configure_file(quiz_3.txt quiz_3.txt COPYONLY)

add_executable(Quiz main.cpp operating_functions.cpp question.cpp quiz.cpp Game.cpp UserInOut.cpp)
add_definitions(-std=c++11)