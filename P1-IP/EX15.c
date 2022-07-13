#include <stdio.h>

int main() {
    int n, i, j, x = 0;

    scanf("%d", &n);

    i = 1;

    for (j = n; j > 0; j /= 8) {
        x = x + (j % 8) * i;
        i *= 10;
        n /= 8;
     }

    printf("%d\n", x);

    return 0;
}