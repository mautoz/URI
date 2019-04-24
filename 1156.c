#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int potencia (int n, int e) {
    int num = 1, i;

    for (i = 0; i < e; i++)
        num *= n;

    return num;
}

int main() {
    int i;
    double soma = 0.0;

    for (i = 0; i <= 19; i++)
        soma += (double)(1+2*i)/potencia(2, i);


    printf("%.2lf\n", soma);

    return 0;
}
