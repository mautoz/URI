#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    double A[100];
    int i;

    i = 0;
    while (i < 100)
        scanf("%lf", &A[i++]);

    i = 0;
    while (i < 100) {
        if (A[i] <= 10.0)
            printf("A[%d] = %.1lf\n", i, A[i]);
        i++;
    }

    return 0;
}
