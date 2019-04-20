#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int fibo (int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibo(n-1) + fibo(n-2);
}

int main() {
    int N, i, x;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d", &x);
        printf("Fib(%d) = %d\n", x, fibo(x));
    }

    return 0;
}
