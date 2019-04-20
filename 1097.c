#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int I, J;

    for (I = 1; I <=9; I+=2)
        for (J = 6 + I; J >= 4 + I; J--)
            printf("I=%d J=%d\n", I, J);

    return 0;
}
