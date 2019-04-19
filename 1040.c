#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    double N1, N2, N3, N4, EXAME, MEDIA;

    scanf ("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);

    MEDIA = (2*N1 + 3*N2 + 4*N3 + N4)/10;

    printf("Media: %0.1lf\n", MEDIA);


    if (MEDIA < 5.0)
        printf("Aluno reprovado.\n");
    else if (MEDIA < 7.0) {
        printf("Aluno em exame.\n");
        scanf("%lf", &EXAME);
        printf("Nota do exame: %0.1lf\n", EXAME);
        MEDIA = (MEDIA + EXAME)/2;
        if (MEDIA >=5)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");
        printf("Media final: %0.1lf\n", MEDIA);
    }
    else if (MEDIA >= 7.0)
        printf("Aluno aprovado.\n");



    return 0;
}
