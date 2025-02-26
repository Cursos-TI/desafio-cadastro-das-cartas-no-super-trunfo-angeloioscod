#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários e veja como implementei cada parte do desafio.
// Ângelo Oliveira dos Santos - Faculdade Estacio - Curso Análise e desenvolvimento de Sistemas

int main() {

    char estado1, estado2;
    char codigoCarta1[4], codigoCarta2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int numeroPontoturisticos1, numeroPontoturisticos2;

    // Lendo dados da Carta 1
    printf("Digite os dados da Carta 1\n");

    printf("Estado - Escolha uma letra entre (A-H): ");
    scanf(" %c", &estado1); // Adicionado espaço para ignorar espaços em branco

    printf("Código (ex: A01): ");
    scanf("%s", codigoCarta1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade1); // Lê até encontrar uma nova linha

    printf("Número da população: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numeroPontoturisticos1);

    printf("\n"); // Espaço em branco

    // Exibindo dados da Carta 1
    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1); // Essa especificador de fortmato %.2f adciona com duas casas decimais.
    printf("PIB: %.2f bilhões de reais\n", pib1);// Essa especificador %.2f de fortmato adciona com duas casas decimais.
    printf("Número de Pontos Turísticos: %d\n", numeroPontoturisticos1);

    // Limpeza do buffer do teclado
    while (getchar() != '\n'); // Limpa o buffer

    printf("\n"); // Espaço em branco

    // Lendo dados da Carta 2
    printf("Digite os dados da Carta 2\n");

    printf("Estado - Escolha uma letra entre (A-H): ");
    scanf(" %c", &estado2); // Adicionado espaço para ignorar espaços em branco

    printf("Código (ex: A01): ");
    scanf("%s", codigoCarta2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade2); // Lê até encontrar uma nova linha

    printf("Número da população: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numeroPontoturisticos2);

    printf("\n"); // Espaço em branco

    // Exibindo dados da Carta 2
    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2); // Essa especificador de fortmato %.2f adciona com duas casas decimais.
    printf("PIB: %.2f bilhões de reais\n", pib2); // Essa especificador de fortmato %.2f adciona com duas casas decimais.
    printf("Número de Pontos Turísticos: %d\n", numeroPontoturisticos2);
    
    printf("\n"); // Espaço em branco

    return 0;
}