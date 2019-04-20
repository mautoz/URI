#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int M, N, i, soma;

    scanf("%d %d", &M, &N);

    while (M > 0 && N > 0) {
        soma = 0;
        if (M > N) {
            for (i = N; i <= M; i++) {
                printf("%d ", i);
                soma+=i;
            }
        }
        else {
             for (i = M; i <= N; i++) {
                printf("%d ", i);
                soma+=i;
            }
        }
        printf("Sum=%d\n", soma);
        scanf("%d %d", &M, &N);
    }

    return 0;
}
