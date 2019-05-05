#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
unsigned long long int fatorial (int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fatorial(n-1);
}

int main() {
    unsigned long long int TOTAL;
    int A, B;

    while (scanf("%d %d", &A, &B) != EOF) {
        TOTAL = fatorial(A) + fatorial(B);
        printf("%lli\n", TOTAL);
    }

    return 0;
}
