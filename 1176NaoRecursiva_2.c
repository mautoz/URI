#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main() {
    long long int v[61];
    int i, N, x;

    v[0] = 0;
    v[1] = 1;

    scanf("%d", &N);

    for (i = 2; i <= 60; i++)
        v[i] = v[i - 1] + v[i - 2];

    for (i = 0; i < N; i++) {
        scanf("%d", &x);
        printf("Fib(%d) = %lli\n", x, v[x]);
    }


    return 0;
}
