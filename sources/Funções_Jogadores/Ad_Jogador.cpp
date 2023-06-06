#include <string>
#include "Ad_Jogador.h"
#include "Rm_Jogador.h"
#include <iostream>
#include <algorithm>

using namespace std;


void DadosJogador:: AdicionarNome(){

    std::string nome;
    std::cout << "Digite o nome a ser adicionado: ";
    std::cin >> nome;

    while (ehNumero(nome)= true){
        std::cout << "O nome precisa de conter pelo menos um caracter!\n ";
        std::cout << "Digite o nome a ser adicionado: ";
        std::cin >> nome;
    }

    if (ehNumero(nome) = false) {
        nomeJogador.push_back(nome);
        std::cout << "Nome adicionado com sucesso!\n";
    }

}


void DadosJogador:: AdicionarJogo(){

    cout << "Qual Jogo o seu jogador joga?" << endl;

    cout <<"1: Counter-Strike."<< endl;

    cout <<"2: League Of Legends."<< endl;

    cout <<"3: Rocket League."<< endl;

    cout <<"4: Minecraft."<< endl;

    std::string jogo;
    std::cout << "Digite o número do jogo a ser adicionado: ";
    std::cin >> jogo;

    while ((jogo<0)||(jogo>4)){
        std::cout << "Jogo Inválido";
        std::cout << "Digite o jogo a ser adicionado: ";
        std::cin >> jogo;
    }

    if (jogo==1){
        jogo= "Counter-Strike";
    }
    if (jogo==2){
        jogo= "League Of Legends";
    }
    if (jogo==3){
        jogo= "Rocket League";
    }
    if (jogo==4){
        jogo= "Minecraft";
    }
}



void DadosJogador:: AdicionarIdade(){

    std::int idade;
    std::cout << "Qual a idade do seu jogador?";
    std::cin >> idade;

    while ((idade<=0)||(idade>120)){
        std::cout << "Idade Inválida";
        std::cout << "Insira novamente a idade: ";
        std::cin >> idade;
    }
}

void DadosJogador:: AdicionarNacio(){

    std::string nacio;
    std::cout << "Qual a nacionalidade do seu jogador?";
    std::cin >> nacio;

}
