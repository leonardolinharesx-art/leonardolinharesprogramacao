#include <stdio.h>

int main() {
    // --- VARIÁVEIS DA CARTA 1 ---
    char estado1; 
    char codigo1[50];
    char nome_cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // --- VARIÁVEIS DA CARTA 2 ---
    char estado2;
    char codigo2[50];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    printf("Olá, seja bem-vindo ao jogo de Super Trunfo das cidades brasileiras! \n");
    printf("vamo socmeçar cadastrando suas duas primeiras cartas!\n");
    printf("insira as informações da sua  primeira carta: \n");
    printf("\n");
    printf("Carta 1: \n");
    printf("\n");
    printf("Selecione o estado da cidade da sua carta dentre as opções abaixo: \n");
    printf("A - Pará\n");
    printf("B - Amazonas\n");
    printf("C - Bahia\n");
    printf("D - Ceará\n");
    printf("E - Paraná\n");
    printf("F - Minas Gerais\n");
    printf("G - Rio de Janeiro\n");
    printf("H - São Paulo\n");
    scanf(" %c", &estado1);
    printf("\n");

    printf("Digite o código da carta da cidade da carta 1: \n");
    printf("O código deve ser composto pela letra do estado seguida de um número de 01 a 04. Exemplo: A01, C02, G03, etc.\n");
    scanf("%s", codigo1);
    printf("\n");
    
    printf("Digite o nome da cidade da carta 1: \n");
    scanf("%s", nome_cidade1);
    printf("\n");

    printf("Digite a população da cidade da carta 1 em milhões de habitantes: \n");
    scanf("%d", &populacao1);
    printf("\n");

    printf("Digite a área da cidade da carta 1 em km²: \n");
    scanf("%f", &area1);
    printf("\n");

    printf("Digite o PIB da cidade da carta 1 em bilhões de reais: \n");
    scanf("%f", &pib1);
    printf("\n");
    
    printf("Digite o número de pontos turísticos da cidade da carta 1: \n");
    scanf("%d", &pontos_turisticos1);
    printf("\n");

    printf("Confira as informações da sua carta 1: \n");
    printf("\n");
    
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %d milhões de habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("\n");

    printf("Agora, vamos cadastrar a sua segunda carta! \n");
    printf("\n");

    printf("Carta 2: \n");
    printf("\n");

    printf("Selecione o estado da cidade da sua carta dentre as opções abaixo: \n");
    printf("A - Pará\n");
    printf("B - Amazonas\n");
    printf("C - Bahia\n");
    printf("D - Ceará\n");
    printf("E - Paraná\n");
    printf("F - Minas Gerais\n");
    printf("G - Rio de Janeiro\n");
    printf("H - São Paulo\n");
    scanf(" %c", &estado2);
    printf("\n");

    printf("Digite o código da carta da cidade da carta 2: \n");
    printf("O código deve ser composto pela letra do estado seguida de um número de 01 a 04. Exemplo: A01, C02, G03, etc.\n");
    scanf("%s", codigo2);
    printf("\n");

    printf("Digite o nome da cidade da carta 2: \n");
    scanf("%s", nome_cidade2);
    printf("\n");

    printf("Digite a população da cidade da carta 2 em milhões de habitantes: \n");
    scanf("%d", &populacao2);
    printf("\n");

    printf("Digite a área da cidade da carta 2 em km²: \n");
    scanf("%f", &area2);
    printf("\n");

    printf("Digite o PIB da cidade da carta 2 em bilhões de reais: \n");
    scanf("%f", &pib2);
    printf("\n");

    printf("Digite o número de pontos turísticos da cidade da carta 2: \n");
    scanf("%d", &pontos_turisticos2);
    printf("\n");

    printf("Confira as informações da sua carta 2: \n");
    printf("\n");

    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d milhões de habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("\n");

    return 0;
}