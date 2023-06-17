#include <iostream>
#include <vector>
#include <algorithm>
#include "../headers/Funcoes_Jogadores/equipa.h"

int jogo = 0;

void CriarEquipa(std::vector<Equipa>& equipas) {
    Equipa equipa;
    std::cout << "Digite o nome da equipa: ";
    std::cin.ignore();  // Limpar o buffer do teclado antes de ler a linha
    std::getline(std::cin, equipa.nome);

    switch (jogo) {
        case 1: {

            std::getline(std::cin, equipa.nomeLol);
            break;
        }
        case 2:

            std::getline(std::cin, equipa.nomeCs);
            break;
        case 3:

            std::getline(std::cin, equipa.nomeRl);
            break;
        default:
            std::cout << "Opção inválida!" << std::endl;

    }

    // Armazena a equipa no vetor de equipas
    equipas.push_back(equipa);

    // Exibe uma mensagem de confirmação
    std::cout << "Equipa criada: " << equipa.nome << std::endl;
}

void RemoverEquipa(std::vector<Equipa>& equipas) {
    int opcao;
    std::cout << "Equipas disponíveis:" << std::endl;
    for (size_t i = 0; i < equipas.size(); i++) {
        std::cout << i + 1 << ". " << equipas[i].nome << std::endl;
    }

    std::cout << "Escolha uma equipa para remover: ";
    std::cin >> opcao;

    if (opcao >= 1 && opcao <= equipas.size()) {
        Equipa equipaRemover = equipas[opcao - 1];

        int jogoRemover;
        std::cout << "Qual jogo está associado à equipa que você deseja remover?" << std::endl;
        std::cout << "1 - League Of Legends" << std::endl;
        std::cout << "2 - Counter Strike Global Offensive" << std::endl;
        std::cout << "3 - Rocket League" << std::endl;
        std::cin >> jogoRemover;

        switch (jogoRemover) {
            case 1:
                equipas.erase(std::remove_if(equipas.begin(), equipas.end(),
                                             [&equipaRemover](const Equipa& equipa) {
                                                 return equipa.nomeLol == equipaRemover.nomeLol;
                                             }), equipas.end());
                break;
            case 2:
                equipas.erase(std::remove_if(equipas.begin(), equipas.end(),
                                             [&equipaRemover](const Equipa& equipa) {
                                                 return equipa.nomeCs == equipaRemover.nomeCs;
                                             }), equipas.end());
                break;
            case 3:
                equipas.erase(std::remove_if(equipas.begin(), equipas.end(),
                                             [&equipaRemover](const Equipa& equipa) {
                                                 return equipa.nomeRl == equipaRemover.nomeRl;
                                             }), equipas.end());
                break;
            default:
                std::cout << "Opção inválida!" << std::endl;
                return;
        }

        std::cout << "Equipa removida com sucesso!" << std::endl;
    } else {
        std::cout << "Opção inválida!" << std::endl;
    }
}

void menuEquipa() {
    std::vector<Equipa> equipas; // Agregué el vector de equipas faltante
    int opcao;
    std::cout << "Menu:" << std::endl;
    std::cout << "1 - Adicionar equipa" << std::endl;
    std::cout << "2 - Remover equipa" << std::endl;
    std::cout << "Escolha uma opcao: ";
    std::cin >> opcao;

    switch (opcao) {
        case 1: {
            std::cout << "Escolha a que jogo pertence a sua equipa:" << std::endl;
            std::cout << "1 - League Of Legends" << std::endl;
            std::cout << "2 - Counter Strike Global Offensive" << std::endl;
            std::cout << "3 - Rocket League" << std::endl;
            std::cin >> jogo;
            CriarEquipa(equipas);
            break;
        }
        case 2:
            RemoverEquipa(equipas);
            break;
        default:
            std::cout << "Opção inválida!" << std::endl;
            break;
    }
}

void menueq() {
    menuEquipa();
}
