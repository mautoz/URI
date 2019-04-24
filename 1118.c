#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    double nota, soma;
    int i = 0, opcao = 1;

    while (opcao == 1) {
        i = 0;
        soma = 0.0;
        while (i < 2) {
            scanf("%lf", &nota);
            if (nota < 0 || nota > 10)
                printf("nota invalida\n");
            else {
                soma += nota;
                i++;
            }
        }
        printf("media = %.2lf\n", soma/2.0);

        do {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &opcao);
        } while (opcao != 1 && opcao != 2);

    }

    return 0;
}
