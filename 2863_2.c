#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int N, i, menor;
    double T[100];

    while (scanf("%d", &N) != EOF) {
        scanf("%lf", &T[0]);
        menor = 0;
        i = 1;
        while (i < N) {
            scanf("%lf", &T[i]);
            if (T[i] < T[menor])
                menor = i;
            i++;
        }
        printf("%.2lf\n", T[menor]);
    }

    return 0;
}
