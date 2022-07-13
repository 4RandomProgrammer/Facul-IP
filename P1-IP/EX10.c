#include <stdio.h>

int main () {
    int ra, misterio, x, y, z, i;

    scanf("%d", &ra);

    for (i = 0, x = 1; i < 4; i++) x *= 10;

    while (x != 0) {
        y = ra / (10*x);
        z = (ra/x) % 10;

        for (i = 1, misterio = y; i < z; i++) misterio *= y;

        if (!z) misterio = 1;

        ra = ra % x;
        printf("ra = %d\n",ra);
        x /= 100;

        printf("%d\n", misterio);
    }

    return 0;
}