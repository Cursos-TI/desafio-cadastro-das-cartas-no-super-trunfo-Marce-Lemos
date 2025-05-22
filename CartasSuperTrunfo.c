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

    // Exibição dos Dados das Cartas:
    printf("======================================\n");
    printf("Estado : %c\n", estado);
    printf("Código: %c%s\n", estado ,codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("\n");

    return 0;
}