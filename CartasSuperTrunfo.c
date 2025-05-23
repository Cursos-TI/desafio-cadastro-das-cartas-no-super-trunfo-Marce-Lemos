#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    
    //Declarando as variáveis com as características das cartas 
    int populacao, pontos_turisticos;
    float area, pib;
    char estado, codigo[5], cidade[50]; 

    // Cadastro das Cartas: Capturando características e atribuinda às variáveis
    printf("Digite a letra do estado: \n");
    scanf("%c", &estado);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em Km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos);

    //Calculando a densidade populacional
    float Calc_densidade (int populacao, float area) {
        float densidade_pop = (float) populacao / area;
    }
    
    // Calculando PIB per capita
    float Calc_pib_perCapita (float pib, int populacao) {
        float pib_per_capita = (float) pib / populacao;
    }
       
    // Exibição dos Dados das Cartas:
    printf("======================================\n");
    printf("Estado : %c\n", estado);
    printf("Código: %c%s\n", estado ,codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", Calc_densidade(populacao, area));
    printf("PIB per Capita: %.2f Reais\n", Calc_pib_perCapita (pib, populacao));
    printf("\n");

    return 0;
}