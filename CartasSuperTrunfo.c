#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Nível Novato: Cadastro básico de duas cartas de cidades.

int main() {
    // Definição das variáveis para a primeira carta
    char codigo1[5], nome1[50], estado1[3];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // Definição das variáveis para a segunda carta
    char codigo2[5], nome2[50], estado2[3];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // Cadastro da primeira carta
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Codigo da cidade: ");
    scanf("%4s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]s", nome1);
    printf("Estado (sigla): ");
    scanf("%2s", estado1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (km2): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    // Cadastro da segunda carta
    printf("=== Cadastro da Carta 2 ===\n");
    printf("Codigo da cidade: ");
    scanf("%4s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]s", nome2);
    printf("Estado (sigla): ");
    scanf("%2s", estado2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (km2): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n=== Dados da Carta 1 ===\n");
    printf("Codigo: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("Estado: %s\n", estado1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n=== Dados da Carta 2 ===\n");
    printf("Codigo: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("Estado: %s\n", estado2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}
