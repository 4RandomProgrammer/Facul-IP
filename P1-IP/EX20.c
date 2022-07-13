#include <stdio.h>
#include <math.h>

int main() {
    float n1, razao, nseqPG, seqnPG, soma = 0;
    int i;

    scanf("%f", &n1); //primeiro numero
    scanf("%f", &razao); //razao da P.G.
    scanf("%f", &nseqPG); //numero de termos a serem impressos

    for(i = 0; i < nseqPG; i++){
        seqnPG = n1 * pow(razao, i);
        soma += seqnPG;
        printf("%f ", seqnPG);

    }

    printf("\nSoma dos termos da P.G = %f\n", soma);

    return 0;
}