#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main() {
    char pernas[10];

    while (strlen(gets(pernas)) != 0) {
        printf("==%c", pernas[strlen(pernas)-1]);
        if (strcmp(pernas, "esquerda") == 0)
            printf("ingles\n");
        else if (strcmp(pernas, "direita") == 0)
            printf("frances\n");
        else if (strcmp(pernas, "nenhuma") == 0)
            printf("portugues\n");
        else if (strcmp(pernas, "as duas") == 0)
            printf("caiu\n");
        strcpy(pernas, "");
    }

    return 0;
}
