#include <stdio.h>

int main() {
    int num, result = 0, aux, aux2, ord, i, op;

    scanf("%d", &num);

    for (i = 0; i < 6; i++) {
        ord = num % 10;
        op = 1;
        num /= 10;
        aux = result;

        while (aux > 0) {
            aux2 = aux % 10;

            if (aux2 > ord) {
                op *= 10;
                aux /= 10;
            } else
                break;
        }

        result = ((result / op) * (op * 10)) + (ord * op) + (result % op);
    }

    printf("%06d\n", result);

    return 0;
}