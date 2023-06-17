cmake_minimum_required(VERSION 3.24)
project(ScoreBoard)

set(CMAKE_CXX_STANDARD 17)
set(PROJECT_HEADERS_DIR ${PROJECT_SOURCE_DIR}/headers)
set(PROJECT_SOURCES_DIR ${PROJECT_SOURCE_DIR}/sources)
include_directories(${PROJECT_HEADERS_DIR})
include_directories(${PROJECT_SOURCES_DIR})

set(
        SOURCE_FILES
        main.cpp
        ${PROJECT_HEADERS_DIR}/menu.h
        ${PROJECT_SOURCES_DIR}/menu.cpp
        ${PROJECT_HEADERS_DIR}/Funcoes_Jogadores/Jogador.h
        ${PROJECT_SOURCES_DIR}/Funcoes_Jogadores/Jogador.cpp
        ${PROJECT_HEADERS_DIR}/Funcoes_Jogadores/equipa.h
        ${PROJECT_SOURCES_DIR}/Funcoes_Jogadores/equipa.cpp
        ${PROJECT_HEADERS_DIR}/Jogos_Stats/Jogos_LOL.h
        ${PROJECT_SOURCES_DIR}/Jogos_Stats/Jogos_LOL.cpp
        ${PROJECT_HEADERS_DIR}/Jogos_Stats/Jogos_RL.h
        ${PROJECT_SOURCES_DIR}/Jogos_Stats/Jogos_RL.cpp
        ${PROJECT_HEADERS_DIR}/Jogos_Stats/Jogos_CS.h
        ${PROJECT_SOURCES_DIR}/Jogos_Stats/Jogos_CS.cpp
        ${PROJECT_HEADERS_DIR}/Jogo_Especial_Stat/Jogo_Especial_MN.h
        ${PROJECT_SOURCES_DIR}/Jogo_Especial_Stat/Jogo_Especial_MN.cpp

)

add_executable(ScoreBoard ${SOURCE_FILES})
