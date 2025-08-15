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
    
    int escolha1, escolha2;
    
    // --- Menus Dinâmicos e Escolha de Atributos ---

    // Primeiro Atributo
    printf("Escolha o PRIMEIRO atributo para a batalha:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("6 - PIB per Capita\n");
    printf("---------------------------\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha1);
    
    // Validação da primeira escolha
    if (escolha1 < 1 || escolha1 > 6) {
        printf("\nEscolha invalida! Fim do jogo.\n");
        return 1;
    }
    
    // Segundo Atributo (menu dinâmico)
    printf("\nEscolha o SEGUNDO atributo para a batalha:\n");
    printf("As opcoes agora sao:\n");
    if (escolha1 != 1) printf("1 - Populacao\n");
    if (escolha1 != 2) printf("2 - Area\n");
    if (escolha1 != 3) printf("3 - PIB\n");
    if (escolha1 != 4) printf("4 - Pontos Turisticos\n");
    if (escolha1 != 5) printf("5 - Densidade Demografica\n");
    if (escolha1 != 6) printf("6 - PIB per Capita\n");
    printf("---------------------------\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha2);
    
    // Validação da segunda escolha e garantia de atributos diferentes
    if (escolha2 < 1 || escolha2 > 6 || escolha1 == escolha2) {
        printf("\nEscolha invalida ou repetida! Fim do jogo.\n");
        return 1;
    }

    // --- Lógica de Comparação e Soma ---
    float valor1_atributo1, valor2_atributo1;
    float valor1_atributo2, valor2_atributo2;
    float soma1, soma2;
    char nomeAtributo1[30], nomeAtributo2[30];

    // Mapeando valores e nomes dos atributos escolhidos (usando switch aninhado)
    switch (escolha1) {
        case 1: strcpy(nomeAtributo1, "Populacao"); valor1_atributo1 = (float)populacao1; valor2_atributo1 = (float)populacao2; break;
        case 2: strcpy(nomeAtributo1, "Area"); valor1_atributo1 = area1; valor2_atributo1 = area2; break;
        case 3: strcpy(nomeAtributo1, "PIB"); valor1_atributo1 = pib1; valor2_atributo1 = pib2; break;
        case 4: strcpy(nomeAtributo1, "Pontos Turisticos"); valor1_atributo1 = (float)pontosTuristicos1; valor2_atributo1 = (float)pontosTuristicos2; break;
        case 5: strcpy(nomeAtributo1, "Densidade Demografica"); valor1_atributo1 = -densidade1; valor2_atributo1 = -densidade2; break; // Invertendo valores para a comparação
        case 6: strcpy(nomeAtributo1, "PIB per Capita"); valor1_atributo1 = pibPerCapita1; valor2_atributo1 = pibPerCapita2; break;
    }

    switch (escolha2) {
        case 1: strcpy(nomeAtributo2, "Populacao"); valor1_atributo2 = (float)populacao1; valor2_atributo2 = (float)populacao2; break;
        case 2: strcpy(nomeAtributo2, "Area"); valor1_atributo2 = area1; valor2_atributo2 = area2; break;
        case 3: strcpy(nomeAtributo2, "PIB"); valor1_atributo2 = pib1; valor2_atributo2 = pib2; break;
        case 4: strcpy(nomeAtributo2, "Pontos Turisticos"); valor1_atributo2 = (float)pontosTuristicos1; valor2_atributo2 = (float)pontosTuristicos2; break;
        case 5: strcpy(nomeAtributo2, "Densidade Demografica"); valor1_atributo2 = -densidade1; valor2_atributo2 = -densidade2; break; // Invertendo valores para a comparação
        case 6: strcpy(nomeAtributo2, "PIB per Capita"); valor1_atributo2 = pibPerCapita1; valor2_atributo2 = pibPerCapita2; break;
    }
    
    soma1 = valor1_atributo1 + valor1_atributo2;
    soma2 = valor2_atributo1 + valor2_atributo2;

    // --- Exibição do Resultado ---
    printf("\n--- Batalha Final ---\n");
    printf("Comparando os paises %s e %s\n", nomePais1, nomePais2);
    printf("Atributos escolhidos: %s e %s\n\n", nomeAtributo1, nomeAtributo2);

    printf("Resultados dos atributos:\n");
    printf("%s: %s (%.2f) vs %s (%.2f)\n", nomeAtributo1, nomePais1, (escolha1 == 5) ? -valor1_atributo1 : valor1_atributo1, nomePais2, (escolha1 == 5) ? -valor2_atributo1 : valor2_atributo1);
    printf("%s: %s (%.2f) vs %s (%.2f)\n", nomeAtributo2, nomePais1, (escolha2 == 5) ? -valor1_atributo2 : valor1_atributo2, nomePais2, (escolha2 == 5) ? -valor2_atributo2 : valor2_atributo2);
    
    printf("\nSoma dos atributos (Para desempate):\n");
    printf("%s: %.2f\n", nomePais1, soma1);
    printf("%s: %.2f\n", nomePais2, soma2);

    printf("\nResultado Final:\n");
    if (soma1 > soma2) {
        printf("A vitoria e de %s!\n", nomePais1);
    } else if (soma2 > soma1) {
        printf("A vitoria e de %s!\n", nomePais2);
    } else {
        printf("O jogo terminou em um empate!\n");
    }

    return 0;
}