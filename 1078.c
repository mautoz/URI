#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int N, i;

    scanf("%d", &N);

    for (i = 0; i <= 10; i++)
        printf("%d x %d = %d\n", i, N, i*N);


    return 0;
}
