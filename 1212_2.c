#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int carry = 0, temp = 0;
    int x, y, restox, restoy;

    scanf("%d %d", &x, &y);

    while (x != 0 || y != 0) {
        carry = 0;
        temp = 0;
        restox = x%10;
        restoy = y%10;
        while (x != 0 || y != 0) {
            if (restox + restoy + temp> 9) {
                carry++;
                temp = 1;
            }
            else
                temp = 0;
            x /= 10;
            y /= 10;
            restox = x%10;
            restoy = y%10;
        }
        if (carry == 0)
            printf("No carry operation.\n");
        else if (carry == 1)
            printf("1 carry operation.\n");
        else
            printf("%d carry operations.\n", carry);

        scanf("%d %d", &x, &y);
    }

    return 0;
}
