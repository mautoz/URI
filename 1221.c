#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int N, i, x, contador;

    scanf("%d", &N);

    i = 0;
    while (i < N) {
        scanf("%d", &x);
        contador = 0;
        for (i = 1; i <= x/2; i++) {
            if (x%i == 0)
                contador++;
            if (contador >= 2) {
                printf("Not Prime\n");
                break;
            }
        }
        if (contador <2)
            printf("Prime\n");
    }

    return 0;
}
