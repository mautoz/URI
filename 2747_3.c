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
        for (i = 0; i < 37; i++) {
            if (i == 8) {
                printf("Roberto")
                i +=7;
            }
            else {
                printf(" ");
            }
        }
        printf("|\n");
    }
    for (i = 0; i < 39; i++)
        printf("-");
    printf("\n");

    return 0;
}
