#include <stdio.h>

// Desafio Super Trunfo - Países - nível mestre
// Tema 3 - Calculando Densidade Populacional e PIB per Capita
// Desenvolvimento do jogo Batalha de Cartas no Super Trunfo.
// Implementação adicional:
// - Uso de unsigned long int para população
// - Cálculo do Super Poder
// - Comparação detalhada entre cartas
// Ângelo Oliveira dos Santos - Faculdade Estacio - Curso Análise e desenvolvimento de Sistemas

int main() {
    char estado1, estado2;   // Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    char codigoCarta1[4], codigoCarta2[4]; // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[]
    char nomeCidade1[50], nomeCidade2[50]; // O nome da cidade. Tipo: char[] (string)
    unsigned long int populacao1, populacao2; // Alterado para unsigned long int para números maiores
    float area1, area2;   // A área da cidade em quilômetros quadrados. Tipo: float
    float pib1, pib2; // O Produto Interno Bruto da cidade. Tipo: float
    int numeroPontoturisticos1, numeroPontoturisticos2; // A quantidade de pontos turísticos na cidade. Tipo: int
    float densidade1, densidade2; // Densidade populacional (hab/km²). Tipo: float
    float pibPerCapita1, pibPerCapita2; // PIB per capita (reais por habitante). Tipo: float
    float superPoder1, superPoder2; // Novo: Super Poder calculado somando atributos

    // Lendo dados da Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H):");
    scanf(" %c", &estado1);   // Adicionado espaço antes do %c para consumir possíveis \n no buffer

    printf("Código (ex: A01):");
    scanf("%3s", codigoCarta1);   // Limitado a 3 caracteres (letra + 2 dígitos)

    printf("Nome da Cidade:");
    scanf(" %49[^\n]", nomeCidade1);   // Lê até 49 caracteres (deixando espaço para o \0)

    printf("Número da população(Ex:12325000):");
    scanf("%lu", &populacao1);   // Alterado para %lu para unsigned long int

    printf("Área (em km²) (Ex:1521.11):");
    scanf("%f", &area1);

    printf("PIB (bilhões de reais)(Ex:699.28):");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos:");
    scanf("%d", &numeroPontoturisticos1);

    printf("\n"); // Espaço em branco para melhor organização visual

    // Calculando métricas para Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // Convertendo bilhões para reais
    
    // Cálculo do Super Poder (soma de todos os atributos numéricos, com inverso da densidade)
    superPoder1 = populacao1 + area1 + pib1 + numeroPontoturisticos1 + pibPerCapita1 + (1/densidade1);

    // Exibindo dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numeroPontoturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1); // Novo: Exibição do Super Poder

    // Limpeza do buffer do teclado para evitar problemas na próxima leitura
    while (getchar() != '\n');

    printf("\n"); // Espaço em branco entre as cartas

    // Lendo dados da Carta 2
    printf("Digite os dados da Carta 2\n");
    printf("Estado (A-H):");
    scanf(" %c", &estado2);

    printf("Código (ex: A01):");
    scanf("%3s", codigoCarta2);

    printf("Nome da Cidade:");
    scanf(" %49[^\n]", nomeCidade2);

    printf("Número da população (ex:12325000):");
    scanf("%lu", &populacao2); // Alterado para %lu para unsigned long int

    printf("Área (em km²) (Ex:1521.11):");
    scanf("%f", &area2);

    printf("PIB (bilhões de reais)(Ex:699.28):");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos:");
    scanf("%d", &numeroPontoturisticos2);

    printf("\n"); // Espaço em branco

    // Calculando métricas para Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2; // Convertendo bilhões para reais
    
    // Cálculo do Super Poder (soma de todos os atributos numéricos, com inverso da densidade)
    superPoder2 = populacao2 + area2 + pib2 + numeroPontoturisticos2 + pibPerCapita2 + (1/densidade2);

    // Exibindo dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numeroPontoturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2); // Novo: Exibição do Super Poder

    printf("\n=== COMPARAÇÃO DE CARTAS ===\n");
    
    // Comparação de População (maior vence)
    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2));
    
    // Comparação de Área (maior vence)
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2));
    
    // Comparação de PIB (maior vence)
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2));
    
    // Comparação de Pontos Turísticos (maior vence)
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 
           (numeroPontoturisticos1 > numeroPontoturisticos2) ? 1 : 2, 
           (numeroPontoturisticos1 > numeroPontoturisticos2));
    
    // Comparação de Densidade Populacional (MENOR vence)
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 
           (densidade1 < densidade2) ? 1 : 2, 
           (densidade1 < densidade2));
    
    // Comparação de PIB per Capita (maior vence)
    printf("PIB per Capita: Carta %d venceu (%d)\n", 
           (pibPerCapita1 > pibPerCapita2) ? 1 : 2, 
           (pibPerCapita1 > pibPerCapita2));
    
    // Comparação de Super Poder (maior vence)
    printf("Super Poder: Carta %d venceu (%d)\n", 
           (superPoder1 > superPoder2) ? 1 : 2, 
           (superPoder1 > superPoder2));

    return 0;
}