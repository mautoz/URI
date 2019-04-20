#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int X, Y, i = 1;

    scanf("%d %d", &X, &Y);

    while (i <= Y) {
        if (i%X == 0)
            printf("%d\n", i);
        else
            printf("%d ", i);
        i++;
    }
    if ((i-1)%X != 0)
        printf("\n");

    return 0;
}
