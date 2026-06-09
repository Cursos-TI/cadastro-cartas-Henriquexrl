#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
// Área para definição das variáveis para armazenar as propriedades das cidades
char estado;
char codigo[4];
char nomeCidade[50];
int populacao;
float area;
float pib;
int numero_pontos_turisticos;
  
// Área para entrada de dados
  printf("Digite o estado (A-H): ");
    scanf(" %c", &estado);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade);

    printf("Digite a populacao: ");
    scanf("%d", &populacao);

    printf("Digite a area: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &numero_pontos_turisticos);

  // Área para exibição dos dados da cidade
  printf("\n--- CARTA CADASTRADA ---\n");
  printf("Estado: %c\n", estado);
  printf("Codigo: %s\n", codigo);
  printf("Cidade: %s\n", nomeCidade);
  printf("Populacao: %d\n", populacao);
  printf("Area: %.2f km²\n", area);
  printf("PIB: %.2f\n", pib);
  printf("Numero de pontos turisticos: %d\n", numero_pontos_turisticos);


return 0;
} 
