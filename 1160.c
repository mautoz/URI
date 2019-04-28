#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int N, i, j, PA, PB;
    double G1, G2;

    scanf("%d", &N);

    i = 0;
    while (i < N) {
        scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);
        anos = 0;
        j = 0;
        while (j < 5) {
        //while (PA < PB && anos <= 100) {
            PA *= (1.0 + G1);
            PB *= (1.0 + G2);
            printf("%.2lf %.2lf\n", PA, PB);
            j++;
        }
        i++;
    }

    return 0;
}

