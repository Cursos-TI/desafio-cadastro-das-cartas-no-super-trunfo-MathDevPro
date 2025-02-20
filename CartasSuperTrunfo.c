#include <stdio.h>

int main() {
    // Declaração de variáveis para duas cartas
    int pontosturisticos1, populacao1, pontosturisticos2, populacao2;
    char cidade1[50], estado1[3], carta1[3];
    char cidade2[50], estado2[3], carta2[3];
    float area1, pib1, densidadepopulacional1, pibpercapita1;
    float area2, pib2, densidadepopulacional2, pibpercapita2;

    // Entrada de dados para a Carta 1
    printf("---- Cadastro da Carta 1 ----\n");
    printf("Insira uma letra representando um dos oito estados (A a H): ");
    scanf("%2s", estado1);

    printf("Insira o código da carta (01 a 04): ");
    scanf("%2s", carta1);
    
    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area1);

    printf("Insira a quantidade populacional: ");
    scanf("%d", &populacao1);

    printf("Insira o PIB total da cidade: ");
    scanf("%f", &pib1);

    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    // Cálculo da densidade populacional e PIB per capita da Carta 1
    densidadepopulacional1 = (float) populacao1 / area1;
    pibpercapita1 = (float) pib1 / populacao1;

    // Entrada de dados para a Carta 2
    printf("\n---- Cadastro da Carta 2 ----\n");
    printf("Insira uma letra representando um dos oito estados (A a H): ");
    scanf("%2s", estado2);

    printf("Insira o código da carta (01 a 04): ");
    scanf("%2s", carta2);
    
    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area2);

    printf("Insira a quantidade populacional: ");
    scanf("%d", &populacao2);

    printf("Insira o PIB total da cidade: ");
    scanf("%f", &pib2);

    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    // Cálculo da densidade populacional e PIB per capita da Carta 2
    densidadepopulacional2 = (float) populacao2 / area2;
    pibpercapita2 = (float) pib2 / populacao2;

    // Exibir os dados das duas cartas
    printf("\n===== Dados das Cartas =====\n");

    printf("\n----- Dados da Carta 1 -----\n");
    printf("Carta: %s%s\n", estado1, carta1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per capita: R$ %.2f\n", pibpercapita1);

    printf("\n----- Dados da Carta 2 -----\n");
    printf("Carta: %s%s\n", estado2, carta2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per capita: R$ %.2f\n", pibpercapita2);

    return 0;
}
