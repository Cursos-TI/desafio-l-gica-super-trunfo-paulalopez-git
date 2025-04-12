#include <stdio.h>
#include <string.h>

// Estrutura da carta
struct Carta {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade; // população / área
};

int main() {
    // Dados fixos de duas cartas
    struct Carta carta1 = {
        "Brasil",
        212600000,
        8515767.0,
        1847.00,
        50,
        0 // será calculado depois
    };

    struct Carta carta2 = {
        "Alemanha",
        83100000,
        357386.0,
        3860.00,
        40,
        0 // será calculado depois

    };

    // Cálculo da densidade demográfica (habitantes por km²)
    carta1.densidade = carta1.populacao / carta1.area;
    carta2.densidade = carta2.populacao / carta2.area;

    int opcao;

    // Menu interativo
    printf("=== SUPER TRUNFO: COMPARADOR DE CARTAS ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Digite sua opção (1 a 5): ");
    scanf("%d", &opcao);

    printf("\nComparando %s vs %s\n", carta1.nome, carta2.nome);

    // Switch com if-else para comparação
    switch (opcao) {
        case 1: // População
            printf("Atributo: População\n");
            printf("%s: %d habitantes\n", carta1.nome, carta1.populacao);
            printf("%s: %d habitantes\n", carta2.nome, carta2.populacao);
            if (carta1.populacao > carta2.populacao)
                printf("Vencedor: %s\n", carta1.nome);
            else if (carta2.populacao > carta1.populacao)
                printf("Vencedor: %s\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        case 2: // Área
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", carta1.nome, carta1.area);
            printf("%s: %.2f km²\n", carta2.nome, carta2.area);
            if (carta1.area > carta2.area)
                printf("Vencedor: %s\n", carta1.nome);
            else if (carta2.area > carta1.area)
                printf("Vencedor: %s\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões de reais\n", carta1.nome, carta1.pib);
            printf("%s: %.2f bilhões de reais\n", carta2.nome, carta2.pib);
            if (carta1.pib > carta2.pib)
                printf("Vencedor: %s\n", carta1.nome);
            else if (carta2.pib > carta1.pib)
                printf("Vencedor: %s\n", carta2.nome);
            else
                printf("Empate!\n");
            break;



   
    return 0;
}
