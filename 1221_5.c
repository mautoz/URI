#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int ehPrimo (unsigned long long int x) {
        int j;

        if (x <= 3)
            return 1;
        else if (x%2 == 0 || x%3 == 0)
            return 0;
        j = 5;
        while (j*j <= x) {
            if (x%j == 0 || x%(j+2) == 0)
                return 0;
            j += 6;
        }
        return 1;
}

int main() {
    int N, i;
    unsigned long long int x;
    scanf("%d", &N);

    i = 0;
    while (i < N) {
        scanf("%lli", &x);
        if (ehPrimo(x) == 1)
            printf("Prime\n");
        else
            printf("Not Prime\n");
        i++;
    }

    return 0;
}
