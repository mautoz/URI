#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    double salario, total = 0.0, tipo;

    scanf("%lf", &salario);


    if (salario < 2000.01)
        tipo = 0;
    else if (salario <= 3000.01)
        tipo = 1;
    else if (salario <= 4500.01)
        tipo = 2;
    else
        tipo = 3;

    if (tipo == 0)
        printf("Isento\n");
    else if (tipo == 1) {
        total += ((salario - 2000.00) * 0.08);
        printf("R$ %.2lf\n", total);
    }
    else if (tipo == 2) {
        total += (80.00 + (salario - 3000.00) * 0.18);
        printf("R$ %.2lf\n", total);
    }
    else if (tipo == 3) {
        total += (80.00 + 270.00 + (salario - 4500.00) * 0.28);
        printf("R$ %.2lf\n", total);
    }

    return 0;
}
