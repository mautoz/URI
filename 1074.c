#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int N, i = 0, x;

    scanf("%d", &N);

    while (i < N) {
        scanf("%d", &x);

        if (x == 0)
            printf("NULL\n");
        else if (x < 0) {
            if (x%2 == 0)
                printf("EVEN NEGATIVE\n");
            else
                printf("ODD NEGATIVE\n");
        }
        else if (x > 0) {
            if (x%2 == 0)
                printf("EVEN POSITIVE\n");
            else
                printf("ODD POSITIVE\n");
        }
        i++;
    }

    return 0;
}
