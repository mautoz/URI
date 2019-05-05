#include <stdlib.h>
#include <stdio.h>

long long int potencia (int n, int m) {
    int pot = 1, j = 0;

    while (j < m)
        pot *= n;

    return pot;
}

int main() {
    int C, N, M, i;

    scanf("%d", &C);

    for (i = 0; i < C; i++) {
        printf("%lli\n", potencia(N, M));
    }

    return 0;
}
