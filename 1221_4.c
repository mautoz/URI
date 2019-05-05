#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int N, i, contador;
    unsigned long long int x, j;
    scanf("%d", &N);

    i = 0;
    while (i < N) {
        scanf("%lli", &x);
        if (x <= 3)
            printf("Prime\n");
        else if (x%2 == 0 || x%3 == 0)
            printf("Not Prime\n");
        j = 5;
        while (j*j <= x)
            if (n%j == 0 || n%(j+2) == 0)
                printf("Not Prime\n");
            j += 6;
        i++;
    }

    return 0;
}
