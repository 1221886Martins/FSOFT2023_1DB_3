#ifndef UNTITLED2_JOGOS_LOL_H
#define UNTITLED2_JOGOS_LOL_H

#include <string>
#include <vector>

class JogoLOL {
public:
    void printLOL();
    void dadosLOL();

    struct Campeonato {
        std::string nome;
        std::string vencedor;
    };

    struct Equipa {
        std::string nome;
        std::string posicao;
        std::string jogador;
        std::string nacionalidade;
    };

    std::vector<Campeonato> campeonatos;
    std::vector<Equipa> equipas;

    std::vector<Campeonato> getCampeonatos();
    std::vector<Equipa> getEquipas();
};

#endif // UNTITLED2_JOGOS_LOL_H
