#include <stdio.h>

int main() {
    int H, A, M, L, E, T;
    L = E = T = 42;

    scanf("%d%d", &A, &H);

    L += A;
    E -= A;
    T %= A;
    M = L + E + T;

    for (; H;) {
        printf("%d\n", H);
        if (H % 2) M += H;
        H /= 2;
    }

    printf("%d\n", M);

    return 0;
}