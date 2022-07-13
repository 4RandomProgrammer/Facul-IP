#include <stdio.h>

int main() {
    int n, temp1, temp2, primo_a_n;

    do {
        scanf("%d", &n);
        _____________________________

        for (______________; temp1 < n; temp1++) {
            primo_a_n = 1;

            for (temp2 = 2; ______________; temp2++) {
                if (____________________ && n % temp2 == 0) {
                    _____________________________
                    _____________________________
                }
            }

            if (primo_a_n) printf("%d\n", temp1);
        }
    } while (n);

    return 0;
}