#include <stdio.h>
#include <math.h>

int main() {
    int x, k, ctr;
    int i, n ,m ,mm ,nn;

    scanf("%d%d", &n, &x);

    if(!x) x = (n * 5) % 9;

    k = x;
    m = -1;

    printf("%d\n", x);

    for (i = 1; i < n; i++) {
        ctr = 2 * i + 1;
        mm = pow(x, ctr);
        nn = mm * m;

        printf("%d\n", nn);

        k += nn;
        m *= -1;
    }

    return 0;
}