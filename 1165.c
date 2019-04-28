#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int N, i, j, primo, x;

    scanf("%d", &N);

    i = 0;
    while (i < N) {
        scanf("%d", &x);
        primo = 0;
        for (j = 1; j <= x && primo <=3; j++)
            if (x%j == 0)
                primo++;
        if (primo <= 2)
            printf("%d eh primo\n", x);
        else
            printf("%d nao eh primo\n", x);
        i++;
    }

    return 0;
}
