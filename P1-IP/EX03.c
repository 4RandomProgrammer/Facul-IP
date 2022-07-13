#include <stdio.h>
#include <math.h>

int main() {
    int numero, ehPrimo, contador = 2, i;
    unsigned int soma ____, mult ____;

    scanf("%d", ____________);

    for (; ______________; contador++) {
        ehPrimo = ____;

        ______________________________________________________

        for (i = 3; ehPrimo && i <= sqrt(contador); i += 2) {
            if (!(contador % i))
                _________ = 0;
        }

        if (ehPrimo) {
            printf("%d\n", _____________);
            _______________;
            _______________;
        }
    }

    printf("soma = %d\nmultiplicacao = %d\n", ______________);

    return 0;
}