#include <stdio.h>

// Desafio Super Trunfo - Cadastro de Cartas de Cidades
// Este código permite cadastrar e exibir os dados de duas cartas de cidades.

int main() {

    printf("Desafio cadastro das cartas:\n");

    // --- Declaração das variáveis para a primeira carta ---
    char estado_carta1[3];       // Abreviatura do estado (ex: "SP")
    char codigo_carta1[20];
    char nome_cidade_carta1[50];
    int populacao_carta1;
    float area_km2_carta1;
    float pib_carta1;
    int pontos_turisticos_carta1;

    // --- Declaração das variáveis para a segunda carta ---
    char estado_carta2[3];
    char codigo_carta2[20];
    char nome_cidade_carta2[50];
    int populacao_carta2;
    float area_km2_carta2;
    float pib_carta2;
    int pontos_turisticos_carta2;

    // --- Entrada de dados para a primeira carta ---
    printf("\n--- Insira os dados da primeira carta: ---\n");
    printf("Estado (ex: 'SP'): ");
    scanf("%2s", estado_carta1);

    printf("Codigo da cidade: ");
    scanf("%19s", codigo_carta1);

    printf("Nome da cidade: ");
    scanf("%49s", nome_cidade_carta1);

    printf("Populacao da cidade: ");
    scanf("%d", &populacao_carta1);

    printf("Area em km^2: ");
    scanf("%f", &area_km2_carta1);

    printf("PIB (em bilhoes de reais): "); // Adicionado o texto para guiar o usuário
    scanf("%f", &pib_carta1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_carta1);

    // --- Entrada de dados para a segunda carta ---
    printf("\n--- Insira os dados da segunda carta: ---\n");
    printf("Estado (ex: 'RJ'): ");
    scanf("%2s", estado_carta2);

    printf("Codigo da cidade: ");
    scanf("%19s", codigo_carta2);

    printf("Nome da cidade: ");
    scanf("%49s", nome_cidade_carta2);

    printf("Populacao da cidade: ");
    scanf("%d", &populacao_carta2);

    printf("Area em km^2: ");
    scanf("%f", &area_km2_carta2);

    printf("PIB (em bilhoes de reais): "); // Adicionado o texto para guiar o usuário
    scanf("%f", &pib_carta2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_carta2);

    // --- Exibição dos dados das cartas ---
    printf("\n\n--- Dados das Cartas Cadastradas ---\n");

    printf("\nDados da primeira carta:\n");
    printf("Estado: %s\n", estado_carta1);
    printf("Codigo: %s\n", codigo_carta1);
    printf("Cidade: %s\n", nome_cidade_carta1);
    printf("Populacao: %d\n", populacao_carta1);
    printf("Area: %.2f km^2\n", area_km2_carta1);
    printf("PIB: %.2f bilhoes de reais\n", pib_carta1); // CORREÇÃO APLICADA AQUI
    printf("Pontos turisticos: %d\n", pontos_turisticos_carta1);

    printf("\nDados da segunda carta:\n");
    printf("Estado: %s\n", estado_carta2);
    printf("Codigo: %s\n", codigo_carta2);
    printf("Cidade: %s\n", nome_cidade_carta2);
    printf("Populacao: %d\n", populacao_carta2);
    printf("Area: %.2f km^2\n", area_km2_carta2);
    printf("PIB: %.2f bilhoes de reais\n", pib_carta2); // CORREÇÃO APLICADA AQUI
    printf("Pontos turisticos: %d\n", pontos_turisticos_carta2);

    return 0;
}