#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int N[10], i;

    scanf("%d", &N[0]);

    i = 1;
    while (i < 10) {
        N[i] = 2*N[i - 1];
        i++;
    }

    i = 0;
    while (i < 10) {
        printf("N[%d] = %d\n", i, N[i]);
        i++;
    }

    return 0;
}
