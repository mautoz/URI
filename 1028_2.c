#include <stdlib.h>
#include <stdio.h>

int MDC (int a, int b) {
    int resto;
    while (b!= 0) {
        resto = a%b;
        a = b;
        b = resto;
    }
    return a;
}

int main() {
    int N, i, F1, F2;

    scanf("%d", &N);

    for(i = 0; i < N; i++) {
        scanf("%d %d", &F1, &F2);
        printf("%d\n", MDC(F1, F2));
    }

    return 0;
}
