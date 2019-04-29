#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int N, i, j, atual, anterior;

    scanf("%d", &N);

    while (N != 0) {
        anterior = 1;
        for (i = 1; i <= N; i++) {
            atual = anterior;
            for (j = 1; j <= N; j++) {
                if (j != N)
                    printf("%d\t", atual);
                else
                    printf("%d", atual);
                if (j == 2)
                    anterior = atual;
                atual *= 2;
            }
            printf("\n");
        }
        printf("\n");
        scanf("%d", &N);
    }

    return 0;
}
