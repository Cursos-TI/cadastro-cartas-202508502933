#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  // Carta 1
  char estado1;
  char codigo1[4];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontos1;

  // Carta 2
  char estado2;
  char codigo2[4];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontos2;

  // Área para entrada de dados

  printf("=== Super Trunfo - Nível Novato ===\n\n");
  printf("Carta 1:\n");
  printf("Informe o Estado (A-H): ");
  scanf(" %c", &estado1);
  printf("Informe o Codigo (ex.: A01): ");
  scanf(" %3s", codigo1);
  printf("Informe o Nome da Cidade: ");
  scanf(" %49[^\n]", cidade1);
  printf("Informe a Populacao: ");
  scanf("%d", &populacao1);
  printf("Informe a Area (km2): ");
  scanf("%f", &area1);
  printf("Informe o PIB: ");
  scanf("%f", &pib1);
  printf("Informe o Numero de Pontos Turisticos: ");
  scanf("%d", &pontos1);

  printf("\nCarta 2:\n");
  printf("Informe o Estado (A-H): ");
  scanf(" %c", &estado2);
  printf("Informe o Codigo (ex.: B02): ");
  scanf(" %3s", codigo2);
  printf("Informe o Nome da Cidade: ");
  scanf(" %49[^\n]", cidade2);
  printf("Informe a Populacao: ");
  scanf("%d", &populacao2);
  printf("Informe a Area (km2): ");
  scanf("%f", &area2);
  printf("Informe o PIB: ");
  scanf("%f", &pib2);
  printf("Informe o Numero de Pontos Turisticos: ");
  scanf("%d", &pontos2);
  
  // Área para exibição dos dados da cidade
  printf("\n\n=== Cartas Cadastradas ===\n");

  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f km²\n", area1);
  printf("PIB: %.2f bilhoes de reais\n", pib1);
  printf("Numero de Pontos Turisticos: %d\n", pontos1);

  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f km²\n", area2);
  printf("PIB: %.2f bilhoes de reais\n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", pontos2);

  return 0;
} 
