#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países

// Calculando a densidade populacional
float Calc_densidade(unsigned long int populacao, float area)
{
    float densidade_pop = populacao / area;
    return (densidade_pop);
}
// Calculando PIB per capita
float Calc_pib_perCapita(float pib, unsigned long int populacao)
{
    float pib_per_capita = pib / populacao;
    return (pib_per_capita);
}

int main()
{
    // Declarando as variáveis com as características das cartas
    int pontos_turisticos;
    unsigned long int populacao;
    float area, pib, Super_poder;
    char estado, codigo[5], cidade[50];

    float densidade = Calc_densidade(populacao, area);
    float pib_percapita = Calc_pib_perCapita(pib, populacao);

    // Cadastro das Cartas: Capturando características e atribuinda às variáveis

    // cadastrando carta 1
    printf("Digite a letra do estado: \n");
    scanf("%c", &estado);
    fflush(stdin);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo);
    fflush(stdin);

    printf("Digite o nome da cidade: \n");
    getchar(); // consome o '\n' pendente
    fgets(cidade, 50, stdin);

    // Remove o \n final, se existir
    cidade[strcspn(cidade, "\n")] = 0;

    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacao);
    fflush(stdin);

    printf("Digite a área da cidade em Km²: \n");
    scanf("%f", &area);
    fflush(stdin);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);
    fflush(stdin);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos);
    fflush(stdin);

    // funções de calculos
    Calc_densidade(populacao, area);
    Calc_pib_perCapita(pib, populacao);

    // Exibição dos Dados das Cartas:
    printf("======================================\n");
    printf("Estado : %c\n", estado);
    printf("Código: %c%s\n", estado, codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", Calc_densidade(populacao, area));
    printf("PIB per Capita: %.2f Reais\n", Calc_pib_perCapita(pib, populacao));
    printf("======================================\n");
    printf("\n");

    // cadastrando carta 2
    printf("Digite a letra do estado: \n");
    scanf(" %c", &estado);
    fflush(stdin);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo);
    fflush(stdin);

    printf("Digite o nome da cidade: \n");
    getchar(); // consome o '\n' pendente
    fgets(cidade, 50, stdin);

    // Remove o \n final, se existir
    cidade[strcspn(cidade, "\n")] = 0;

    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacao);
    fflush(stdin);

    printf("Digite a área da cidade em Km²: \n");
    scanf("%f", &area);
    fflush(stdin);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);
    fflush(stdin);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos);
    fflush(stdin);

    // funções de calculos
    Calc_densidade(populacao, area);
    Calc_pib_perCapita(pib, populacao);

    // Exibição dos Dados das Cartas:
    printf("======================================\n");
    printf("Estado : %c\n", estado);
    printf("Código: %c%s\n", estado, codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", Calc_densidade(populacao, area));
    printf("PIB per Capita: %.2f Reais\n", Calc_pib_perCapita(pib, populacao));
    printf("======================================\n");
    printf("\n");

    // Comparando as cartas

    return 0;
}
