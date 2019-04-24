#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int N, anterior = 0, atual = 1, i, temp;

    scanf("%d", &N);

    if (N == 1)
        printf("0\n");
    else {
        printf("%d %d", anterior, atual);
        for (i = 2; i < N; i++) {
            printf(" ", atual);
            temp = atual;
            atual += anterior;
            anterior = temp;
            printf("%d", atual);
        }
        printf("\n");
    }

    return 0;
}
