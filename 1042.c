#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int inicio[3], fim[3];
    int i, j, menor;

    i = 0;
    while (i < 3)
        scanf("%d", &inicio[i++]);

    if (inicio[0] < inicio[1]) {
        if (inicio[1] < inicio[2]) {
            fim[0] = inicio[0];
            fim[1] = inicio[1];
            fim[2] = inicio[2];
        }
        else {
            if (inicio[0] < inicio[2]) {
                fim[0] = inicio[0];
                fim[1] = inicio[2];
                fim[2] = inicio[1];
            }
            else {
                fim[0] = inicio[2];
                fim[1] = inicio[0];
                fim[2] = inicio[1];
            }
        }
    }
    else {
        if (inicio[0] < inicio[2]) {
            fim[0] = inicio[1];
            fim[1] = inicio[0];
            fim[2] = inicio[2];
        }
        else {
            if (inicio[1] < inicio[2]) {
                fim[0] = inicio[1];
                fim[1] = inicio[2];
                fim[2] = inicio[0];
            }
            else {
                fim[0] = inicio[2];
                fim[1] = inicio[1];
                fim[2] = inicio[0];
            }
        }
    }

    for (i = 0; i < 3; i++)
        printf("%d\n", fim[i]);
    printf("\n");
    for (i = 0; i < 3; i++)
        printf("%d\n", inicio[i]);

    return 0;
}
