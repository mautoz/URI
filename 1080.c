#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int i, x, pos, valor;

    i = 1;
    scanf("%d", &x);
    pos = i;
    valor = x;

    i++;

    while (i <= 100) {
        scanf("%d", &x);
        if (x > valor) {
            valor = x;
            pos = i;
        }
        i++;
    }

    printf("%d\n", valor);
    printf("%d\n", pos);

    return 0;
}
