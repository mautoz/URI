#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main() {
    int i, j;

    for (i = 0; i < 39; i++)
        printf("-");
    printf("\n");

    for (j = 0; j < 5; j++) {
        printf("|");
        for (i = 0; i < 37; i++)
            printf(" ");
        printf("|\n");
    }
    printf("\n");
    for (i = 0; i < 39; i++)
        printf("-");
    printf("\n");

    return 0;
}
