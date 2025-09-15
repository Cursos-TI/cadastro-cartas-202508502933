/*
  Nível Mestre — Batalha de Cartas do Super Trunfo (Países/Cidades)
  - Duas cartas
  - População: unsigned long int
  - Calcula densidade e PIB per capita (float)
  - Super Poder (float) = populacao + area + pib + pontos + pib_per_capita + (1/densidade)
  - Compara atributos: densidade (menor vence), demais (maior vence)
  - Exibe 1 quando a Carta 1 vence e 0 quando a Carta 2 vence

  Nota: sem laços; usando operadores relacionais para produzir 0/1.
*/

#include <stdio.h>

int main(void) {
    /* -------- Carta 1 -------- */
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pibpc1;
    float inv_dens1;
    float super1;

    /* -------- Carta 2 -------- */
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pibpc2;
    float inv_dens2;
    float super2;

    /* -------- Entrada -------- */
    printf("=== Super Trunfo - Nivel Mestre ===\n\n");

    printf("Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo (ex.: A01): ");
    scanf(" %3s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", cidade1);
    printf("Populacao (inteiro, nao negativa): ");
    scanf("%lu", &populacao1);
    printf("Area (km2): ");
    scanf("%f", &area1);
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);

    printf("\nCarta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo (ex.: B02): ");
    scanf(" %3s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", cidade2);
    printf("Populacao (inteiro, nao negativa): ");
    scanf("%lu", &populacao2);
    printf("Area (km2): ");
    scanf("%f", &area2);
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);

    /* -------- Calculos --------
       Assuma area > 0 e populacao > 0 ao testar.
    */
    densidade1 = (float)populacao1 / area1;    /* hab/km² */
    pibpc1     = pib1 / (float)populacao1;     /* reais por pessoa (na mesma escala do PIB) */
    inv_dens1  = 1.0f / densidade1;            /* menor densidade => maior 1/densidade */
    super1     = (float)populacao1 + area1 + pib1 + (float)pontos1 + pibpc1 + inv_dens1;

    densidade2 = (float)populacao2 / area2;
    pibpc2     = pib2 / (float)populacao2;
    inv_dens2  = 1.0f / densidade2;
    super2     = (float)populacao2 + area2 + pib2 + (float)pontos2 + pibpc2 + inv_dens2;

    /* -------- Exibicao dos dados -------- */
    printf("\n\n=== Cartas Cadastradas ===\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km%c\n", area1, 0xB2);  /* ² */
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km%c\n", densidade1, 0xB2);
    printf("PIB per Capita: %.2f reais\n", pibpc1);
    printf("Super Poder: %.2f\n", super1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km%c\n", area2, 0xB2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km%c\n", densidade2, 0xB2);
    printf("PIB per Capita: %.2f reais\n", pibpc2);
    printf("Super Poder: %.2f\n", super2);

    /* -------- Comparacoes (0/1) --------
       Densidade: menor vence  -> (dens1 < dens2)      => 1 se Carta 1 venceu
       Demais:    maior vence  -> (valor1 > valor2)    => 1 se Carta 1 venceu
       A saída segue o formato: "Atributo: Carta 1 venceu (X)" onde X é 1 ou 0
    */
    printf("\n=== Comparacao de Cartas ===\n");
    printf("Populacao: Carta 1 venceu (%d)\n",  (populacao1 > populacao2));
    printf("Area: Carta 1 venceu (%d)\n",        (area1 > area2));
    printf("PIB: Carta 1 venceu (%d)\n",         (pib1 > pib2));
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", (pontos1 > pontos2));
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", (densidade1 < densidade2));
    printf("PIB per Capita: Carta 1 venceu (%d)\n", (pibpc1 > pibpc2));
    printf("Super Poder: Carta 1 venceu (%d)\n", (super1 > super2));

    return 0;
}
