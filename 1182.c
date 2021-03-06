#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    double M[12][12], soma;
    int C, i, j;
    char T;

    scanf("%d %c", &C, &T);

    for (i = 0; i < 12; i++)
        for (j = 0; j < 12; j++)
            scanf("%lf", &M[i][j]);

    soma = 0.0;
    if (T == 'S') {
        for (i = 0; i < 12; i++)
            soma += M[i][C];
        printf("%.1lf\n", soma);
    }
    else if (T == 'M') {
        for (i = 0; i < 12; i++)
            soma += M[i][C];
        printf("%.1lf\n", soma/12);
    }

    return 0;
}
