#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    double M[12][12];
    int L, i, j;
    char T;

    scanf("%d %c", &L, &T);

    for (i = 0; i < 12; i++)
        for (j = 0; j < 12; j++)
            scanf("%lf", &M[i][j]);

    for (i = 0; i < 12; i++)
        for (j = 0; j < 12; j++)
            printf("%.1lf", M[i][j]);

    return 0;
}
