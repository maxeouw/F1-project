cmake_minimum_required(VERSION 3.29)
project(F1_championship C)

# Spécifier le standard C11
set(CMAKE_C_STANDARD 11)

# Ajouter l'exécutable et les fichiers source .c
add_executable(F1_championship
        src/main.c
        src/session.c
        src/drivers.c
        src/display.c
        src/results.c
        src/utils.c)

# Inclure les répertoires où se trouvent les fichiers .h
include_directories(src)
