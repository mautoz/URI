#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main() {
    int i;

    for (i = 0; i < 39; i++)
        printf("-");
    printf("\n");

    printf("|");
    for (i = 0; i < 37; i++)
        printf(" ");
    printf("|");

    return 0;
}
