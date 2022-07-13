#include <stdio.h>

int main() {
    int mi, s, te, ri, o;

    o = 0;
    ri = 100000;

    scanf("%d", &te);

    do {
        mi = te / ri;
        s = te % 10;
        te = (te % ri) / 10;
        ri = ri / 100;
        o = o + mi - s;
    } while (ri > 0);

    printf("%d\n", o);

    return 0;
}