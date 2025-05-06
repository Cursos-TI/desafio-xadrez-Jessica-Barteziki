#include <stdio.h>

int main() {
    // Simulação do movimento da Torre (5 casas para a direita - usando FOR)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Simulação do movimento do Bispo (5 casas para cima e à direita - usando WHILE)
    printf("Movimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima, Direita\n");
        j++;
    }
    printf("\n");

    // Simulação do movimento da Rainha (8 casas para a esquerda - usando DO-WHILE)
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);
    printf("\n");

    return 0;
}