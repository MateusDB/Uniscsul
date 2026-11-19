#include <stdio.h>

int main() {
    int rodada = 1;
    int pontos;
    int soma = 0;

    while (rodada <= 3) {
        printf("Digite os pontos da rodada %d: ", rodada);
        scanf("%d", &pontos);

        soma += pontos;
        rodada++;
    }

    printf("Total de pontos: %d\n", soma);

    return 0;
}