#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int N, i, j, atual;

    scanf("%d", &N);

    atual = 1;
    for (i = 1; i <= N; i++) {
        for (j = 1; j <= N; j++) {
            printf("%d ", atual);
            atual*=2;
        }
        atual = atual/pow(2, i);
        printf("\n");
    }

    return 0;
}
