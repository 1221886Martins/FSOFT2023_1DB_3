
#ifndef UNTITLED2_AD_JOGADOR_H
#define UNTITLED2_AD_JOGADOR_H

#include <vector>
#include <string>



using namespace std;


class DadosJogador {
public:

    void AdicionarNome();
    void AdicionarIdade();
    void AdicionarNacio();
    void AdicionarJogo();
    void RemoveAll();
    void VerNomes();
    void menuj();
    void MakeJogadorLOL();
    void MakeJogadorCs();
    void MakeJogadorRL();
    void MakeJogadorM();

private:



    std::vector<std::string> NomeLOL;
    std::vector<std::string> NomeCs;
    std::vector<std::string> NomeRL;
    std::vector<std::string> NomeM;
    std::vector<int> idadeLOL;
    std::vector<int> idadeCs;
    std::vector<int> idadeRL;
    std::vector<int> idadeM;
    std::vector<std::string> nacioLOL;
    std::vector<std::string> nacioCs;
    std::vector<std::string> nacioRL;
    std::vector<std::string> nacioM;

};



#endif //UNTITLED2_AD_JOGADOR_H
