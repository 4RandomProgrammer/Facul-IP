#include <stdio.h>

int main() {
    int ma, gi, ca;

    scanf("%d%d%d", &ma, &gi, &ca);

    if (ma > ca) {
        int aux = ma;
        ma = ca;
        ca = aux;
    }

    if (ma > gi) {
        int aux = ma;
        ma = gi;
        gi = aux;
    }

    if (gi > ca) {
        int aux = gi;
        gi = ca;
        ca = aux;
    }

    printf("%d %d %d\n", ma, gi, ca);

    return 0;
}