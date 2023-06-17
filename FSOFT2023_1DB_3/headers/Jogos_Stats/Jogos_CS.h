#include <string>
#include <vector>

class JogoCS {
public:
    void printCS();
    void dadosCS();

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


