#include <stdlib.h>
#include <stdio.h>

long long int potencia (int n, int m) {
    long long int pot = 1
    int j = 0;

    while (j < m) {
        pot *= n;
        j++;
    }

    return pot;
}

int main() {
    int C, N, M, i;

    scanf("%d", &C);

    for (i = 0; i < C; i++) {
        scanf("%d %d", &N, &M);
        printf("%lli\n", potencia(N, M));
    }

    return 0;
}
