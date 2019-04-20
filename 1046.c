#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int i, f;

    scanf("%d %d", &i, &f);

    if (i == f)
        printf("O JOGO DUROU 24 HORA(S)\n");
    else {
        if (f > i)
            printf("O JOGO DUROU %d HORA(S)\n", (f - i));
        else
            printf("O JOGO DUROU %d HORA(S)\n", ((24-i) + f));
    }

    return 0;
}
