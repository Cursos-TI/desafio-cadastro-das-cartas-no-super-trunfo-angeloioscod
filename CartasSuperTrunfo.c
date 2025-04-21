#include <stdio.h>

// Desafio Super Trunfo - Países - nível aventureiro
// Tema 2 - Calculando Densidade Populacional e PIB per Capita
// Desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários e veja como implementei cada parte do desafio.
// Ângelo Oliveira dos Santos - Faculdade Estacio - Curso Análise e desenvolvimento de Sistemas

int main() {
    char estado1, estado2;   // Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    char codigoCarta1[4], codigoCarta2[4]; // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
    char nomeCidade1[50], nomeCidade2[50]; // O nome da cidade. Tipo: char[] (string)
    int populacao1, populacao2; // O número de habitantes da cidade. Tipo: int
    float area1, area2;   // A área da cidade em quilômetros quadrados. Tipo: float
    float pib1, pib2; // O Produto Interno Bruto da cidade. Tipo: float
    int numeroPontoturisticos1, numeroPontoturisticos2; // A quantidade de pontos turísticos na cidade. Tipo: int
    float densidade1, densidade2; // Densidade populacional (hab/km²). Tipo: float
    float pibPerCapita1, pibPerCapita2; // PIB per capita (reais por habitante). Tipo: float

    // Lendo dados da Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H):");
    scanf(" %c", &estado1);   // Adicionado espaço antes do %c

    printf("Código (ex: A01):");
    scanf("%3s", codigoCarta1);   // Limitado a 3 caracteres

    printf("Nome da Cidade:");
    scanf(" %49[^\n]", nomeCidade1);   // Formato e limitado a 49 caracteres

    printf("Número da população(Ex:12325000):");
    scanf("%d", &populacao1);

    printf("Área (em km²) (Ex:1521.11):");
    scanf("%f", &area1);

    printf("PIB (bilhões de reais)(Ex:699.28):");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos:");
    scanf("%d", &numeroPontoturisticos1);

    printf("\n"); // Espaço em branco

    // Calculando densidade populacional e PIB per capita para Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // Convertendo bilhões para reais

    // Exibindo dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numeroPontoturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Limpeza do buffer do teclado
    while (getchar() != '\n');

    printf("\n"); // Espaço em branco

    // Lendo dados da Carta 2
    printf("Digite os dados da Carta 2\n");
    printf("Estado (A-H):");
    scanf(" %c", &estado2);   // Adicionado espaço antes do %c

    printf("Código (ex: A01):");
    scanf("%3s", codigoCarta2);   // Limitado a 3 caracteres

    printf("Nome da Cidade:");
    scanf(" %49[^\n]", nomeCidade2);

    printf("Número da população (ex:12325000):");
    scanf("%d", &populacao2);

    printf("Área (em km²) (Ex:1521.11):");
    scanf("%f", &area2);

    printf("PIB (bilhões de reais)(Ex:699.28):");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos:");
    scanf("%d", &numeroPontoturisticos2);

    printf("\n"); // Espaço em branco

    // Calculando densidade populacional e PIB per capita para Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2; // Convertendo bilhões para reais

    // Exibindo dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numeroPontoturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}