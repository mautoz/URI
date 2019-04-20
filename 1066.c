#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int v[5], i, pares = 0, positivos = 0, nulo = 0;

    scanf("%d", &v[0]);
    scanf("%d", &v[1]);
    scanf("%d", &v[2]);
    scanf("%d", &v[3]);
    scanf("%d", &v[4]);

    i = 0;
    while (i < 5) {
        if (v[i] > 0)
            positivos++;
        else if (v[i] == 0)
            nulo++;
        if (abs(v[i])%2 == 0)
            pares++;
        i++;
    }

    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", (5 - pares));
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", (5 - positivos - nulo));


    return 0;
}
