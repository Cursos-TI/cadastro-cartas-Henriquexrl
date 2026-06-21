#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Nível Mestre

int main() {
  
// Área para definição das variáveis para armazenar as propriedades das cidades

// Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
  
// Área para entrada de dados

// Entrada da Carta 1

    printf("=== CARTA 1 ===\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade1);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a area: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);


    // Entrada da Carta 2

    printf("\n=== CARTA 2 ===\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade2);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a area: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);


// Área para cálculo dos dados


// Cálculos Carta 1

    float densidade1 = populacao1 / area1;

    float pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;


// Cálculos Carta 2

    float densidade2 = populacao2 / area2;

    float pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;


// Cálculo do Super Poder

    float superPoder1 = populacao1 + area1 + pib1 +
                        pontosTuristicos1 +
                        pibPerCapita1 +
                        (1.0 / densidade1);


    float superPoder2 = populacao2 + area2 + pib2 +
                        pontosTuristicos2 +
                        pibPerCapita2 +
                        (1.0 / densidade2);


// Área para exibição dos dados da cidade


// Exibição Carta 1

    printf("\n--- CARTA 1 ---\n");

    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);


// Exibição Carta 2

    printf("\n--- CARTA 2 ---\n");

    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);


// Comparação das cartas

    printf("\nComparacao de Cartas:\n\n");


    printf("Populacao: Carta %d venceu (%d)\n",
           (populacao1 > populacao2) ? 1 : 2,
           populacao1 > populacao2);


    printf("Area: Carta %d venceu (%d)\n",
           (area1 > area2) ? 1 : 2,
           area1 > area2);


    printf("PIB: Carta %d venceu (%d)\n",
           (pib1 > pib2) ? 1 : 2,
           pib1 > pib2);


    printf("Pontos Turisticos: Carta %d venceu (%d)\n",
           (pontosTuristicos1 > pontosTuristicos2) ? 1 : 2,
           pontosTuristicos1 > pontosTuristicos2);


    printf("Densidade Populacional: Carta %d venceu (%d)\n",
           (densidade1 < densidade2) ? 1 : 2,
           densidade1 < densidade2);


    printf("PIB per Capita: Carta %d venceu (%d)\n",
           (pibPerCapita1 > pibPerCapita2) ? 1 : 2,
           pibPerCapita1 > pibPerCapita2);


    printf("Super Poder: Carta %d venceu (%d)\n",
           (superPoder1 > superPoder2) ? 1 : 2,
           superPoder1 > superPoder2);


    return 0;

}