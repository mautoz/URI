#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int idade, soma = 0, contador = 0;

    scanf("%d", &idade);

    while (idade > 0) {
        soma += idade;
        contador++;
        scanf("%d", &idade);
    }

    printf("%.2lf\n", (double)soma/contador);

    return 0;
}
