#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int N, i, j, x, y, soma;

    scanf("%d", &N);

    i = 0;
    while (i < N) {
        soma = 0;
        scanf("%d %d", &x, &y);
        j = 0;
        while (j < y) {
            if (x%2 == 1 || x%2 == -1) {
                soma += x;
                j++;
            }
            x++;
        }
        printf("%d\n", soma);
        i++;
    }

    return 0;
}
