cmake_minimum_required(VERSION 3.15)
project(untitled10)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(untitled10
        main.cpp
        ElementoMusical.cpp
        ElementoMusical.h
        Cancion.cpp
        Cancion.h
        Album.cpp
        Album.h
        Artista.cpp
        Artista.h
        Biblioteca.cpp
        Biblioteca.h
)
