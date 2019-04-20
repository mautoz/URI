#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main() {
    int A, B;

    scanf("%d %d", &A, &B);

    if (abs(A) >= abs(B) && abs(A)%abs(B) == 0)
        printf("Sao Multiplos\n");
    else if (abs(A) < abs(B) && abs(B)%abs(A) == 0)
        printf("Sao Multiplos\n");
    else
        printf("Nao sao Multiplos\n");

    return 0;
}
