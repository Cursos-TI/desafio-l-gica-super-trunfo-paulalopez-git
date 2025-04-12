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




   
    return 0;
}
