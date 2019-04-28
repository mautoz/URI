#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int N[20], temp, i;

    i = 0;
    while (i < 20)
        scanf("%d", &N[i++]);

    i = 0;
    while (i < 10) {
        temp = N[i];
        N[i] = N[20 - i - 1];
        N[20 - i - 1] = temp;
        i++;
    }

    i = 0;
    while (i < 20) {
        printf("N[%d] = %d\n", i, N[i]);
        i++;
    }

    return 0;
}
