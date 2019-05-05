#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int N, i, contador;
    unsigned long long int x, j;
    scanf("%d", &N);

    i = 0;
    while (i < N) {
        scanf("%lli", &x);
        contador = 0;
        for (j = 1; j <= (x/2 + 1) && contador < 2; j++)
            if (x%j == 0)
                contador++;
        if (contador < 2)
            printf("Prime\n");
        else
            printf("Not Prime\n");
        i++;
    }

    return 0;
}
