#ifndef EQUIPA_H
#define EQUIPA_H

#include <string>
#include <vector>

class Equipa {
public:
    std::string nome;
    std::string nomeLol;
    std::string nomeCs;
    std::string nomeRl;
    std::vector<std::string> jogadoresLol; // Vetor para os jogadores de League of Legends
    std::vector<std::string> jogadoresCs;  // Vetor para os jogadores de Counter Strike Global Offensive
    std::vector<std::string> jogadoresRl;  // Vetor para os jogadores de Rocket League


};

void CriarEquipa(std::vector<Equipa>& equipas);
void RemoverEquipa(std::vector<Equipa>& equipas);
void AddJogadores(std::vector<Equipa>& equipas);
void menuEquipa(std::vector<Equipa>& equipas);
void menueq();

#endif  // EQUIPA_H
