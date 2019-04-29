#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int N, i;
    double x, y, z, soma;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%lf %lf %lf", &x, &y, &z);
        soma = x + y + z;
        printf("%.1lf\n", (2*x + 3*y + 5*z)/10.0);
    }

    return 0;
}
