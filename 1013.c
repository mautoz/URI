#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if ((a+b+abs(a-b))/2 == a) {
        if ((a+c+abs(a-c))/2 == a)
            printf("%d eh o maior", a);
        else
            printf("%d eh o maior", c);
    }
    else {
        if ((b+c+abs(b-c))/2 == b)
            printf("%d eh o maior", b);
        else
            printf("%d eh o maior", c);
    }


    return 0;
}
