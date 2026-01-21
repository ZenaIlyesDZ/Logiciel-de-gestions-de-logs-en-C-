# * @file : CMakeList.txt
#* @brief summary of the role : Fichier de configuration CMake pour le projet de gestionnaire de logs en C++
#* @author : Ilyes
#* @date : 17/01/2026 
# * @details : Ce fichier configure le projet CMake pour compiler et lier le programme de gestion des logs en C++.

cmake_minimum_required(VERSION 3.10)

project(Gestion_logs VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Gestion_logs Gestion_logs.cpp)
