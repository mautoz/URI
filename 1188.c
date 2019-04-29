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
        for (i = 11; i >= 7; i--)
            for (j =  12 - i; j <= i - 1; j++)
                soma += M[i][j];
        printf("%.1lf\n", soma);
    }
    else if (O == 'M') {
        for (i = 11; i >= 7; i--)
            for (j =  12 - i; j <= i - 1; j++)
                soma += M[i][j];
        printf("%.1lf\n", soma/30);
    }

    return 0;
}
