#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int hi, mi, hf, mf, h, m;

    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

    if (hf == hi) {
        if (mf = mi) {
            h = 24;
            m = 0;
        }
        else (mf >  mi) {
            h = 0;
            m = mf - mi;
        }
    }
    else if (hf > hi) {
        h = hf - hi);
        if (mf >= mi)
            m = mf - mi;
        else
            m = mf + (60 - mi);
    }
    else {
        h = hf + (24 - hi);
        if (mf >= mi)
            m = mf - mi;
        else
            m = mf + (60 - mi);
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);

    return 0;
}
