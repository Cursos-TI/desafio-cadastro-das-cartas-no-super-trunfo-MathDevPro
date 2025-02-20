#include <stdio.h>

int main() {
    int pontosturisticos, populacao;
    char cidade[50], estado[1], carta[2];
   float densidadepopulacional = (float) populacao / area, area, pib;

    printf("Insira uma letra representando um dos oito estados usando uma letra de A a H para a carta 1 ");
    scanf("%s", estado);

    printf("Insira o código da carta usando números de 01 a 04 "\n);
    scanf("%s", carta);
    
    printf("Insira o nome da cidade: ");
    scanf(" %s[^\n]", cidade);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area);

    printf("Insira a quantidade populacional: ");
    scanf("%d", &populacao);

    printf("Insira o PIB total da cidade: ");
    scanf("%f", &pib);

    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &pontosturisticos);


    // Exibir os dados formatados
    printf("\n----- Dados da Carta 1 -----\n");
    printf("Carta: %s\n", carta);
    printf("Estado: %s\n", estado);
    printf("Codigo da Carta: %s\n", estado, carta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f km²\n", pib);
    printf("Pontos turísticos: %d\n", pontosturisticos);


    
    printf("Densidade populacional: %f hab/km²\n", densidadepopulacional);
    printf("PIB total: R$ %f bilhões\n", pib);
    
    return 0;
}
