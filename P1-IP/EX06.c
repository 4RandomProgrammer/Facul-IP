#include <stdio.h>
#define NUM 5

int main() {
    int a, b, c = NUM;

    scanf("%d %d", &a, &b);

    b = (b + a) % 10;
    a = (c * (b - 2));
    c = a - b/10;

    if (b > 3 || b < 6) a++;

    if (a % 2 == 1) c += a/2;

    if (b > NUM || b < c - 30) {
        b -= 5;
        c++;
    } else {
        if (!c) c = NUM;
        b = b % c + NUM * 3;
        c--;
    }

    c -= a - b * 2;
    printf("A = %d\nB = %d\nC = %d\n", a, b, c);

    return 0;
}