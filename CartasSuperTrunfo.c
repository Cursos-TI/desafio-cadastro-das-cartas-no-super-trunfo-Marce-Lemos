#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países

// Calculando a densidade populacional
float Calc_densidade(unsigned long int populacao, float area){
    float densidade_pop = populacao / area;
    return (densidade_pop);
}

// Calculando PIB per capita
float Calc_pib_perCapita(float pib, unsigned long int populacao){
    float pib_per_capita = pib / populacao;
    return (pib_per_capita);
}

// Função de calculo de Super Poder
float Calc_superPoder (int pontos_turisticos, unsigned long int populacao, float area, float pib, float pib_percapita, float densidade){
    float supePoder = (float) pontos_turisticos + populacao + area + pib + pib_percapita + (1 / densidade);
    return (supePoder);
}

int main()
{
    // Declarando as variáveis com as características das cartas
    
    // Foi usado C1 para refência a carta 1 e C2 para carta 2
    int pontos_turisticos_C1;
    unsigned long int populacao_C1;
    float area_C1, pib_C1, superPoder_C1;
    char estado_C1, codigo_C1[5], cidade_C1[50];

    // Calculos de densidade e PIB per capita
    float densidade_C1 = Calc_densidade(populacao_C1, area_C1);
    float pib_percapita_C1 = Calc_pib_perCapita(pib_C1, populacao_C1);

    // Cadastro das Cartas: Capturando características e atribuinda às variáveis

    // Cadastrando carta 1
    printf("Digite a letra do estado: \n");
    scanf("%c", &estado_C1);
    fflush(stdin);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo_C1);
    fflush(stdin);

    printf("Digite o nome da cidade: \n");
    getchar(); // consome o '\n' pendente
    fgets(cidade_C1, 50, stdin);

    // Remove o \n final, se existir
    cidade_C1[strcspn(cidade_C1, "\n")] = 0;

    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacao_C1);
    fflush(stdin);

    printf("Digite a área da cidade em Km²: \n");
    scanf("%f", &area_C1);
    fflush(stdin);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_C1);
    fflush(stdin);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos_C1);
    fflush(stdin);

    // Funções de calculos carta 1
    Calc_densidade(populacao_C1, area_C1);
    Calc_pib_perCapita(pib_C1, populacao_C1);

    // Função Super Poder carta 1
    superPoder_C1 = Calc_superPoder (pontos_turisticos_C1, populacao_C1, area_C1, pib_C1, pib_percapita_C1, densidade_C1);

    // Exibição dos Dados carta 1
    printf("======================================\n");
    printf("Estado : %c\n", estado_C1);
    printf("Código: %c%s\n", estado_C1, codigo_C1);
    printf("Nome da cidade: %s\n", cidade_C1);
    printf("População: %lu\n", populacao_C1);
    printf("Área: %.2f Km²\n", area_C1);
    printf("PIB: %.2f bilhões de reais\n", pib_C1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_C1);
    printf("Densidade Populacional: %.2f hab/km²\n", Calc_densidade(populacao_C1, area_C1));
    printf("PIB per Capita: %.2f Reais\n", Calc_pib_perCapita(pib_C1, populacao_C1));
    printf("Super Poder: %.2f\n", superPoder_C1);
    printf("======================================\n");
    printf("\n");

    //variáveis carta 2
    // Foi usado C1 para refência a carta 1 e C2 para carta 2
    int pontos_turisticos_C2;
    unsigned long int populacao_C2;
    float area_C2, pib_C2, superPoder_C2;
    char estado_C2, codigo_C2[5], cidade_C2[50];

    //Calculos de densidade e PIB per capita
    float densidade_C2 = Calc_densidade(populacao_C2, area_C2);
    float pib_percapita_C2 = Calc_pib_perCapita(pib_C2, populacao_C2);

    // cadastrando carta 2
    printf("Digite a letra do estado: \n");
    scanf(" %c", &estado_C2);
    fflush(stdin);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo_C2);
    fflush(stdin);

    printf("Digite o nome da cidade: \n");
    getchar(); // consome o '\n' pendente
    fgets(cidade_C2, 50, stdin);

    // Remove o \n final, se existir
    cidade_C2[strcspn(cidade_C2, "\n")] = 0;

    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacao_C2);
    fflush(stdin);

    printf("Digite a área da cidade em Km²: \n");
    scanf("%f", &area_C2);
    fflush(stdin);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_C2);
    fflush(stdin);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos_C2);
    fflush(stdin);

    // funções de calculos carta 2
    Calc_densidade(populacao_C2, area_C2);
    Calc_pib_perCapita(pib_C2, populacao_C2);

    //Função Super Poder carta 2
    superPoder_C2 = Calc_superPoder (pontos_turisticos_C2, populacao_C2, area_C2, pib_C2, pib_percapita_C2, densidade_C2);

    // Exibição dos Dados carta 2
    printf("======================================\n");
    printf("Estado : %c\n", estado_C2);
    printf("Código: %c%s\n", estado_C2, codigo_C2);
    printf("Nome da cidade: %s\n", cidade_C2);
    printf("População: %lu\n", populacao_C2);
    printf("Área: %.2f Km²\n", area_C2);
    printf("PIB: %.2f bilhões de reais\n", pib_C2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_C2);
    printf("Densidade Populacional: %.2f hab/km²\n", Calc_densidade(populacao_C2, area_C2));
    printf("PIB per Capita: %.2f Reais\n", Calc_pib_perCapita(pib_C2, populacao_C2));
    printf("Super Poder: %.2f\n", superPoder_C2);
    printf("======================================\n");
    printf("\n");

    // Comparando as cartas
    int Comp_pontos_turisticos = pontos_turisticos_C1 > pontos_turisticos_C2;
    int Comp_populacao = (int) populacao_C1 > populacao_C2;
    int Comp_area = area_C1 > area_C2; 
    int Comp_pib = pib_C1 > pib_C2;
    int Comp_superPoder = superPoder_C1 > superPoder_C2;
    int Comp_densidade = (1 / densidade_C1) > (1 / densidade_C2);
    int Comp_percapita = pib_percapita_C1 > pib_percapita_C2;

    //Imprimindo resultado das comparações
    printf("======================================\n");
    printf("População: %d\n", Comp_populacao);
    printf("Área: %d\n", Comp_area);
    printf("PIB: %d\n", Comp_pib);
    printf("Número de Pontos Turísticos: %d\n", Comp_pontos_turisticos);
    printf("Densidade Populacional: %d\n", Comp_densidade);
    printf("PIB per Capita: %d\n", Comp_percapita);
    printf("Super Poder: %d\n", Comp_superPoder);
    printf("======================================\n");
    printf("\n");

    return 0;
}
