#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int par[5], impar[5], x, i, j, k, l;

    i = 0;
    j = 0;
    k = 0;
    while (k < 15) {
        scanf("%d", &x);
        if (x%2 == 0) {
            par[i] = x;
            i++;
        }
        else {
            impar[j] = x;
            j++;
        }
        if (i == 4) {
            for (l = 0; l <= i; l++)
                printf("par[%d] = %d\n", l, par[l]);
            i = 0;
        }
        if (j == 4) {
            for (l = 0; l <= j; l++)
                printf("impar[%d] = %d\n", l, impar[l]);
            j = 0;
        }

        k++;
    }

    if (i > 0) {
        for (l = 0; l <= i; l++) {
            printf("par[%d] = %d\n", l, par[l]);
            i = 0;
        }
    }
    if (j > 0) {
        for (l = 0; l <= j; l++) {
            printf("impar[%d] = %d\n", l, impar[l]);
            i = 0;
        }
    }
    return 0;
}
