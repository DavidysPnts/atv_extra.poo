cmake_minimum_required(VERSION 3.10)
project(CentralAlertas)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -fsanitize=address,undefined")

# Adiciona os diretórios de include
include_directories(.)

# Compila o executável
add_executable(CentralAlertas 
    main.cpp 
    alerta.cpp 
    central.cpp
    alertas/alerta_critico.cpp
    alertas/alerta_aviso.cpp
    alertas/alerta_info.cpp
)