#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int A, B, C, D;

    scanf("%d %d %d %d", &A, &B, &C, &D);

    if (abs(A-B) < C && C < A + B)
        printf("S\n");
    else if (abs(A-B) < D && D < A + B)
        printf("S\n");
    else if (abs(A-C) < B && B < A + C)
        printf("S\n");
    else if (abs(A-C) < D && D < A + C)
        printf("S\n");
    else if (abs(A-D) < B && B < A + D)
        printf("S\n");
    else if (abs(A-D) < C && C < A + D)
        printf("S\n");
    else if (abs(B-C) < A && A < B + C)
        printf("S\n");
    else if (abs(B-C) < D && D < B + C)
        printf("S\n");
    else if (abs(B-D) < A && A < B + D)
        printf("S\n");
    else if (abs(B-D) < C && C < B + D)
        printf("S\n");
    else if (abs(C-D) < A && A < C + D)
        printf("S\n");
    else if (abs(C-D) < B && B < C + D)
        printf("S\n");
    else
        printf("N\n");


    return 0;
}
