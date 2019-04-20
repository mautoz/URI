#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int X, Y, i;
    long int soma = 0;

    scanf("%d", &X);
    scanf("%d", &Y);


    if (X > Y)
        for (i = Y + 1; i < X; i++)
            if (abs(i)%2 != 0)
                soma += i;
    else
        for (i = X + 1; i < Y; i++)
            if (abs(i)%2 != 0)
                soma += i;

    printf("%li\n", soma);

    return 0;
}
