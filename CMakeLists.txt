cmake_minimum_required(VERSION 3.29)
project(Cat)

set(CMAKE_CXX_STANDARD 20)

add_executable(Cat main.cpp
        Cat.cpp
        Cat.h
        SiameseCat.cpp
        SiameseCat.h
        PersianCat.cpp
        PersianCat.h
        AlleyCat.cpp
        AlleyCat.h)
