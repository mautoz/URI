#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int v[5], pares = 0, i = 0;

    scanf("%d", &v[0]);
    scanf("%d", &v[1]);
    scanf("%d", &v[2]);
    scanf("%d", &v[3]);
    scanf("%d", &v[4]);

    while (i < 5) {
        if (abs(v[i])%2==0)
            pares++;
        i++;
    }

    printf("%d valores pares\n", pares);

    return 0;
}
