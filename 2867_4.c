#include <stdlib.h>
#include <stdio.h>

unsigned long long int potencia (int n, int m) {
    long long int pot = 1;
    int j = 0;

    while (j < m) {
        pot *= n;
        j++;
    }

    return pot;
}

int contarDigito (unsigned long long int n) {
    unsigned long long int temp = n;
    int contador = 0;

    while (temp != 0) {
        temp/=10;
        contador++;
    }

    return contador;
}

int main() {
    int C, N, M, i;

    scanf("%d", &C);

    for (i = 0; i < C; i++) {
        scanf("%d %d", &N, &M);
        printf("%d\n", contarDigito(potencia(N, M)));
    }

    return 0;
}
