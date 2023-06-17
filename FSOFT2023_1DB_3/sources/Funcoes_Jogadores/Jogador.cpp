#include <string>
#include "../headers/Funcoes_Jogadores/Jogador.h"
#include <iostream>
#include <limits>
#include <algorithm>
#include <Menu.h>
#include <random>
#include <vector>
#include <fstream>

using namespace std;
int opcao = 0;
int opcaoP = 0;

void DadosJogador::menuj() {
    int k=3;
    if (k==3){
        MakeJogadorCs();
        MakeJogadorLOL();
        MakeJogadorM();
        MakeJogadorRL();
        k=21;
    }

    cout << "Deseja: \n";
    cout << "1- Adicionar um jogador \n";
    cout << "2- Remover um jogador \n";
    cout << "3- Ver os jogadores adicionados \n";
    cout << "0- Retornar ao menu \n";
    cout << "Opcao:";
    cin >> opcaoP;

    while (opcaoP != 1 && opcaoP !=2 && opcaoP !=3 && opcaoP !=0) {
        cout << "Opcao invalida.\n";
        cout << "Deseja: \n";
        cout << "1- Adicionar um jogador \n";
        cout << "2- Remover um jogador \n";
        cout << "3- Ver os jogadores adicionados \n";
        cout << "0- Retornar ao menu \n";
        cout << "Opcao:";


        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cin >> opcaoP;
    }
    switch (opcaoP) {
        case 1:{
            AdicionarJogo();
            break;
        }
        case 2:{
            RemoveAll();
            break;
        }
        case 3:{
            VerNomes();
            break;
        }
        case 0:{
            menu();
            break;
        }

    }
}

bool ehNumero(const std::string& texto) {
    for (char c : texto) {
        if (!std::isdigit(c)) {
            return false; // texto contém pelo menos um caractere não numérico
        }
    }

    return true; // texto contém apenas números
}

bool minimocarac(const std::string& texto){
    if (texto.length() < 3) {
        return false; // texto tem menos de 3 caracteres
    }
    else{
        return true;
    }

}

bool VerificarNacionalidadeValida(const std::string& nacio) {
    for (char c : nacio) {
        if (!isalpha(c)) {
            return false;
        }
    }
    return true;
}

void DadosJogador::AdicionarJogo() {
    int jogo = 0;
    cout << "Escolha o Jogo:\n" << endl;
    cout << "1- League Of Legends.\n" << endl;
    cout << "2- Counter-Strike\n" << endl;
    cout << "3- Rocket League.\n" << endl;
    cout << "4- Minecraft.\n" << endl;
    cout << "0- Sair.\n" << endl;

    cout << "Digite o numero do jogo a ser adicionado: ";
    cin >> jogo;

    while (jogo != 1 && jogo !=2 && jogo !=3 && jogo !=4 && jogo !=0) {
        cout << "Jogo Invalido\n";
        cout << "Digite uma opcao valida: ";

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cin >> jogo;
    }

    switch (jogo) {
        case 1:
            opcao = 1;
            AdicionarNome();
            break;
        case 2:
            opcao = 2;
            AdicionarNome();
            break;
        case 3:
            opcao = 3;
            AdicionarNome();
            break;
        case 4:
            opcao = 4;
            AdicionarNome();
            break;
        case 5:
            opcao = 5;
            menuj();
            break;
        default:
            // Caso seja necessário tratar algum outro valor
            break;
    }
}

void DadosJogador:: AdicionarNome(){
    std::string nome;
    nome = "Nome";
    std::cout << "Digite o nome a ser adicionado: ";
    std::cin >> nome;

    while (ehNumero(nome) == true) {
        std::cout << "Nome Invalido! Deve ter pelo menos um caractere que nao seja um numero!\n";
        std::cout << "Digite o nome a ser adicionado: ";
        std::cin >> nome;
        ehNumero(nome);
        minimocarac(nome);
    }

    while (minimocarac(nome) == false) {
        std::cout << "Nome Invalido! Deve ter pelo menos 3 caracteres!\n";
        std::cout << "Digite o nome a ser adicionado: ";
        std::cin >> nome;
        ehNumero(nome);
        minimocarac(nome);
    }

    switch (opcao) {
        case 1:
            NomeLOL.push_back(nome);
            std::cout << "Nome adicionado com sucesso!\n";
            AdicionarIdade();
            break;

        case 2:
            NomeCs.push_back(nome);
            std::cout << "Nome adicionado com sucesso!\n";
            AdicionarIdade();
            break;

        case 3:
            NomeRL.push_back(nome);
            std::cout << "Nome adicionado com sucesso!\n";
            AdicionarIdade();
            break;

        case 4:
            NomeM.push_back(nome);
            std::cout << "Nome adicionado com sucesso!\n";
            AdicionarIdade();
            break;

        default:
            std::cout << "Opção invalida!\n";
            break;
    }

}

void DadosJogador:: AdicionarIdade() {
    int idade = 0;
    std::cout << "Qual a idade do seu jogador?\n";
    std::cout << "Idade: ";
    std::cin >> idade;

    while (idade <= 0 || idade > 120) {
        while (!(std::cin >> idade)) {
            std::cout << "Idade Invalida. Insira novamente a idade: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    switch (opcao) {
        case 1:
            std::cout << "Idade inserida com sucesso!\n";
            idadeLOL.push_back(idade);
            AdicionarNacio();
            break;

        case 2:
            std::cout << "Idade inserida com sucesso!\n";
            idadeCs.push_back(idade);
            AdicionarNacio();
            break;

        case 3:
            std::cout << "Idade inserida com sucesso!\n";
            idadeRL.push_back(idade);
            AdicionarNacio();
            break;

        case 4:
            std::cout << "Idade inserida com sucesso!\n";
            idadeM.push_back(idade);
            AdicionarNacio();
            break;

        default:
            std::cout << "Opção invalida!\n";
            break;
    }

    AdicionarNacio();
}

void DadosJogador::AdicionarNacio() {
    std::string nacio;
    std::cout << "Qual a nacionalidade do seu jogador?\n";
    std::cout << "Nacionalidade: ";
    std::cin >> nacio;

    while (!VerificarNacionalidadeValida(nacio)) {
        std::cout << "Nacionalidade Invalida. Insira novamente a Nacionalidade: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> nacio;
    }

    switch (opcao) {
        case 1: {
            std::cout << "Nacionalidade inserida com sucesso!\n";
            nacioLOL.push_back(nacio);
            menuj();
            break;
        }
        case 2: {
            std::cout << "Nacionalidade inserida com sucesso!\n";
            nacioCs.push_back(nacio);
            menuj();
            break;
        }
        case 3: {
            std::cout << "Nacionalidade inserida com sucesso!\n";
            nacioRL.push_back(nacio);
            menuj();
            break;
        }
        case 4: {
            std::cout << "Nacionalidade inserida com sucesso!\n";
            nacioM.push_back(nacio);
            menuj();
            break;
        }
        default:
            std::cout << "Opção Invalida!\n";
            break;
    }
}

void DadosJogador::VerNomes() {





    std::cout << "Escolha o jogo:\n";
    std::cout << "1- League of Legends\n";
    std::cout << "2- Counter-Strike\n";
    std::cout << "3- Rocket League\n";
    std::cout << "4- Minecraft\n";
    std::cout << "0- Sair.\n";
    std::cout << "Opcao: ";
    int jogoEscolhido;
    std::cin >> jogoEscolhido;

    while (jogoEscolhido != 1 && jogoEscolhido !=2 && jogoEscolhido !=3 && jogoEscolhido !=4 && jogoEscolhido !=0) {
        cout << "Opcao invalida.\n";
        std::cout << "Escolha o jogo:\n";
        std::cout << "1- League of Legends\n";
        std::cout << "2- Counter-Strike\n";
        std::cout << "3- Rocket League\n";
        std::cout << "4- Minecraft\n";
        std::cout << "0- Sair.\n";
        std::cout << "Opcao: ";


        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cin >> jogoEscolhido;
    }

    switch (jogoEscolhido) {
        case 1: {
            if (!NomeLOL.empty()) {
                std::cout << "Nomes adicionados no League of Legends:\n";
                for (size_t i = 0; i < NomeLOL.size(); i++) {
                    std::cout << "Nome: " << NomeLOL[i] << ", Idade: " << idadeLOL[i] << ", Nacionalidade: " << nacioLOL[i] << std::endl;
                }
            } else {
                std::cout << "Nenhum nome adicionado no League of Legends.\n";
            }
            break;
        }

        case 2: {
            if (!NomeCs.empty()) {
                std::cout << "Nomes adicionados no Counter-Strike:\n";
                for (size_t i = 0; i < NomeCs.size(); i++) {
                    std::cout << "Nome: " << NomeCs[i] << ", Idade: " << idadeCs[i] << ", Nacionalidade: " << nacioCs[i] << std::endl;
                }
            } else {
                std::cout << "Nenhum nome adicionado no Counter-Strike.\n";
            }
            break;
        }

        case 3: {
            if (!NomeRL.empty()) {
                std::cout << "Nomes adicionados no Rocket League:\n";
                for (size_t i = 0; i < NomeRL.size(); i++) {
                    std::cout << "Nome: " << NomeRL[i] << ", Idade: " << idadeRL[i] << ", Nacionalidade: " << nacioRL[i] << std::endl;
                }
            } else {
                std::cout << "Nenhum nome adicionado no Rocket League.\n";
            }
            break;
        }

        case 4: {
            if (!NomeM.empty()) {
                std::cout << "Nomes adicionados no Minecraft:\n";
                for (size_t i = 0; i < NomeM.size(); i++) {
                    std::cout << "Nome: " << NomeM[i] << ", Idade: " << idadeM[i] << ", Nacionalidade: " << nacioM[i] << std::endl;
                }
            } else {
                std::cout << "Nenhum nome adicionado no Minecraft.\n";
            }
            break;
        }

        case 0: {

            menuj();
            break;
        }

        default:
            std::cout << "Opçao Invalida!\n";
            break;
    }
    menuj();
}

void DadosJogador::RemoveAll() {
    std::cout << "Escolha o jogo:\n";
    std::cout << "1- League of Legends\n";
    std::cout << "2- Counter-Strike\n";
    std::cout << "3- Rocket League\n";
    std::cout << "4- Minecraft\n";
    std::cout << "0- Sair.\n";
    std::cout << "Opcao: ";
    int jogoEscolhido;
    std::cin >> jogoEscolhido;

    switch (jogoEscolhido) {
        case 1:
            if (!NomeLOL.empty()) {
                std::cout << "Escolha o numero do nome que deseja remover:\n";
                for (size_t i = 0; i < NomeLOL.size(); i++) {
                    std::cout << i + 1 << ". " << NomeLOL[i] << "\n";
                }

                int nomeRemover;
                std::cin >> nomeRemover;

                if (nomeRemover >= 1 && nomeRemover <= NomeLOL.size()) {
                    NomeLOL.erase(NomeLOL.begin() + nomeRemover - 1);
                    idadeLOL.erase(idadeLOL.begin() + nomeRemover - 1);
                    nacioLOL.erase(nacioLOL.begin() + nomeRemover - 1);
                    std::cout << "Nome, idade e nacionalidade removidos com sucesso!\n";
                } else {
                    std::cout << "Numero de nome invalido.\n";
                }
            } else {
                std::cout << "Nao ha nomes para remover nesta lista.\n";
            }
            break;

        case 2:
            if (!NomeCs.empty()) {
                std::cout << "Escolha o numero do nome que deseja remover:\n";
                for (size_t i = 0; i < NomeCs.size(); i++) {
                    std::cout << i + 1 << ". " << NomeCs[i] << "\n";
                }

                int nomeRemover;
                std::cin >> nomeRemover;

                if (nomeRemover >= 1 && nomeRemover <= NomeCs.size()) {
                    NomeCs.erase(NomeCs.begin() + nomeRemover - 1);
                    idadeCs.erase(idadeCs.begin() + nomeRemover - 1);
                    nacioCs.erase(nacioCs.begin() + nomeRemover - 1);
                    std::cout << "Nome, idade e nacionalidade removidos com sucesso!\n";
                } else {
                    std::cout << "Numero de nome Invalido.\n";
                }
            } else {
                std::cout << "Nao ha nomes para remover nesta lista.\n";
            }
            break;

        case 3:
            if (!NomeRL.empty()) {
                std::cout << "Escolha o numero do nome que deseja remover:\n";
                for (size_t i = 0; i < NomeRL.size(); i++) {
                    std::cout << i + 1 << ". " << NomeRL[i] << "\n";
                }

                int nomeRemover;
                std::cin >> nomeRemover;

                if (nomeRemover >= 1 && nomeRemover <= NomeRL.size()) {
                    NomeRL.erase(NomeRL.begin() + nomeRemover - 1);
                    idadeRL.erase(idadeRL.begin() + nomeRemover - 1);
                    nacioRL.erase(nacioRL.begin() + nomeRemover - 1);
                    std::cout << "Nome, idade e nacionalidade removidos com sucesso!\n";
                } else {
                    std::cout << "Numero de nome Invalido.\n";
                }
            } else {
                std::cout << "Nao ha nomes para remover nesta lista.\n";
            }
            break;

        case 4:
            if (!NomeM.empty()) {
                std::cout << "Escolha o numero do nome que deseja remover:\n";
                for (size_t i = 0; i < NomeM.size(); i++) {
                    std::cout << i + 1 << ". " << NomeM[i] << "\n";
                }

                int nomeRemover;
                std::cin >> nomeRemover;

                if (nomeRemover >= 1 && nomeRemover <= NomeM.size()) {
                    NomeM.erase(NomeM.begin() + nomeRemover - 1);
                    idadeM.erase(idadeM.begin() + nomeRemover - 1);
                    nacioM.erase(nacioM.begin() + nomeRemover - 1);
                    std::cout << "Nome, idade e nacionalidade removidos com sucesso!\n";
                } else {
                    std::cout << "Numero de nome Invalido.\n";
                }
            } else {
                std::cout << "Nao ha nomes para remover nesta lista.\n";
            }
            break;

        case 0:
            menuj();

        default:
            std::cout << "Opcao Invalida!\n";
            break;
    }

    menuj();
}






void DadosJogador::MakeJogadorCs() {
    int i;

    for (i=0;i<15;i++) {
        std::vector<std::string> nomes = {"Alex", "Andre", "John", "Diogo", "Ivo", "Ricardo", "Vital", "Jack", "Joana",
                                          "Jane", "Pablo", "Joao", "Kevin", "Lionel", "Henry", "Paul", "Antony","Alexander","Jacob","Leon","Nico","Enzo","Francesco","Lea","Mayara","Lucia","Emily","Pedro"};
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(0, nomes.size() - 1);
        std::string novo_nome = nomes[dis(gen)];
        NomeCs.push_back(novo_nome);


        std::vector<std::string> nacionalidade = {"Argentina", "Portugal", "França", "Alemanha", "Espanha", "Russia",
                                                  "Ucrania", "Angola", "Brasil", "CHINA", "EUA", "Coreia do Norte"};
        std::random_device rd2;
        std::mt19937 gen2(rd2());
        std::uniform_int_distribution<> dis2(0, nacionalidade.size() - 1);
        std::string novo_nacio = nacionalidade[dis2(gen2)];
        nacioCs.push_back(novo_nacio);


        std::random_device rd3;
        std::mt19937 gen3(rd3());
        std::uniform_int_distribution<> dis3(6, 50);
        int idade = dis3(gen3);
        idadeCs.push_back(idade);
    }

}


void DadosJogador::MakeJogadorLOL() {
    int i;

    for (i=0;i<15;i++) {
        std::vector<std::string> nomes = {"Alex", "Andre", "John", "Diogo", "Ivo", "Ricardo", "Vital", "Jack", "Joana",
                                          "Jane", "Pablo", "Joao", "Kevin", "Lionel", "Henry", "Paul", "Antony","Alexander","Jacob","Leon","Nico","Enzo","Francesco","Lea","Mayara","Lucia","Emily","Pedro"};
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(0, nomes.size() - 1);
        std::string novo_nome = nomes[dis(gen)];
        NomeLOL.push_back(novo_nome);


        std::vector<std::string> nacionalidade = {"Argentina", "Portugal", "França", "Alemanha", "Espanha", "Russia",
                                                  "Ucrania", "Angola", "Brasil", "CHINA", "EUA", "Coreia do Norte"};
        std::random_device rd2;
        std::mt19937 gen2(rd2());
        std::uniform_int_distribution<> dis2(0, nacionalidade.size() - 1);
        std::string novo_nacio = nacionalidade[dis2(gen2)];
        nacioLOL.push_back(novo_nacio);


        std::random_device rd3;
        std::mt19937 gen3(rd3());
        std::uniform_int_distribution<> dis3(14, 50);
        int idade = dis3(gen3);
        idadeLOL.push_back(idade);
    }

}


void DadosJogador::MakeJogadorRL() {
    int i;

    for (i=0;i<15;i++) {
        std::vector<std::string> nomes = {"Alex", "Andre", "John", "Diogo", "Ivo", "Ricardo", "Vital", "Jack", "Joana",
                                          "Jane", "Pablo", "Joao", "Kevin", "Lionel", "Henry", "Paul", "Antony","Alexander","Jacob","Leon","Nico","Enzo","Francesco","Lea","Mayara","Lucia","Emily","Pedro"};
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(0, nomes.size() - 1);
        std::string novo_nome = nomes[dis(gen)];
        NomeRL.push_back(novo_nome);


        std::vector<std::string> nacionalidade = {"Argentina", "Portugal", "França", "Alemanha", "Espanha", "Russia",
                                                  "Ucrania", "Angola", "Brasil", "CHINA", "EUA", "Coreia do Norte"};
        std::random_device rd2;
        std::mt19937 gen2(rd2());
        std::uniform_int_distribution<> dis2(0, nacionalidade.size() - 1);
        std::string novo_nacio = nacionalidade[dis2(gen2)];
        nacioRL.push_back(novo_nacio);


        std::random_device rd3;
        std::mt19937 gen3(rd3());
        std::uniform_int_distribution<> dis3(5, 21);
        int idade = dis3(gen3);
        idadeRL.push_back(idade);
    }

}

void DadosJogador::MakeJogadorM() {
    int i;

    for (i=0;i<15;i++) {
        std::vector<std::string> nomes = {"Alex", "Andre", "John", "Diogo", "Ivo", "Ricardo", "Vital", "Jack", "Joana",
                                          "Jane", "Pablo", "Joao", "Kevin", "Lionel", "Henry", "Paul", "Antony","Alexander","Jacob","Leon","Nico","Enzo","Francesco","Lea","Mayara","Lucia","Emily","Pedro"};
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(0, nomes.size() - 1);
        std::string novo_nome = nomes[dis(gen)];
        NomeM.push_back(novo_nome);


        std::vector<std::string> nacionalidade = {"Argentina", "Portugal", "França", "Alemanha", "Espanha", "Russia",
                                                  "Ucrania", "Angola", "Brasil", "CHINA", "EUA", "Coreia do Norte"};
        std::random_device rd2;
        std::mt19937 gen2(rd2());
        std::uniform_int_distribution<> dis2(0, nacionalidade.size() - 1);
        std::string novo_nacio = nacionalidade[dis2(gen2)];
        nacioM.push_back(novo_nacio);


        std::random_device rd3;
        std::mt19937 gen3(rd3());
        std::uniform_int_distribution<> dis3(8, 32);
        int idade = dis3(gen3);
        idadeM.push_back(idade);
    }

}