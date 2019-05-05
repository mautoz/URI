#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main() {
    int C, i, N;

    scanf("%d", &C);

    i = 0;
    while (i < C) {
        scanf("%d", &N);
        if (N <= 8000)
            printf("Inseto!\n");
        else
            printf("Mais de 8000!\n");
        i++;
    }

    return 0;
}
