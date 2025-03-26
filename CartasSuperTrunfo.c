#include <stdio.h>

int main() {
    // Declarando variáveis a serem utilizadas
    char estado[2];       // Para armazenar a letra do estado
    char codigo[4];       // Para armazenar o código da carta
    char nome[20];        // Para armazenar o nome da cidade
    int populacao, N_P_turistico;    // Para armazenar a população e os pontos turísticos
    float area, Pib;              // Para armazenar a área e o PIB
    float densidade, pib_per_capita; // Para armazenar a densidade populacional e o PIB per capita

    // Cadastro da Carta 1
    printf("\n=== Cadastro da Carta 1 ===\n");
    printf("Primeira letra do estado: ");
    scanf(" %c", &estado[0]); // Lê a primeira letra do estado

    printf("Código da Carta (3 caracteres): ");
    scanf("%3s", codigo);  // Lê o código da carta

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome); // Lê o nome da cidade, permitindo espaços

    printf("População: ");
    scanf("%d", &populacao); // Lê a população

    printf("Pontos turísticos: ");
    scanf("%d", &N_P_turistico); // Lê o número de pontos turísticos

    // Pedido da Área total e PIB
    printf("Área total (km²): ");
    scanf("%f", &area);  // Lê a área da cidade

    printf("PIB (em milhões): ");
    scanf("%f", &Pib);  // Lê o PIB da cidade

    // Cálculo da Densidade Populacional e PIB per Capita
    densidade = populacao / area;
    pib_per_capita = Pib / populacao;

    // Exibição dos dados cadastrados da Carta 1
    printf("\n=== Informações da Carta 1 ===\n");
    printf("Estado: %c\n", estado[0]);
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Pontos turísticos: %d\n", N_P_turistico);
    printf("Área: %.2f km²\n", area);  // Imprime a área com 2 casas decimais
    printf("PIB: %.2f milhões\n", Pib);  // Imprime o PIB com 2 casas decimais
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);  // Imprime a densidade populacional
    printf("PIB per Capita: %.2f milhões\n", pib_per_capita);  // Imprime o PIB per capita

    // Limpeza do buffer antes de começar a Carta 2
    getchar(); // Limpa o '\n' que ficou no buffer após a leitura anterior

    // Cadastro da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Primeira letra do estado: ");
    scanf(" %c", &estado[1]); // Lê a primeira letra do estado

    printf("Código da Carta (3 caracteres): ");
    scanf("%3s", codigo); // Lê o código da carta

    // Limpar o buffer antes de ler o nome
    getchar(); // Limpa o '\n' que ficou no buffer após a leitura anterior

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome); // Lê o nome da cidade, permitindo espaços

    printf("População: ");
    scanf("%d", &populacao); // Lê a população

    printf("Pontos turísticos: ");
    scanf("%d", &N_P_turistico); // Lê o número de pontos turísticos

    // Pedido da Área total e PIB para a segunda carta
    printf("Área total (km²): ");
    scanf("%f", &area); // Lê a área da cidade

    printf("PIB (em milhões): ");
    scanf("%f", &Pib); // Lê o PIB da cidade

    // Cálculo da Densidade Populacional e PIB per Capita
    densidade = populacao / area;
    pib_per_capita = Pib / populacao;

    // Exibição dos dados cadastrados da Carta 2
    printf("\n=== Informações da Carta 2 ===\n");
    printf("Estado: %c\n", estado[1]);
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Pontos turísticos: %d\n", N_P_turistico);
    printf("Área: %.2f km²\n", area);  // Imprime a área com 2 casas decimais
    printf("PIB: %.2f milhões\n", Pib);  // Imprime o PIB com 2 casas decimais
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);  // Imprime a densidade populacional
    printf("PIB per Capita: %.2f milhões\n", pib_per_capita);  // Imprime o PIB per capita

    return 0;
}
