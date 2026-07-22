#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Carta 1
  char estado;
  char codigo_da_carta[10];
  char nome_da_cidade[50];
  int populacao;
  float area; // km^2
  float pib;
  int num_pontos_turisticos;

  // Carta 2
  char estado2;
  char codigo_da_carta2[10];
  char nome_da_cidade2[50];
  int populacao2;
  float area2; // km^2
  float pib2;
  int num_pontos_turisticos2;

  // Área para entrada de dados
  // Carta 1
  printf("Carta 1:\n");

  printf("Informe uma letra de A a H (representa um dos oito estados): ");
  scanf(" %c", &estado);

  printf("Informe o código da carta (letra do estado mais um número de 01 a 04): ");
  scanf("%s", codigo_da_carta);

  getchar();

  printf("Informe o nome da cidade: ");
  fgets(nome_da_cidade, 50, stdin);
  nome_da_cidade[strcspn(nome_da_cidade, "\n")] = 0;

  printf("Informe o número de habitantes (ex: 12325000): ");
  scanf("%d", &populacao);

  printf("Informe a área da cidade (km^2): ");
  scanf("%f", &area);

  printf("Informe o PIB: ");
  scanf("%f", &pib);

  printf("Informe a quantidade de pontos turísticos: ");
  scanf("%d", &num_pontos_turisticos);

  // Carta 2
  printf("\nCarta 2:\n");

  printf("Informe uma letra de A a H (representa um dos oito estados): ");
  scanf(" %c", &estado2);

  printf("Informe o código da carta (letra do estado mais um número de 01 a 04): ");
  scanf("%s", codigo_da_carta2);

  getchar();

  printf("Informe o nome da cidade: ");
  fgets(nome_da_cidade2, 50, stdin);
  nome_da_cidade2[strcspn(nome_da_cidade2, "\n")] = 0;

  printf("Informe o número de habitantes (ex: 12325000): ");
  scanf("%d", &populacao2);

  printf("Informe a área da cidade (km^2): ");
  scanf("%f", &area2);

  printf("Informe o PIB: ");
  scanf("%f", &pib2);

  printf("Informe a quantidade de pontos turísticos: ");
  scanf("%d", &num_pontos_turisticos2);

  // Área para exibição dos dados da cidade
  // Carta 1
  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado);
  printf("Código: %s\n", codigo_da_carta);
  printf("Nome da Cidade: %s\n", nome_da_cidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bilhões de reais\n", pib);
  printf("Número de Pontos Turísticos: %d\n", num_pontos_turisticos);

  // Carta 2
  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo_da_carta2);
  printf("Nome da Cidade: %s\n", nome_da_cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", num_pontos_turisticos2);

return 0;
} 
