#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main() {

    char questao[50], buffer;
    int C, i;

    scanf("%d", &C);
    buffer = getchar();
    i = 0;
    while (i < C) {
        fgets(questao, 50, stdin);
        printf("gzuz\n");
        strcpy(questao, "");
        i++;
    }

    return 0;
}
