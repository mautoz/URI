#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    char palavra1[20], palavra2[20], palavra3[20];
    int tam;

    scanf("%s", palavra1);
    scanf("%s", palavra2);
    scanf("%s", palavra3);

    if (strcmp("vertebrado", palavra1) == 0)
        if (strcmp("ave", palavra2) == 0)
            if (strcmp("carnivoro", palavra3) == 0)
                printf("aguia\n");
            else if (strcmp("onivoro", palavra3) == 0)
                printf("pomba\n");
        else if (strcmp("mamifero", palavra2) == 0)
            if (strcmp("onivoro", palavra3) == 0)
                printf("homem\n");
            else if (strcmp("herbivoro", palavra3) == 0)
                printf("vaca\n");
    else if (strcmp("invertebrado", palavra1) == 0) {
        printf("1\n");
        if (strcmp("inseto", palavra2) == 0) {
            printf("2\n");
            if (strcmp("hematofago", palavra3) == 0)
                printf("pulga\n");
            else if (strcmp("herbivoro", palavra3) == 0)
                printf("lagarta\n");
        }
        else if (strcmp("anelideo", palavra2) == 0) {
            printf("2\n");
            if (strcmp("hematofago", palavra3) == 0)
                printf("sanguessuga\n");
            else if (strcmp("onivoro", palavra3) == 0)
                printf("minhoca\n");
        }
    }

    return 0;
}
