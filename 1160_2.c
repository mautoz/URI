#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int N, i, PA, PB, anos;
    double G1, G2;

    scanf("%d", &N);

    i = 0;
    while (i < N) {
        scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);
        anos = 0;
        while (PA <= PB && anos <= 101) {
            PA = PA*(1.0 + G1/100.0);
            PB = PB*(1.0 + G2/100.0);
            anos++;
        }
        if (anos <= 100)
            printf("%d anos.\n", anos);
        else
            printf("Mais de 1 seculo.\n");
        i++;
    }

    return 0;
}

