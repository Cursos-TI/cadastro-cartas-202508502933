/*
  Desafio — Nível Novato: Movimentando as Peças do Xadrez
  Objetivo: simular os movimentos de Torre, Bispo e Rainha usando for, while e do-while.
  Regras de saída: imprimir a direção a cada casa percorrida.
  Tipos: apenas inteiros e strings (literais em printf).
*/

#include <stdio.h>

int main(void) {
    /* Quantidade de casas para cada peça (definidas no código, sem entrada do usuário) */
    const int passos_torre  = 5;  /* Torre: 5 para a Direita */
    const int passos_bispo  = 5;  /* Bispo: 5 na diagonal Cima Direita */
    const int passos_rainha = 8;  /* Rainha: 8 para a Esquerda */

    /* -------------------- TORRE (for) -------------------- */
    printf("Movimento da Torre (for):\n");
    for (int i = 0; i < passos_torre; i++) {
        /* Torre move em linha reta: aqui simulamos p/ Direita */
        printf("Direita\n");
    }

    /* -------------------- BISPO (while) ------------------- */
    printf("\nMovimento do Bispo (while):\n");
    int j = 0;
    while (j < passos_bispo) {
        /* Bispo move na diagonal: aqui simulamos Cima + Direita */
        printf("Cima Direita\n");
        j++;
    }

    /* -------------------- RAINHA (do-while) --------------- */
    printf("\nMovimento da Rainha (do-while):\n");
    int k = 0;
    do {
        /* Rainha pode ir em qualquer direção: aqui simulamos para a Esquerda */
        printf("Esquerda\n");
        k++;
    } while (k < passos_rainha);

    return 0;
}
