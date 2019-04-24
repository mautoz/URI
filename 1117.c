#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    double nota, soma = 0.0;
    int i = 0;

    do {
        scanf("%lf", &nota);
        if (nota < 0 || nota > 10)
            printf("nota invalida\n");
        else {
            soma += nota;
            i++;
        }
    } while (i < 2);

    printf("media = %.2lf\n", soma/2.0);

    return 0;
}
