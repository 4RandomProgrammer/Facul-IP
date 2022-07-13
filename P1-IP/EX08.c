#include <stdio.h>

int main() {
    int ra, misterio = 0;

    scanf("%d", &ra);

    while (ra > 0) {
        switch ((ra % 10) % 3) {
            case 0: misterio += 2;
            case 1: misterio *= 2;
            case 2: misterio -= 2;
        }
        printf("%d\n",misterio);
        ra /= 100;
        printf("%d\n",ra);
    }

    printf("%d\n", misterio);

    return 0;
}