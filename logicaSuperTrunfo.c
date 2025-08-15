#include <stdio.h>
#include <string.h>

int main() {
    // --- Dados das Cartas (Pré-definidos) ---
    // Carta 1
    char nomePais1[50] = "Brasil";
    int populacao1 = 214000000;
    float area1 = 8515767.0;
    float pib1 = 1.64; // em trilhões de dólares
    int pontosTuristicos1 = 1000;

    // Carta 2
    char nomePais2[50] = "Alemanha";
    int populacao2 = 83000000;
    float area2 = 357588.0;
    float pib2 = 4.26; // em trilhões de dólares
    int pontosTuristicos2 = 800;

    // --- Cálculos de atributos derivados ---
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000000.0) / populacao1;
    
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000000.0) / populacao2;
    
    int escolha;
    
    // --- Menu Interativo ---
    printf("Escolha o atributo para a batalha:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("6 - PIB per Capita\n");
    printf("---------------------------\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);
    
    // --- Estrutura de Decisao com Switch ---
    switch (escolha) {
        case 1: // Comparacao por Populacao
            printf("\nAtributo: Populacao\n");
            printf("Valores: %s (%d) vs %s (%d)\n", nomePais1, populacao1, nomePais2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
            
        case 2: // Comparacao por Area
            printf("\nAtributo: Area\n");
            printf("Valores: %s (%.2f km²) vs %s (%.2f km²)\n", nomePais1, area1, nomePais2, area2);
            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
            
        case 3: // Comparacao por PIB
            printf("\nAtributo: PIB\n");
            printf("Valores: %s (%.2f T$) vs %s (%.2f T$)\n", nomePais1, pib1, nomePais2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
            
        case 4: // Comparacao por Pontos Turisticos
            printf("\nAtributo: Pontos Turisticos\n");
            printf("Valores: %s (%d) vs %s (%d)\n", nomePais1, pontosTuristicos1, nomePais2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
            
        case 5: // Comparacao por Densidade Demografica (menor valor vence)
            printf("\nAtributo: Densidade Demografica\n");
            printf("Valores: %s (%.2f hab/km²) vs %s (%.2f hab/km²)\n", nomePais1, densidade1, nomePais2, densidade2);
            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
            
        case 6: // Comparacao por PIB per Capita
            printf("\nAtributo: PIB per Capita\n");
            printf("Valores: %s (%.2f $) vs %s (%.2f $)\n", nomePais1, pibPerCapita1, nomePais2, pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2) {
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if (pibPerCapita2 > pibPerCapita1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
            
        default:
            printf("\nEscolha invalida! Por favor, selecione um numero de 1 a 6.\n");
            break;
    }

    return 0;
}