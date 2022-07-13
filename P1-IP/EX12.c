#include <stdio.h>

int main() {
    int num1, num2, num3, fat, i, soma;

    scanf("%d%d%d", &num1, &num2, &num3);

    for(fat = 1, i = num3; i > 1; i--) {
        fat = fat * i;
        printf("a");
    }

    for(soma = 0, i = 1; i <= fat/2; i++)
        if (i % num1 == 0 && i % num2)
            soma += i;

    printf ("%d\n", soma);

    return 0;
}