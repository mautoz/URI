#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int C, N, i, j, k;
    double notas[1000], soma, media;

    scanf("%d", &C);

    i = 0;
    while (i < C) {
        scanf("%d", &N);
        soma = 0.0;
        for (j = 0; j < N; j++) {
            scanf("%lf", &notas[j]);
            soma+=notas[j];
        }
        media = soma/(double)N;
        j = 0;
        k = 0;
        while (j < N) {
            if (notas[j] > media)
                k++;
            j++;
        }
        printf("%.3lf%%\n", ((double)k/(double)N)*100);
        i++;
    }

    return 0;
}
