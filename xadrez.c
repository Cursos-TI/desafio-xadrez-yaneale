#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    printf("=== Desafio Xadrez ===\n");

    //TORRE 5 casas para direita
    //Estrutura: While
    int casasTorres = 5, contadorTorre = 0;

    printf("Movimento da Torre: \n");

    while (contadorTorre < casasTorres)
    {
        printf("Direita\n");
        contadorTorre++;
    }
    printf("\n");

    //BISPO 5 casas na diagonal
    //Estrutura: Do-While
    int casasBispo = 5, contadorBispo = 0;

    printf("Movimento do Bispo: \n");
    do
    {
        printf("Cima Direita\n");
        contadorBispo++;
    } while (contadorBispo < casasBispo);
    printf("\n");

    //RAINHA 8 casas para esquerda
    //Estrutura: For
    int casasRainha = 8;
    printf("Movimento da Rainha: \n");
    for (int i = 0; i < casasRainha; i++)
    {
        printf("Esquerda\n");
    }

    return 0;
}
