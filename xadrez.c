#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    printf("2º Desafio MateCheck - Movimentação das Peças\n\n");

    int BISPO_MOV = 5;
    int TORRE_MOV = 5;
    int RAINHA_MOV = 8;

    // Implementação de Movimentação do Bispo - 5 casas na diagonal superior direita
    printf("Movimentação do Bispo:\n");
    for (int i = 0; i < BISPO_MOV; i++) {
        printf("Diagonal superior direita\n");
    }

    // Implementação de Movimentação d
