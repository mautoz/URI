#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    double v[3];
    int i, j, temp;

    scanf("%lf %lf %lf", &v[0], &v[1], &v[2]);

    for (i = 0; i < 2; i++) {
        for (j = i + 1; j < 3; j++) {
            if (v[i] < v[j]) {
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }

    if (v[0] >= v[1] + v[2])
        printf("NAO FORMA TRIANGULO\n");
    else {
        if (v[0]*v[0] == v[1]*v[1] + v[2]*v[2])
            printf("TRIANGULO RETANGULO\n");
        if (v[0]*v[0] > v[1]*v[1] + v[2]*v[2])
            printf("TRIANGULO OBTUSANGULO\n");
        if (v[0]*v[0] < v[1]*v[1] + v[2]*v[2])
            printf("TRIANGULO ACUTANGULO\n");
        if (v[0] == v[1] &&  v[0] == v[2])
            printf("TRIANGULO EQUILATERO\n");
        if ((v[0] == v[1] &&  v[0] != v[2]) || (v[0] == v[2] &&  v[0] != v[1]) || (v[1] == v[2] &&  v[0] != v[1]))
            printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
