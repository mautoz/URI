#include <stdlib.h>
#include <stdio.h>

int main() {
    double MEDIA, A, B;

    scanf("%lf", &A);
    scanf("%lf", &B);

    MEDIA = ((A*3.5)+(B*7.5))/11;

    printf("MEDIA = %.5lf\n", MEDIA);

    return 0;
}
