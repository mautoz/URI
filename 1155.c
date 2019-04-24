#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int i;
    double soma = 0.0;

    for (i = 1; i <= 100; i++)
        soma += 1/(double)i;

    printf("%.2lf\n", soma);

    return 0;
}
