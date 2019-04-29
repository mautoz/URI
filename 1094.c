#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int N, i, quantia;
    char tipo;

    scanf("%d", &N);

    i = 0;
    while (i < N) {
        scanf("%d %c", &quantia, &tipo);
        if (tipo == 'C') {
            printf("C\n");
        }
        else if (tipo == 'R') {
            printf("R\n");
        }
        else if (tipo == 'S') {
            printf("S\n");
        }
        i++;
    }


    return 0;
}
