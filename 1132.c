#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int x, y, i, soma = 0;

    scanf("%d", &x);
    scanf("%d", &y);

    if (x < y) {
        for (i = x; i <= y; i++)
            if (i%13 != 0)
                soma += i;
    }
    else if (x > y) {
        for (i = y; i <= x; i++)
            if (i%13 != 0)
                soma += i;
    }

    printf("%d\n", soma);

    return 0;
}
