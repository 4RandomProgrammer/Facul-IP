#include <stdio.h>

int main() {
    int ra, x = 0, y, z, i, j;
    int misterio1 = 0, misterio2 = 0, misterio3 = 0;

    scanf("%d", &ra);

    while (ra != 0) {
        y = (ra % 10) * 10;
        if (y >= 2) x++;
        for (i = 3; i < y; i++) {
            for (j = 2, z = 1; j < i && z; j++)
                if (i % j == 0) z = 0;
            if (z) x++;
        }
        ra /= 10;
    }

    for (i = 1; i <= x; i++)
        switch (i % 4) {
            case 0:
                misterio1++;
                break;
            case 2:
                misterio2++;
                break;
            default:
                misterio3++;
        }

    printf("%d\n", x);
    printf("%d %d %d\n", misterio1, misterio2, misterio3);

    return 0;
}