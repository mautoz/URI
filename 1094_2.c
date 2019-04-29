#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int N, i, quantia, total, tc, tr, ts;
    char tipo;

    scanf("%d", &N);

    i = 0;
    total = 0;
    tc = 0;
    tr = 0;
    ts = 0;
    while (i < N) {
        scanf("%d %c", &quantia, &tipo);
        if (tipo == 'C') {
            tc += quantia;
        }
        else if (tipo == 'R') {
            tr += quantia;
        }
        else if (tipo == 'S') {
            ts += quantia;
        }
        total += quantia;
        i++;
    }
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", tc);
    printf("Total de ratos: %d\n", tr);
    printf("Total de sapos: %d\n", ts);
    printf("Percentual de coelhos: %.2lf %%\n", ((double)tc/(double)total)*100);
    printf("Percentual de ratos: %.2lf %%\n", ((double)tr/(double)total)*100);
    printf("Percentual de sapos: %.2lf %%\n", ((double)ts/(double)total)*100);

    return 0;
}
