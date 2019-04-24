#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int N, i = 0, j, x, y, soma;

    scanf("%d", &N);

    while (i < N) {
        scanf("%d %d", &x, &y);
        soma = 0;

        if (x > y) {
            for (j = y + 1; j < x; j++)
                if (j%2 != 0)
                    soma += j;
        }
        else if (x < y) {
            for (j = x + 1; j < y; j++)
                if (j%2 != 0)
                    soma += j;
        }
        printf("%d\n", soma);
        i++;
    }

    return 0;
}
