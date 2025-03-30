#include <stdio.h>
#include <string.h>

// Estrutura para representar uma cidade
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
} Cidade;

int main() {
    Cidade cidade1, cidade2;
    char criterio[20];

    // Cadastro das Cartas
    printf("Digite o nome da primeira cidade: ");
    scanf("%s", cidade1.nome);
    printf("Digite a população da primeira cidade: ");
    scanf("%d", &cidade1.populacao);
    printf("Digite a área da primeira cidade (em km²): ");
    scanf("%f", &cidade1.area);
    printf("Digite o PIB da primeira cidade (em bilhões): ");
    scanf("%f", &cidade1.pib);

    printf("\nDigite o nome da segunda cidade: ");
    scanf("%s", cidade2.nome);
    printf("Digite a população da segunda cidade: ");
    scanf("%d", &cidade2.populacao);
    printf("Digite a área da segunda cidade (em km²): ");
    scanf("%f", &cidade2.area);
    printf("Digite o PIB da segunda cidade (em bilhões): ");
    scanf("%f", &cidade2.pib);

    // Escolha do critério de comparação
    printf("\nEscolha um critério para comparar (populacao, area, pib): ");
    scanf("%s", criterio);

    // Comparação de Cartas
    if (strcmp(criterio, "populacao") == 0) {
        if (cidade1.populacao > cidade2.populacao)
            printf("%s vence com maior população (%d habitantes).\n", cidade1.nome, cidade1.populacao);
        else
            printf("%s vence com maior população (%d habitantes).\n", cidade2.nome, cidade2.populacao);
    } else if (strcmp(criterio, "area") == 0) {
        if (cidade1.area > cidade2.area)
            printf("%s vence com maior área (%.2f km²).\n", cidade1.nome, cidade1.area);
        else
            printf("%s vence com maior área (%.2f km²).\n", cidade2.nome, cidade2.area);
    } else if (strcmp(criterio, "pib") == 0) {
        if (cidade1.pib > cidade2.pib)
            printf("%s vence com maior PIB (%.2f bilhões).\n", cidade1.nome, cidade1.pib);
        else
            printf("%s vence com maior PIB (%.2f bilhões).\n", cidade2.nome, cidade2.pib);
    } else {
        printf("Critério inválido!\n");
    }

    return 0;
}
