#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main() {
    int v[60], i, N;

    v[0] = 0;
    v[1] = 1;

    scanf("%d", &N);

    for (i = 2; i <60; i++)
        v[i] = v[i - 1] + v[i - 2];

    for (i = 0; i < N; i++) {
        scanf("%d", &x);
        printf("Fib(%d) = %d\n", x, v[x]);
    }


    return 0;
}
