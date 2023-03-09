cmake_minimum_required(VERSION 3.24)
project(AkariPuzzle)

set(CMAKE_CXX_STANDARD 17)

add_executable(AkariPuzzle main.cpp celda.h celda.cpp tablero.h tablero.cpp colores.h reglasJuego.h reglasJuego.cpp)
