#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int N, X, Y, i;

    scanf("%d", &N);

    i=0;
    while (i < N) {
        scanf("%d %d", &X, &Y);

        if (Y == 0)
            printf("divisao impossivel\n");
        else
            printf("%.1lf\n", (double)X/Y);

        i++;
    }


    return 0;
}
