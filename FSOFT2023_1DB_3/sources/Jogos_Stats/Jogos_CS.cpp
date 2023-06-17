#include "../headers/Jogos_Stats/Jogos_CS.h"
#include <vector>
#include <iostream>

std::vector<JogoCS::Campeonato> JogoCS::getCampeonatos() {
    std::vector<JogoCS::Campeonato> campeonatos;

    campeonatos.push_back({"BLAST Major Paris 2023", "Vitality", });
    campeonatos.push_back({"IEM Major Rio 2022", " Outsiders", });
    campeonatos.push_back({"PGL Major Antwerp 2022", "Faze Clan", });
    campeonatos.push_back({"PGL Major Stockholm 2021", "NAVI", });
    campeonatos.push_back({"StarLadder Berlin Major 2019", "Astralis", });
    campeonatos.push_back({"IEM Katowice Major 2019", "Astralis", });
    campeonatos.push_back({"FACEIT Major:London 2018", "Astralis", });
    campeonatos.push_back({"ELEAGUE Major: Boston 2018", "Cloud9", });
    campeonatos.push_back({"PGL Major Krakow 2017", "Gambit Esports", });
    campeonatos.push_back({"ELEAGUE Major: Atlanta 2017", "Astralis", });

    return campeonatos;
}

std::vector<JogoCS::Equipa> JogoCS::getEquipas() {
    std::vector<JogoCS::Equipa> equipas;

    equipas.push_back({"Vitality","ApEX", "France"});
    equipas.push_back({"Vitality","ZywOo", "France"});
    equipas.push_back({"Vitality","Dupreeh", "Denmark"});
    equipas.push_back({"Vitality","Magisk", "Denmark"});
    equipas.push_back({"Vitality","Spinx", "Israel"});
    equipas.push_back({"Vitality","Zonic (coach)", "Denmark"});


    equipas.push_back({"Outsiders","Qikert", "Kazakhstan"});
    equipas.push_back({"Outsiders","Jame", "Russia"});
    equipas.push_back({"Outsiders","FL1T", "Russia"});
    equipas.push_back({"Outsiders","N0rb3r7", "Russia"});
    equipas.push_back({"Outsiders","Fame", "Russia"});
    equipas.push_back({"Outsiders","Dastan (coach)", "Kazakhstan"});


    equipas.push_back({"Faze Clan","Rain", "Norway"});
    equipas.push_back({"Faze Clan","Broky", "Latvia"});
    equipas.push_back({"Faze Clan","Twistzz", "Canada"});
    equipas.push_back({"Faze Clan","Karrigan", "Denmark"});
    equipas.push_back({"Faze Clan","Ropz", "Estonia"});


    equipas.push_back({"NAVI","S1mple", "Ukraine"});
    equipas.push_back({"NAVI","ElectroNic", "Russia"});
    equipas.push_back({"NAVI","Boombl4", "Russia"});
    equipas.push_back({"NAVI","Perfecto", "Russia"});
    equipas.push_back({"NAVI","B1t", "Ukraine"});
    equipas.push_back({"NAVI","B1ad3 (coach)", "Ukraine"});


    equipas.push_back({"Astralis","Dev1ce", "Denmark"});
    equipas.push_back({"Astralis","Dupreeh", "Denmark"});
    equipas.push_back({"Astralis","Xyp9x", "Denmark"});
    equipas.push_back({"Astralis","Magisk", "Denmark"});
    equipas.push_back({"Astralis","Gla1ve", "Denmark"});
    equipas.push_back({"Astralis","Zonic (coach)", "Denmark"});


    equipas.push_back({"Cloud9","Skadoodle", "USA"});
    equipas.push_back({"Cloud9","Stewie2K", "USA"});
    equipas.push_back({"Cloud9","Autimatic", "USA"});
    equipas.push_back({"Cloud9","RUSH", "USA"});
    equipas.push_back({"Cloud9","Tarik", "USA"});
    equipas.push_back({"Cloud9","Valens (coach)", "USA"});


    equipas.push_back({"Gambit Esports","Dosia", "Russia"});
    equipas.push_back({"Gambit Esports","AdreN", "Kazakhstan"});
    equipas.push_back({"Gambit Esports","Mou", "Kazakhstan"});
    equipas.push_back({"Gambit Esports","Zeus", "Ukraine"});
    equipas.push_back({"Gambit Esports","HObbit", "Kazakhstan"});
    equipas.push_back({"Gambit Esports","Kane (coach)", "Ukraine"});

    return equipas;
}

void mostrarOpcoesCs() {
    JogoCS JogoCS;
    std::vector<JogoCS::Equipa> equipas = JogoCS.getEquipas();
    std::vector<JogoCS::Campeonato> campeonatos = JogoCS.getCampeonatos();

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



void JogoCS::printCS() {
    mostrarOpcoesCs();
}


void JogoCS::dadosCS(){
        int atual_jogadores = rand() % (1800000 - 1000000 + 1) + 1000000;


        std::cout << "Maximo de jogadores simultaneos: 1804627 " << std::endl;
        std::cout << "Minimo de jogadores simultaneos: 653891" << std::endl;
        std::cout << "Atualmente: " << atual_jogadores << std::endl;
}
