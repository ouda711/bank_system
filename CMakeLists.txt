cmake_minimum_required(VERSION 3.23)
project(bank_system)

set(CMAKE_CXX_STANDARD 14)

add_executable(bank_system main.cpp User.cpp User.h MaimMenu.cpp MaimMenu.h)
