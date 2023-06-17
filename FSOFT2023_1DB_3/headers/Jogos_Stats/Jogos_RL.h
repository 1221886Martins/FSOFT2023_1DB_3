#include <string>
#include <vector>

class JogoRl {
public:
    void printRl();
    void dadosRl();

    struct Campeonato {
        std::string nome;
        std::string vencedor;
    };

    struct Equipa {
        std::string nome;
        std::string jogador;
        std::string nacionalidade;
    };

    std::vector<Campeonato> campeonatos;
    std::vector<Equipa> equipas;

    std::vector<Campeonato> getCampeonatos();
    std::vector<Equipa> getEquipas();
};


