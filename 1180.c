#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int X[1000], N, i, menor;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
        scanf("%d", &X[i]);

    i = 1;
    menor = 0;
    while (i < N) {
        if (X[menor] > X[i])
            menor = i;
        i++;
    }

    printf("Menor valor: %d\n", X[menor]);
    printf("Posicao: %d\n", menor);

    return 0;
}
