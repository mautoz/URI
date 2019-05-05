#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main() {
    int i, j;

    for (i = 0; i < 39; i++)
        printf("-");
    printf("\n");

    for (j = 0; j < 5; j++) {
        if (j == 0) {
            printf("|");
            for (i = 0; i < 37; i++) {
                if (i == 8) {
                    printf("Roberto");
                    i += 6;
                }
                else {
                    printf(" ");
                }
            }
            printf("|\n");
        }
        else if (j == 2) {
            printf("|");
            for (i = 0; i < 37; i++) {
                if (i == 8) {
                    printf("5786");
                    i += 3;
                }
                else {
                    printf(" ");
                }
            }
            printf("|\n");
        }
        else if (j == 4) {
            printf("|");
            for (i = 0; i < 37; i++) {
                if (i == 8) {
                    printf("UNIFEI");
                    i += 5;
                }
                else {
                    printf(" ");
                }
            }
            printf("|\n");
        }
        else {
            printf("|");
            for (i = 0; i < 37; i++) {
                printf(" ");
            }
            printf("|\n");
        }
    }
    for (i = 0; i < 39; i++)
        printf("-");
    printf("\n");

    return 0;
}
