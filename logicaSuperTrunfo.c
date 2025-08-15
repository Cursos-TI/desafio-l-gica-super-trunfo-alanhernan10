#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
        // --- Definição das variáveis para a Carta 1 ---
    char estado1[3];
    char codigoCarta1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;

    // --- Definição das variáveis para a Carta 2 ---
    char estado2[3];
    char codigoCarta2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    // --- Cadastro das Cartas ---
    
    // Entrada de dados para a Carta 1
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o estado (ex: SP): ");
    scanf("%s", estado1);
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigoCarta1);
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nomeCidade1);
    printf("Digite a populacao (int): ");
    scanf("%d", &populacao1);
    printf("Digite a area (float): ");
    scanf("%f", &area1);
    printf("Digite o PIB (float): ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos (int): ");
    scanf("%d", &pontosTuristicos1);
    
    // Entrada de dados para a Carta 2
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o estado (ex: RJ): ");
    scanf("%s", estado2);
    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigoCarta2);
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nomeCidade2);
    printf("Digite a populacao (int): ");
    scanf("%d", &populacao2);
    printf("Digite a area (float): ");
    scanf("%f", &area2);
    printf("Digite o PIB (float): ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos (int): ");
    scanf("%d", &pontosTuristicos2);

    // --- Cálculos ---
    
    // Calculando densidade populacional e PIB per capita para a Carta 1
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;
    
    // Calculando densidade populacional e PIB per capita para a Carta 2
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    // --- Comparação de Cartas ---
    
    // Escolha do atributo para comparação
    // A comparação será feita com base na população
    printf("\n--- Comparacao de Cartas ---\n");
    printf("Atributo de Comparacao: Populacao\n");
    
    // Lógica de comparação para População
    if (populacao1 > populacao2) {
        printf("\nCarta 1 (%s - %s) venceu!\n", nomeCidade1, estado1);
        printf("Valores: %d > %d\n", populacao1, populacao2);
    } else if (populacao2 > populacao1) {
        printf("\nCarta 2 (%s - %s) venceu!\n", nomeCidade2, estado2);
        printf("Valores: %d < %d\n", populacao1, populacao2);
    } else {
        printf("\nEmpate!\n");
    }

    // --- Exibição de todos os dados (opcional, para visualização completa) ---
    printf("\n--- Detalhes das Cartas ---\n");
    printf("===================================\n");
    printf("Carta 1:\n");
    printf("  Estado: %s\n", estado1);
    printf("  Codigo: %s\n", codigoCarta1);
    printf("  Nome: %s\n", nomeCidade1);
    printf("  Populacao: %d\n", populacao1);
    printf("  Area: %.2f km²\n", area1);
    printf("  PIB: %.2f bilhoes\n", pib1);
    printf("  Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("  Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("  PIB per Capita: %.2f reais\n", pibPerCapita1);
    
    printf("\n-----------------------------------\n");
    
    printf("Carta 2:\n");
    printf("  Estado: %s\n", estado2);
    printf("  Codigo: %s\n", codigoCarta2);
    printf("  Nome: %s\n", nomeCidade2);
    printf("  Populacao: %d\n", populacao2);
    printf("  Area: %.2f km²\n", area2);
    printf("  PIB: %.2f bilhoes\n", pib2);
    printf("  Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("  Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("  PIB per Capita: %.2f reais\n", pibPerCapita2);    
   

    return 0;
}
