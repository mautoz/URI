#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int N, in = 0, out = 0, i = 0, x;

    scanf("%d", &N);

    while (i < N) {
        scanf("%d", &x);
        if (x >= 10 && x <=20)
            in++;
        else
            out++;
        i++;
    }

    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;
}
