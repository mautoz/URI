#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int N, i, j, soma, x;

    scanf("%d", &N);

    i = 0;
    while (i < N) {
        scanf("%d", &x);
        soma = 0;
        for (j = 1; j < x; j++)
            if (x%j == 0)
                soma += j;
        if (soma == x)
            printf("%d eh perfeito\n", x);
        else
            printf("%d nao eh perfeito\n", x);
        i++;
    }

    return 0;
}

