#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários e veja como implementei cada parte do desafio.
// Ângelo Oliveira dos Santos - Faculdade Estacio - Curso Análise e desenvolvimento de Sistemas

int main() {
    char estado1, estado2;  // Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    char codigoCarta1[4], codigoCarta2[4]; // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
    char nomeCidade1[50], nomeCidade2[50]; // O nome da cidade. Tipo: char[] (string)
    int populacao1, populacao2; // O número de habitantes da cidade. Tipo: int
    float area1, area2;  // A área da cidade em quilômetros quadrados. Tipo: float
    float pib1, pib2; // O Produto Interno Bruto da cidade. Tipo: float
    int numeroPontoturisticos1, numeroPontoturisticos2; // A quantidade de pontos turísticos na cidade. Tipo: int

    // Lendo dados da Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H):");
    scanf(" %c", &estado1);  // Adicionado espaço antes do %c 

    printf("Código (ex: A01):");
scanf("%3s", codigoCarta1);  // Limitado a 3 caracteres 

    printf("Nome da Cidade:");
    scanf(" %49[^\n]", nomeCidade1);  // Formato e limitado a 49 caracteres

    printf("Número da população:");
    scanf("%d", &populacao1);

    printf("Área (em km²):");
    scanf("%f", &area1);

    printf("PIB (bilhões de reais):");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos:");
    scanf("%d", &numeroPontoturisticos1);

    printf("\n"); // Espaço em branco

    // Exibindo dados da Carta 1
    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numeroPontoturisticos1);

    // Limpeza do buffer do teclado
    while (getchar() != '\n'); 

    printf("\n"); // Espaço em branco

    // Lendo dados da Carta 2
    printf("Digite os dados da Carta 2\n");
    printf("Estado (A-H):");
    scanf(" %c", &estado2);  // Adicionado espaço antes do %c

    printf("Código (ex: A01):");
    scanf("%3s", codigoCarta2);  // Limitado a 3 caracteres

    printf("Nome da Cidade:");
    scanf(" %49[^\n]", nomeCidade2);  

    printf("Número da população:");
    scanf("%d", &populacao2);

    printf("Área (em km²):");
    scanf("%f", &area2);

    printf("PIB (bilhões de reais):");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos:");
    scanf("%d", &numeroPontoturisticos2);

    printf("\n"); // Espaço em branco

    // Exibindo dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numeroPontoturisticos2);

    return 0;
}