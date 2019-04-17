#include <stdlib.h>
#include <stdio.h>

int MDC (int a, b) {
    int resto;
    while (b!= 0) {
        resto = a%b;
        a = b;
        b = resto;
    }
    return a;
}

int main() {
    int casos, i;
    int pilha[3000][2];

    for(i = 0; i < casos; i++) {
        scanf("%d %d", &pilha[i][0], &pilha[i][1]);
    }

    for(i = 0; i < casos; i++) {
        printf("%d\n", MDC(pilha[i][0], pilha[i][1]));
    }

    return 0;
}
