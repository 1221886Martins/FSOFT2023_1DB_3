#include "../headers/Jogo_Especial_Stat/Jogo_Especial_MN.h"
#include <string>
#include <vector>
using namespace std;

void Stat_MN(){

        int atual_jogadores = rand() % (500000 - 250000 + 1) + 7500000;

        std::cout << "Maximo de jogadores simultaneos: 14864153 " << std::endl;
        std::cout << "Minimo de jogadores simultaneos: 3653745" << std::endl;
        std::cout << "Atualmente: " << atual_jogadores << std::endl;

}
