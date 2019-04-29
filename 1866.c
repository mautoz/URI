#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int C, N, i;

    i = 0;
    scanf("%d", &C);

    while (i < C) {
        scanf("%d", &N);

        if (N%2 == 1)
            printf("1\n");
        else
            printf("0\n");

        i++;
    }


    return 0;
}
