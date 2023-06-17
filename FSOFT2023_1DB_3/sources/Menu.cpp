#include <iostream>
#include <algorithm>
#include "menu.h"
#include "../headers/Funcoes_Jogadores/Jogador.h"
#include "../headers/Funcoes_Jogadores/equipa.h"
#include "../headers/Jogos_Stats/Jogos_CS.h"
#include "../headers/Jogos_Stats/Jogos_RL.h"
#include "../headers/Jogos_Stats/Jogos_LOL.h"
#include "../headers/Jogo_Especial_Stat/Jogo_Especial_MN.h"
#include <limits>

void menu() {
    int opcao=0;
    int jogo=0;
    int dados=0;
    int special=0;


    do {
        opcao=0;
        jogo=0;
        dados=0;
        special=0;
        std::cout << "Menu Principal\n";
        std::cout << "1: Jogadores\n";
        std::cout << "2: Equipas\n";
        std::cout << "3: Ver estatisticas\n";
        std::cout << "0: Sair\n";
        std::cout << "Opcao: ";


        while (!(std::cin >> opcao)) {
            std::cout << "Entrada invalida. Digite um numero valido: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        switch (opcao) {
            case 1: {
                opcao=0;
                jogo=0;
                dados=0;
                special=0;
                DadosJogador dadosJogador;
                dadosJogador.menuj();
                break;
            }

            case 2: {
                opcao=0;
                jogo=0;
                dados=0;
                special=0;

                menueq();
                break;
            }

            case 3: {
                opcao=0;
                jogo=0;
                dados=0;
                special=0;
                std::cout << "Deseja ver as estatisticas de qual jogo?\n";
                std::cout << "1: League of Legends\n";
                std::cout << "2: Counter Strike Global Offensive\n";
                std::cout << "3: Rocket League\n";
                std::cout << "4: Minecraft\n";
                std::cout << "0: Retornar\n";
                std::cout << "Opcao: ";
                std::cin >> jogo;

                while (jogo != 1 && jogo !=2 && jogo !=0 && jogo !=3 && jogo !=4) {
                    std::cout << "Entrada invalida.\n";
                    std::cout << "1: League of Legends\n";
                    std::cout << "2: Counter Strike Global Offensive\n";
                    std::cout << "3: Rocket League\n";
                    std::cout << "4: Minecraft\n";
                    std::cout << "0: Retornar\n";
                    std::cout << "Opcao: ";
                    std::cin >> jogo;
                }

                switch (jogo) {
                    case 1: {
                        std::cout << "O que quer ver?\n";
                        std::cout << "1: Dados do Jogo\n";
                        std::cout << "2: Dados sobre Torneios\n";
                        std::cout << "0: Sair.\n";
                        std::cout << "Opcao: ";
                        std::cin >> dados;
                        while (dados != 1 && dados != 2 && dados != 0) {
                            std::cout << "Opcao invalida!\n";
                            std::cout << "O que quer ver?\n";
                            std::cout << "1: Dados do Jogo\n";
                            std::cout << "2: Dados sobre Torneios\n";
                            std::cout << "0: Sair.\n";
                            std::cout << "Opcao: ";
                            std::cin >> dados;
                        }
                        switch (dados) {
                            case 1: {
                                JogoLOL LOL;
                                LOL.dadosLOL();
                                menu();
                                break;

                            }
                            case 2: {
                                JogoLOL LOL;
                                LOL.printLOL();
                                menu();
                                break;

                            }
                            case 0: {
                                menu();
                                break;
                            }
                        }
                    }

                    case 3: {

                        std::cout << "O que quer ver?\n";
                        std::cout << "1: Dados do Jogo\n";
                        std::cout << "2: Dados sobre Torneios\n";
                        std::cout << "0: Sair.\n";
                        std::cout << "Opcao: ";
                        int dados;
                        std::cin >> dados;
                        while (dados != 1 && dados !=2 && dados !=0 ){
                            std::cout << "Opcao invalida!\n";
                            std::cout << "O que quer ver?\n";
                            std::cout << "1: Dados do Jogo\n";
                            std::cout << "2: Dados sobre Torneios\n";
                            std::cout << "0: Sair.\n";
                            std::cout << "Opcao: ";
                            std::cin >> dados;
                        }
                        switch (dados){
                            case 1:{
                                JogoRl RL;
                                RL.dadosRl();
                                menu();
                                break;

                            }
                            case 2:{
                                JogoRl RL;
                                RL.printRl(); // Chamar a função para mostrar os dados de Counter Strike
                                menu();
                                break;

                            }
                            case 0:{
                                menu();
                                break;
                            }
                        }
                    menu();
                    }

                    case 2: {
                        std::cout << "O que quer ver?\n";
                        std::cout << "1: Dados do Jogo\n";
                        std::cout << "2: Dados sobre Torneios\n";
                        std::cout << "0: Sair.\n";
                        std::cout << "Opcao: ";
                        std::cin >> dados;
                        while (dados != 1 && dados !=2 && dados !=0 ){
                            std::cout << "Opcao invalida!\n";
                            std::cout << "O que quer ver?\n";
                            std::cout << "1: Dados do Jogo\n";
                            std::cout << "2: Dados sobre Torneios\n";
                            std::cout << "0: Sair.\n";
                            std::cout << "Opcao: ";
                            std::cin >> dados;
                        }
                        switch (dados){
                            case 1:{
                                JogoCS Cs;
                                Cs.dadosCS();
                                menu();
                                break;

                            }
                            case 2:{
                                JogoCS Cs;
                                Cs.printCS(); // Chamar a função para mostrar os dados de Counter Strike
                                menu();
                                break;

                            }
                            case 0:{
                                menu();
                                break;
                            }
                        }
                        menu();

                    }

                    case 4: {

                        std::cout << "O que quer ver?\n";
                        std::cout << "1: Dados do Jogo\n";
                        std::cout << "2: Criar Servidor\n";
                        std::cout << "0: Sair.\n";
                        std::cout << "Opcao: ";
                        std::cin >> special;
                        while (special != 1 && special != 2 && special != 0) {
                            std::cout << "Opcao invalida!\n";
                            std::cout << "O que quer ver?\n";
                            std::cout << "1: Dados do Jogo\n";
                            std::cout << "2: Criar Servidor\n";
                            std::cout << "0: Sair.\n";
                            std::cout << "Opcao: ";
                            std::cin >> special;
                        }
                        switch (special) {
                            case 1: {
                                Stat_MN();
                                menu();
                                break;

                            }
                            case 2: {
                                std::cout <<"Servidor em Manutencao, Volte mais tarde!\n";
                                break;

                            }
                            case 0: {
                                menu();
                                break;
                            }
                        }
                        menu();
                    }

                    case 0: {
                        menu();
                        break;

                    }

                    default: {
                        std::cout << "Opção invalida!\n";
                        break;
                    }
                }
                menu();
            }


            default: {
                std::cout << "Opcao invalida!\n";
                menu();
                break;
            }


            case 0: {
                std::cout << "Saindo do programa...\n";
                exit(0);

            }


        }

        std::cout << std::endl;
        break;

    } while (opcao != 0);
}
