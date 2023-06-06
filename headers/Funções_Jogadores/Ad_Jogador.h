
#ifndef UNTITLED2_AD_JOGADOR_H
#define UNTITLED2_AD_JOGADOR_H

#include <vector>
#include <string>

class DadosJogador {
public:

    void AdicionarNome();
    void AdicionarIdade();
    void AdicionarNacio();
    void AdicionarJogo();
    void RmJogador();

private:

    std::vector<std::string> nomeJogador;
    std::vector<std::string> idadeJogador;
    std::vector<std::string> nacionJogador;
    std::vector<std::string> jogoJogador;

};



#endif //UNTITLED2_AD_JOGADOR_H
