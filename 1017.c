#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int t, v;

    scanf("%d", &t);
    scanf("%d", &v);

    printf("%.3lf\n", (double)((t*v)/12.0));

    return 0;
}
