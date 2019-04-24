#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    long int N;
    int i, fat = 1;

    scanf("%d", &N);

    for (i = 1; i <= N; i++)
        fat *= i;

    printf("%li\n", fat);

    return 0;
}
