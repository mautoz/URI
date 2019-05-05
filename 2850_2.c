#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main() {
    char pernas[10];

    while (scanf("%9s", pernas) != EOF) {
        printf("1 - %d\n", strlen(pernas));
        if (strcmp(pernas, "esquerda") == 0)
            printf("ingles\n");
        else if (strcmp(pernas, "direita") == 0)
            printf("frances\n");
        else if (strcmp(pernas, "nenhuma") == 0)
            printf("portugues\n");
        else if (strcmp(pernas, "as duas") == 0)
            printf("caiu\n");
        strcpy(pernas, "");
        printf("*%d\n", strlen(pernas));

    }

    return 0;
}
