#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int N, i;
    double x, y, z, soma;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%lf %lf %lf", &x, &y, &z);
        soma = 0.2*x + 0.3*y + 0.5*z;
        printf("%.1lf\n", soma);
    }

    return 0;
}
