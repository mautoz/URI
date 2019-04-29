#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int C, N, i;
    double notas, soma, buffer;

    scanf("%d", &C);

    i = 0;
    while (i < C) {
        scanf("%d", &N);
        for (i = 0; i < N; i++) {
            scanf("%lf", &buffer);
            soma+=buffer;
        }
    }

    return 0;
}
