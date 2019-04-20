#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main() {
    double soma = 0.0, x;
    int i, contador = 0;

    for (i = 0; i < 6; i++) {
        scanf("%lf", &x);
        if (x > 0) {
            contador++;
            soma+=x;
        }
    }

    printf("%d valores positivos\n", contador);
    printf("%.1lf", soma/contador);

    return 0;
}
