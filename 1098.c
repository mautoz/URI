#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    double I, J;

    for (I = 0.0; I <= 2.0; I+=0.2) {
        for (J = 1; J <= 3; J++) {
            if ((I == 0.0) || (I > 0.9 && I < 1.1) || (I > 1.98 && I < 2.01))
                printf("I=%.0lf J=%.0lf\n", I, (J+I));
            else
                printf("I=%.1lf J=%.1lf\n", I, (J+I));
        }
    }

    return 0;
}
