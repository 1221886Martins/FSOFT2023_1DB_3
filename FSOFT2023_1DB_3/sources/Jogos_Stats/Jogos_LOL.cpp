#include "../headers/Jogos_Stats/Jogos_LOL.h"
#include <vector>
#include <iostream>

std::vector<JogoLOL::Campeonato> JogoLOL::getCampeonatos() {
    std::vector<JogoLOL::Campeonato> campeonatos;

    campeonatos.push_back({"2022 League of Legends World Championship", "DRX"});
    campeonatos.push_back({"2021 League of Legends World Championship", "Edward Gaming"});
    campeonatos.push_back({"2020 League of Legends World Championship", "Damwon Gaming"});
    campeonatos.push_back({"2019 League of Legends World Championship", "Funplus Phoenix"});
    campeonatos.push_back({"2018 League of Legends World Championship", "Invictus Gaming"});
    campeonatos.push_back({"2017 League of Legends World Championship", "Samsung Galaxy"});
    campeonatos.push_back({"2016 League of Legends World Championship", "SKT T1"});
    campeonatos.push_back({"2015 League of Legends World Championship", "SKT T1"});
    campeonatos.push_back({"2014 League of Legends World Championship", "Samsung Galaxy"});
    campeonatos.push_back({"2013 League of Legends World Championship", "SKT T1"});

    return campeonatos;
}

std::vector<JogoLOL::Equipa> JogoLOL::getEquipas() {
    std::vector<JogoLOL::Equipa> equipas;

    equipas.push_back({"DRX", "Top", "Rascal", "South Korea"});
    equipas.push_back({"DRX", "Jungle", "Croco", "South Korea"});
    equipas.push_back({"DRX", "Mid", "Fate", "South Korea"});
    equipas.push_back({"DRX", "Bot", "deokdam", "South Korea"});
    equipas.push_back({"DRX", "Support", "BeryL", "South Korea"});
    equipas.push_back({"DRX", "Head coach", "Kim \"Micro\" Mok-gyeong", ""});
    equipas.push_back({"DRX", "Assistant coach(es)", "Kim \"Gizmo\" Young-jin", ""});
    equipas.push_back({"DRX", "Assistant coach(es)", "Shin \"Shine\" Dong-wook", ""});

    equipas.push_back({"Edward Gaming", "Top", "Flandre", "China"});
    equipas.push_back({"Edward Gaming", "Jungle", "JieJie", "China"});
    equipas.push_back({"Edward Gaming", "Mid", "Scout", "China"});
    equipas.push_back({"Edward Gaming", "Bot", "Viper", "South Korea"});
    equipas.push_back({"Edward Gaming", "Support", "Meiko", "China"});
    equipas.push_back({"Edward Gaming", "Head coach", "Yang \"Maokai\" Ji-Song", ""});
    equipas.push_back({"Edward Gaming", "Assistant coach(es)", "Zhu \"Kenzu\" Kai", ""});

    equipas.push_back({"Damwon Gaming", "Top", "Nuguri", "South Korea"});
    equipas.push_back({"Damwon Gaming", "Jungle", "Canyon", "South Korea"});
    equipas.push_back({"Damwon Gaming", "Mid", "ShowMaker", "South Korea"});
    equipas.push_back({"Damwon Gaming", "Bot", "Ghost", "South Korea"});
    equipas.push_back({"Damwon Gaming", "Support", "BeryL", "South Korea"});
    equipas.push_back({"Damwon Gaming", "Head coach", "Lee \"Zefa\" Jae-min", ""});
    equipas.push_back({"Damwon Gaming", "Assistant coach(es)", "Yang \"Daeny\" Dae-in", ""});

    equipas.push_back({"Funplus Phoenix", "Top", "GimGoon", "South Korea"});
    equipas.push_back({"Funplus Phoenix", "Jungle", "Tian", "China"});
    equipas.push_back({"Funplus Phoenix", "Mid", "Doinb", "South Korea"});
    equipas.push_back({"Funplus Phoenix", "Bot", "Lwx", "China"});
    equipas.push_back({"Funplus Phoenix", "Support", "Crisp", "China"});
    equipas.push_back({"Funplus Phoenix", "Head coach", "Chen \"WarHorse\" Ju-Chih", "Taiwan"});
    equipas.push_back({"Funplus Phoenix", "Assistant coach(es)", "Na", ""});

    equipas.push_back({"Invictus Gaming", "Top", "TheShy", "China"});
    equipas.push_back({"Invictus Gaming", "Jungle", "Ning", "China"});
    equipas.push_back({"Invictus Gaming", "Mid", "Rookie", "South Korea"});
    equipas.push_back({"Invictus Gaming", "Bot", "Puff", "China"});
    equipas.push_back({"Invictus Gaming", "Support", "Baolan", "China"});
    equipas.push_back({"Invictus Gaming", "Head coach", "Kim \"kkOma\" Jeong-gyun", ""});
    equipas.push_back({"Invictus Gaming", "Assistant coach(es)", "Suo", ""});

    equipas.push_back({"SK Telecom T1", "Top", "MaRin", "South Korea"});
    equipas.push_back({"SK Telecom T1", "Jungle", "bengi", "South Korea"});
    equipas.push_back({"SK Telecom T1", "Mid", "Faker", "South Korea"});
    equipas.push_back({"SK Telecom T1", "Bot", "Piglet", "South Korea"});
    equipas.push_back({"SK Telecom T1", "Support", "PoohManDu", "South Korea"});
    equipas.push_back({"SK Telecom T1", "Head coach", "kkOma", ""});

    equipas.push_back({"Samsung White", "Top", "Looper", "China"});
    equipas.push_back({"Samsung White", "Jungle", "DanDy", "South Korea"});
    equipas.push_back({"Samsung White", "Mid", "PawN", "South Korea"});
    equipas.push_back({"Samsung White", "Bot", "Imp", "South Korea"});
    equipas.push_back({"Samsung White", "Support", "Mata", "South Korea"});
    equipas.push_back({"Samsung White", "Head coach", "Homme", ""});

    equipas.push_back({"SK Telecom T1", "Top", "MaRin", "South Korea"});
    equipas.push_back({"SK Telecom T1", "Jungle", "bengi", "South Korea"});
    equipas.push_back({"SK Telecom T1", "Mid", "Faker", "South Korea"});
    equipas.push_back({"SK Telecom T1", "Bot", "Bang", "South Korea"});
    equipas.push_back({"SK Telecom T1", "Support", "Wolf", "South Korea"});
    equipas.push_back({"SK Telecom T1", "Head coach", "kkOma", ""});

    equipas.push_back({"Samsung Galaxy", "Top", "CuVee", "South Korea"});
    equipas.push_back({"Samsung Galaxy", "Jungle", "Ambition", "South Korea"});
    equipas.push_back({"Samsung Galaxy", "Mid", "Crown", "South Korea"});
    equipas.push_back({"Samsung Galaxy", "Bot", "Ruler", "South Korea"});
    equipas.push_back({"Samsung Galaxy", "Support", "CoreJJ", "South Korea"});
    equipas.push_back({"Samsung Galaxy", "Head coach", "Edgar", ""});

    return equipas;
}

void mostrarOpcoesLOL() {
    JogoLOL jogoLOL;
    std::vector<JogoLOL::Equipa> equipas = jogoLOL.getEquipas();
    std::vector<JogoLOL::Campeonato> campeonatos = jogoLOL.getCampeonatos();

    std::cout << "Campeonatos:\n";
    for (const auto& campeonato : campeonatos) {
        std::cout << "Nome: " << campeonato.nome << std::endl;
        std::cout << "Equipa vencedora: " << campeonato.vencedor << std::endl;
        std::cout << std::endl;
    }
    std::cout << "Equipas:\n";
    for (const auto& equipa : equipas) {
        std::cout << "Nome: " << equipa.nome << std::endl;
        std::cout << "Posicao: " << equipa.posicao << std::endl;
        std::cout << "Jogador: " << equipa.jogador << std::endl;
        std::cout << "Pais: " << equipa.nacionalidade << std::endl;
        std::cout << std::endl;
    }


}

void JogoLOL::printLOL() {
    mostrarOpcoesLOL();
}


void JogoLOL::dadosLOL(){
    int atual_jogadores = rand() % (1000000 - 500000 + 1) + 4000000;


    std::cout << "Maximo de jogadores simultaneos: 5214842 " << std::endl;
    std::cout << "Minimo de jogadores simultaneos: 2463914" << std::endl;
    std::cout << "Atualmente: " << atual_jogadores << std::endl;
}