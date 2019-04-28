#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int x[10], i;

    i = 0;
    while (i < 10)
        scanf("%d", &x[i++]);

    i = 0;
    while (i < 10) {
        if (x[i] <= 0)
            x[i] = 1;
        i++;
    }

    i = 0;
    while (i < 10) {
        printf("X[%d] = %d\n", i, x[i]);
        i++;
    }

    return 0;
}
