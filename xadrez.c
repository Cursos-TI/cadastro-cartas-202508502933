/*
  Desafio – Nível Mestre: Criando Movimentos Complexos (Xadrez)
  Peças: Torre, Bispo, Rainha (recursão) e Cavalo (loops aninhados).
  Extra: Bispo também implementado com loops aninhados (externo=vertical, interno=horizontal).

  Regras de saída: imprimir UMA direção por linha dentre:
    "Cima", "Baixo", "Esquerda", "Direita"
  Usamos linhas em branco para separar a saída de cada peça.
*/

#include <stdio.h>

/* =========================
   Funções recursivas
   ========================= */

/* Torre: move 'passos' vezes para a Direita. */
void mover_torre_direita_rec(int passos) {
    if (passos <= 0) return;          /* caso-base da recursão */
    printf("Direita\n");               /* 1 passo */
    mover_torre_direita_rec(passos - 1); /* chamada recursiva */
}

/* Bispo (diagonal cima-direita): a cada passo, 1x Cima e 1x Direita. */
void mover_bispo_cima_direita_rec(int passos) {
    if (passos <= 0) return;
    printf("Cima\n");
    printf("Direita\n");
    mover_bispo_cima_direita_rec(passos - 1);
}

/* Rainha: move 'passos' vezes para a Esquerda. */
void mover_rainha_esquerda_rec(int passos) {
    if (passos <= 0) return;
    printf("Esquerda\n");
    mover_rainha_esquerda_rec(passos - 1);
}

/* =========================
   Cavalo – loops aninhados (complexos)
   =========================
   Movimento do Cavalo: “L” = 2 passos Cima + 1 passo Direita.
   Abaixo: repetimos esse “L” 'movimentos' vezes.
   Usamos 2 variáveis e 'continue'/'break' no loop interno.
*/
void mover_cavalo_L_loops(int movimentos) {
    for (int m = 0; m < movimentos; m++) {   /* cada iteração = um movimento em L */
        int up = 0, right = 0;

        /* while com múltiplas condições e controle de fluxo */
        while (up < 2 || right < 1) {
            if (up < 2) {
                printf("Cima\n");
                up++;
                continue;  /* volta para o topo do while para completar os 2 "Cima" */
            }

            if (right < 1) {
                printf("Direita\n");
                right++;
                /* Terminamos o "L": up==2 e right==1 -> sai do while */
            } else {
                break;     /* segurança: se já fizemos tudo, encerramos o while */
            }
        }
    }
}

/* =========================
   Bispo – loops aninhados
   =========================
   Externo: vertical (Cima 1x por passo)
   Interno: horizontal (Direita 1x por passo)
   Resultado: diagonal Cima-Direita, 1 para 1, por 'passos' vezes.
*/
void mover_bispo_cima_direita_loops(int passos) {
    for (int v = 0; v < passos; v++) {   /* vertical */
        printf("Cima\n");
        for (int h = 0; h < 1; h++) {    /* horizontal */
            printf("Direita\n");
        }
    }
}

int main(void) {
    /* Quantidades (definidas no código conforme o enunciado) */
    const int passos_torre  = 5;  /* Torre: 5 Direita */
    const int passos_bispo  = 5;  /* Bispo: 5 diagonal Cima-Direita */
    const int passos_rainha = 8;  /* Rainha: 8 Esquerda */
    const int movs_cavalo   = 3;  /* Cavalo: repete 3 vezes o “L” (2×Cima + 1×Direita) */

    /* -------- TORRE (recursão) -------- */
    printf("Movimento da Torre (recursao):\n");
    mover_torre_direita_rec(passos_torre);

    /* linha em branco para separar seções */
    printf("\n");

    /* -------- BISPO (recursão) -------- */
    printf("Movimento do Bispo (recursao, diagonal Cima-Direita):\n");
    mover_bispo_cima_direita_rec(passos_bispo);

    printf("\n");

    /* -------- RAINHA (recursão) -------- */
    printf("Movimento da Rainha (recursao):\n");
    mover_rainha_esquerda_rec(passos_rainha);

    printf("\n");

    /* -------- CAVALO (loops aninhados complexos) -------- */
    printf("Movimento do Cavalo (loops aninhados - L: 2x Cima + 1x Direita):\n");
    mover_cavalo_L_loops(movs_cavalo);

    printf("\n");

    /* -------- BISPO (loops aninhados) -------- */
    printf("Movimento do Bispo (loops aninhados - externo=vertical, interno=horizontal):\n");
    mover_bispo_cima_direita_loops(passos_bispo);

    return 0;
}
