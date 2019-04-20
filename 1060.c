#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int contador = 0, i = 0;
    double x;

    while (i < 6) {
        scanf("%lf", &x);
        if (x > 0) contador ++;
        i++;
    }

    printf("%d valores positivos\n", contador);

    return 0;
}
