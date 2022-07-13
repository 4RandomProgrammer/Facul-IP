#include <stdio.h>

int main() {
    int x, y, i, j, mmc, mdc;

    scanf("%d", &x);
    scanf("%d", &y);
    ________________

    if(x < y)
        j = x;
    _____
        j = y;

    ____________

    for (i = 1; ______; i____)
        if(x % i == 0 ____ y % i == 0 ________) mdc = ____;

    mmc = (x * y) / _____; //propriedade de mmc e mdc

    printf("MMC(%d, %d) = %d\n", x, y, mmc);
    printf("MDC(%d, %d) = %d\n", x, y, mdc);

    return 0;
}