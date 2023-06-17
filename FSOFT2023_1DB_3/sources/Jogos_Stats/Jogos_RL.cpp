#include "../headers/Jogos_Stats/Jogos_RL.h"
#include <vector>
#include <iostream>

std::vector<JogoRl::Campeonato> JogoRl::getCampeonatos() {
    std::vector<JogoRl::Campeonato> campeonatos;

    campeonatos.push_back({"Fort Worth 2021/22", "Team BDS", });
    campeonatos.push_back({"Madrid 2019", "NRG Esports", });
    campeonatos.push_back({"Newark 2019", "Renault Vitality", });
    campeonatos.push_back({"Las Vegas 2018", "Cloud9", });
    campeonatos.push_back({"London 2018", "Dignitas", });
    campeonatos.push_back({"Washington 2017", "Gale Force eSports", });
    campeonatos.push_back({"Los Angeles 2017", "Northern Gaming", });
    campeonatos.push_back({"Amsterdam 2016", "Flipside Tactics", });
    campeonatos.push_back({"Los Angeles 2016", "iBUYPOWER", });

    return campeonatos;
}

std::vector<JogoRl::Equipa> JogoRl::getEquipas() {
    std::vector<JogoRl::Equipa> equipas;

    equipas.push_back({"Team BDS","MaRc_By_8", "Spain"});
    equipas.push_back({"Team BDS","M0nkey M00n", "France"});
    equipas.push_back({"Team BDS","Extra", "France"});
    equipas.push_back({"Team BDS","Kael (coach)", "Spain"});


    equipas.push_back({"NRG Esports","Fireburner", "USA"});
    equipas.push_back({"NRG Esports","GarrettG", "USA"});
    equipas.push_back({"NRG Esports","jstn.", "USA"});
    equipas.push_back({"NRG Esports","Chrome", "USA"});


    equipas.push_back({"Renault Vitality","Fairy Peak!", "France"});
    equipas.push_back({"Renault Vitality","Scrub Killa", "Scotland"});
    equipas.push_back({"Renault Vitality","Kaydop", "France"});
    equipas.push_back({"Renault Vitality","Gregan (coach)", "Georgia"});


    equipas.push_back({"Cloud9","Torment", "USA"});
    equipas.push_back({"Cloud9","SquishyMuffinz", "Canada"});
    equipas.push_back({"Cloud9","Gimmick", "USA"});


    equipas.push_back({"Dignitas","ViolentPanda", "Netherlands"});
    equipas.push_back({"Dignitas","Kaydop", "France"});
    equipas.push_back({"Dignitas","TurboPolsa", "Sweden"});

    equipas.push_back({"Gale Force Esports","ViolentPanda", "Netherlands"});
    equipas.push_back({"Gale Force Esports","Kaydop", "France"});
    equipas.push_back({"Gale Force Esports","TurboPolsa", "Sweden"});


    equipas.push_back({"Northern Gaming","Remkoe", "Netherlands"});
    equipas.push_back({"Northern Gaming","Maestro", "Denmark"});
    equipas.push_back({"Northern Gaming","Deevo", "England"});


    equipas.push_back({"Flipside Tactics","Markydooda", "Scotland"});
    equipas.push_back({"Flipside Tactics","Kuxir97", "Mexico"});
    equipas.push_back({"Flipside Tactics","gReazymeister", "Norway"});


    equipas.push_back({"iBUYPOWER","Kronovi", "USA"});
    equipas.push_back({"iBUYPOWER","Lachinio", "Canada"});
    equipas.push_back({"iBUYPOWER","0ver Zer0", "USA"});

    return equipas;
}

void mostrarOpcoesRl() {
    JogoRl jogoRl;
    std::vector<JogoRl::Equipa> equipas = jogoRl.getEquipas();
    std::vector<JogoRl::Campeonato> campeonatos = jogoRl.getCampeonatos();

    std::cout << "Campeonatos:\n";
    for (const auto& campeonato : campeonatos) {
        std::cout << "Nome: " << campeonato.nome << std::endl;
        std::cout << "Equipa vencedora: " << campeonato.vencedor << std::endl;
        std::cout << std::endl;
    }
    std::cout << "Equipas:\n";
    for (const auto& equipa : equipas) {
        std::cout << "Nome: " << equipa.nome << std::endl;
        std::cout << "Jogador: " << equipa.jogador << std::endl;
        std::cout << "Pais: " << equipa.nacionalidade << std::endl;
        std::cout << std::endl;
    }


}


void JogoRl::printRl() {
    mostrarOpcoesRl();
}


void JogoRl::dadosRl(){
    int atual_jogadores = rand() % (1000000 - 500000 + 1) + 500000;


    std::cout << "Maximo de jogadores simultaneos: 1324631 " << std::endl;
    std::cout << "Minimo de jogadores simultaneos: 251735" << std::endl;
    std::cout << "Atualmente: " << atual_jogadores << std::endl;
}