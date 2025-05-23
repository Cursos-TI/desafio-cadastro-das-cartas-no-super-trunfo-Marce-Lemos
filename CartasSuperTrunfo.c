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

float Calc_superPoder (int pontos_turisticos, unsigned long int populacao, float area, float pib, 
float pib_percapita, float densidade){
    float supePoder = (float) pontos_turisticos + populacao + area + pib + pib_percapita + (1/densidade);
    return (supePoder);
}


int main()
{
    // Declarando as variáveis com as características das cartas
    int pontos_turisticos_01;
    unsigned long int populacao_01;
    float area_01, pib_01, superPoder_01;
    char estado_01, codigo_01[5], cidade_01[50];

    float densidade_01 = Calc_densidade(populacao_01, area_01);
    float pib_percapita_01 = Calc_pib_perCapita(pib_01, populacao_01);

    // Cadastro das Cartas: Capturando características e atribuinda às variáveis

    // cadastrando carta 1
    printf("Digite a letra do estado: \n");
    scanf("%c", &estado_01);
    fflush(stdin);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo_01);
    fflush(stdin);

    printf("Digite o nome da cidade: \n");
    getchar(); // consome o '\n' pendente
    fgets(cidade_01, 50, stdin);

    // Remove o \n final, se existir
    cidade_01[strcspn(cidade_01, "\n")] = 0;

    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacao_01);
    fflush(stdin);

    printf("Digite a área da cidade em Km²: \n");
    scanf("%f", &area_01);
    fflush(stdin);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_01);
    fflush(stdin);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos_01);
    fflush(stdin);

    // funções de calculos carta 1
    Calc_densidade(populacao_01, area_01);
    Calc_pib_perCapita(pib_01, populacao_01);

    //Função Super Poder carta 1
    superPoder_01 = Calc_superPoder (pontos_turisticos_01, populacao_01, area_01, pib_01, pib_percapita_01, densidade_01);

    // Exibição dos Dados carta 1
    printf("======================================\n");
    printf("Estado : %c\n", estado_01);
    printf("Código: %c%s\n", estado_01, codigo_01);
    printf("Nome da cidade: %s\n", cidade_01);
    printf("População: %lu\n", populacao_01);
    printf("Área: %.2f Km²\n", area_01);
    printf("PIB: %.2f bilhões de reais\n", pib_01);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_01);
    printf("Densidade Populacional: %.2f hab/km²\n", Calc_densidade(populacao_01, area_01));
    printf("PIB per Capita: %.2f Reais\n", Calc_pib_perCapita(pib_01, populacao_01));
    printf("======================================\n");
    printf("\n");

    //variáveis carta 2
    int pontos_turisticos_02;
    unsigned long int populacao_02;
    float area_02, pib_02, superPoder_02;
    char estado_02, codigo_02[5], cidade_02[50];

    float densidade_02 = Calc_densidade(populacao_02, area_02);
    float pib_percapita_02 = Calc_pib_perCapita(pib_02, populacao_02);

    // cadastrando carta 2
    printf("Digite a letra do estado: \n");
    scanf(" %c", &estado_02);
    fflush(stdin);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo_02);
    fflush(stdin);

    printf("Digite o nome da cidade: \n");
    getchar(); // consome o '\n' pendente
    fgets(cidade_02, 50, stdin);

    // Remove o \n final, se existir
    cidade_02[strcspn(cidade_02, "\n")] = 0;

    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacao_02);
    fflush(stdin);

    printf("Digite a área da cidade em Km²: \n");
    scanf("%f", &area_02);
    fflush(stdin);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_02);
    fflush(stdin);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos_02);
    fflush(stdin);

    // funções de calculos carta 2
    Calc_densidade(populacao_02, area_02);
    Calc_pib_perCapita(pib_02, populacao_02);

    //Função Super Poder carta 2
    superPoder_02 = Calc_superPoder (pontos_turisticos_02, populacao_02, area_02, pib_02, pib_percapita_02, densidade_02);

    // Exibição dos Dados carta 2
    printf("======================================\n");
    printf("Estado : %c\n", estado_02);
    printf("Código: %c%s\n", estado_02, codigo_02);
    printf("Nome da cidade: %s\n", cidade_02);
    printf("População: %lu\n", populacao_02);
    printf("Área: %.2f Km²\n", area_02);
    printf("PIB: %.2f bilhões de reais\n", pib_02);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_02);
    printf("Densidade Populacional: %.2f hab/km²\n", Calc_densidade(populacao_02, area_02));
    printf("PIB per Capita: %.2f Reais\n", Calc_pib_perCapita(pib_02, populacao_02));
    printf("======================================\n");
    printf("\n");

    // Comparando as cartas

    return 0;
}
