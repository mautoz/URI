#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int v[3], i, j, temp;

    scanf("%lf %lf %lf", &v[0], &v[1], &v[2]);

    for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 2; j++) {
            if (v[i] < v[j]) {
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }


    return 0;
}
