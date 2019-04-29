#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    double M[12][12], soma;
    int L, i, j;
    char O;

    scanf("%c", &O);

    for (i = 0; i < 12; i++)
        for (j = 0; j < 12; j++)
            scanf("%lf", &M[i][j]);

    soma = 0.0;
    if (O == 'S') {
        for (i = 0; i < 12; i++)
            for (j =  0; j < 11 - i; j++)
                soma += M[i][j];
        printf("%.1lf\n", soma);
    }
    else if (O == 'M') {
        for (i = 0; i < 12; i++)
            for (j =  0; j < 11 - i; j++)
                soma += M[i][j];
        printf("%.1lf\n", soma/66);
    }

    return 0;
}
