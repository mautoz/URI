#include <stdlib.h>
#include <stdio.h>

int main() {
    int reg, horas;
    double salario;

    scanf("%d", &reg);
    scanf("%d", &horas);
    scanf("%lf", &salario);

    printf("NUMBER = %d\n", reg);
    printf("SALARY = U$ %.2lf\n", (salario*horas));

    return 0;
}
