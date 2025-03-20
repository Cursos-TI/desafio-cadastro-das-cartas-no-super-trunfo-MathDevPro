#include <stdio.h>

int main() {
    // Declaração de variáveis para duas cartas
    int pontosturisticos1, pontosturisticos2;
    char cidade1[50], estado1[3], carta1[3];
    char cidade2[50], estado2[3], carta2[3];
    float area1, pib1, densidadepopulacional1, pibpercapita1, superpoder1;
    float superpoder2, area2, pib2, densidadepopulacional2, pibpercapita2;
    unsigned long int populacao1, populacao2;

    // Entrada de dados para a Carta 1
    printf("---- Cadastro da Carta 1 ----\n");
    printf("Insira uma letra representando um dos oito estados (A a H): ");
    scanf("%2s", estado1);

    printf("Insira o código da carta (01 a 04): ");
    scanf("%2s", carta1);
    
    printf("Insira o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area1);

    printf("Insira a quantidade populacional: ");
    scanf("%lu", &populacao1);

    printf("Insira o PIB total da cidade: ");
    scanf("%f", &pib1);

    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    // Cálculo da densidade populacional e PIB per capita da Carta 1
    densidadepopulacional1 = (float) populacao1 / area1;
    pibpercapita1 = (float) pib1 / populacao1;

    // Cálculo do Super Poder da Carta 1
    superpoder1 = (float) populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + (1 / densidadepopulacional1);

    // Entrada de dados para a Carta 2
    printf("\n---- Cadastro da Carta 2 ----\n");
    printf("Insira uma letra representando um dos oito estados (A a H): ");
    scanf("%2s", estado2);

    printf("Insira o código da carta (01 a 04): ");
    scanf("%2s", carta2);
    
    printf("Insira o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area2);

    printf("Insira a quantidade populacional: ");
    scanf("%lu", &populacao2);

    printf("Insira o PIB total da cidade: ");
    scanf("%f", &pib2);

    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    // Cálculo da densidade populacional e PIB per capita da Carta 2
    densidadepopulacional2 = (float) populacao2 / area2;
    pibpercapita2 = (float) pib2 / populacao2;

    // Cálculo do Super Poder da Carta 2
    superpoder2 = (float) populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + (1 / densidadepopulacional2);

    // Exibir os dados das duas cartas
    printf("\n===== Dados das Cartas =====\n");

    printf("\n----- Dados da Carta 1 -----\n");
    printf("Carta: %s%s\n", estado1, carta1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per capita: R$ %.2f\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\n----- Dados da Carta 2 -----\n");
    printf("Carta: %s%s\n", estado2, carta2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per capita: R$ %.2f\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);

    // Comparações de atributos
    printf("\n===== Comparação de Atributos =====\n");

    // Comparação de População
    printf("População: Carta 1 venceu (%d)\n", (populacao1 > populacao2));

    // Comparação de Área
    printf("Área: Carta 1 venceu (%d)\n", (area1 > area2));

    // Comparação de PIB
    printf("PIB: Carta 1 venceu (%d)\n", (pib1 > pib2));

    // Comparação de Pontos Turísticos
    printf("Pontos turísticos: Carta 1 venceu (%d)\n", (pontosturisticos1 > pontosturisticos2));

    // Comparação de Densidade Populacional (menor vence)
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", (densidadepopulacional1 < densidadepopulacional2));

    // Comparação de PIB per Capita
    printf("PIB per Capita: Carta 1 venceu (%d)\n", (pibpercapita1 > pibpercapita2));

    // Comparação de Super Poder
    printf("Super Poder: Carta 1 venceu (%d)\n", (superpoder1 > superpoder2));

    printf("-----A carta com o maior tamanho em área vence-----\n");
    //exibe o critério de decisão

if ( area1 > area2){
    printf("A carta 1 venceu!\n");
} else {
    printf("A carta 2 venceu!\n");
}
//comparando  usando condições if-else

printf("-----A carta com o maior PIB vence-----\n");
//exibe o critério de decisão
if ( pib1 > pib2){
    printf("A carta 1 venceu!\n");
} else {
    printf("A carta 2 venceu!\n");
}
//comparando  usando condições if-else;

printf("-----A carta com a maior população vence-----\n");
//exibe o critério de decisão
if ( populacao1 > populacao2){
    printf("A carta 1 venceu!\n");
} else {
    printf("A carta 2 venceu!\n");
}
//comparando  usando condições if-else;

printf("-----A carta com a menor densidade populacional-----\n");
//exibe o critério de decisão
if ( densidadepopulacional1 < densidadepopulacional2){
    printf("A carta 1 venceu!\n");
} else {
    printf("A carta 2 venceu!\n");
}
//comparando  usando condições if-else;

printf("-----A carta com a maior quantidade de pontos turisticos vence-----\n");
//exibe o critério de decisão
if ( pontosturisticos1 > pontosturisticos2){
    printf("A carta 1 venceu!\n");
} else {
    printf("A carta 2 venceu!\n");
}
//comparando  usando condições if-else;
return 0;
}
