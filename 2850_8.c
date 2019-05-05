#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main() {
    char pernas[15];

    while (strlen(fgets(pernas, 15, stdin)) != 0) {

        if (strstr(pernas, "esquerda") == 0)
            printf("ingles\n");
        else if (strstr(pernas, "direita") == 0)
            printf("frances\n");
        else if (strstr(pernas, "nenhuma") == 0)
            printf("portugues\n");
        else if (strstr(pernas, "as duas") == 0)
            printf("caiu\n");
        strcpy(pernas, "");
    }

    return 0;
}
