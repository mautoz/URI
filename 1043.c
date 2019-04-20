#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C;

    scanf("%lf %lf %lf", &A, &B, &C);

    if ((abs(A-B)<C && C<A+B) && (abs(A-C)<B && B<A+C) && (abs(B-C)<A && A<B+C))
        printf("Perimetro = %.1lf\n", (A+B+C));
    else
        printf("Area = %.1lf\n", ((A+B)*C)/2);

    return 0;
}
