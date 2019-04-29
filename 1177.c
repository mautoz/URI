#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int N[1000], T, i;

    scanf("%d", &T);

    i = 0;
    while (i < 1000) {
        N[i] = i%T;
        i++;
    }

    i = 0;
    while (i < 1000) {
        printf("N[%d] = %d\n", i, N[i]);
        i++;
    }

    return 0;
}
