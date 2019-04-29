#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    double N[100];
    int i;

    scanf("%lf", &N[0]);

    i = 1;
    while (i < 100) {
        N[i] = (N[i - 1] * 50)/(pow(10,4));
        i++;
    }

    i = 0;
    while (i < 100) {
        printf("N[%d] = %.4lf\n", i, N[i]);
        i++;
    }

    return 0;
}
