#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int hi, mi, hf, mf, h, m;

    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

    if (hf == hi) {
        if (mf == mi) {
            h = 24;
            m = 0;
        }
        else if (mf >  mi) {
            h = 0;
            m = mf - mi;
        }
        else {
            h = 23;
            m = mf + (60 - mi);
        }
    }
    else if (hf > hi) {
        if (hf - hi == 1 && mf == mi) {
            h = 1;
            m = 0;
        }
        else if (hf - hi == 1 && mf > mi) {
            h = 1;
            m = mf - mi;
        }
        else if (hf - hi == 1 && mf < mi) {
            h = 0;
            m = mf + (60 - mi);
        }
        else if (hf - hi != 1) {
            if (mf >= mi) {
                h = hf - hi;
                m = mf - mi;
            }
            else {
                h = hf - hi - 1;
                m = mf + (60 - mi);
            }
        }
    }
    else {
        if (hi - hf == 1 && mf >= mi) {
            h = 23;
            m = mf - mi;
        }
        else if (hi - hf == 1 && mf < mi) {
            h = 22;
            m = mf + (60 - mi);
        }
        else if (hi - hf != 1) {
            if (mf >= mi) {
                h = hf - hi;
                m = mf - mi;
            }
            else {
                h = hf - hi - 1;
                m = mf + (60 - mi);
            }
        }
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);

    return 0;
}
