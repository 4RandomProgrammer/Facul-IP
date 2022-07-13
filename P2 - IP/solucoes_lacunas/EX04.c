#include <stdio.h>

#define MAX_NOMES 10
#define MAX_CARACTERES 25

typedef char String;

void receber_string(String s[]);
void copiar_string(String s1[], String s2[]);
void printar_string(String s[]);

int main() {
    int nElementos = 0;
    char listaNomes[MAX_NOMES][MAX_CARACTERES];

    receber_string(listaNomes[nElementos]);
    nElementos++;

    for (int i = 1; i < 10; i++) {
        copiar_string(listaNomes[i], listaNomes[nElementos - 1]);
        nElementos++;
    }

    printf("Quantidade de nomes: %d\n", nElementos);
    for (int i = 0; i < 10; i++)
        printar_string(listaNomes[i]);

    return 0;
}

void receber_string(String s[]) {
    int indice = 0;
    while (scanf("%c", &s[indice]) && s[indice] != '\n')
        indice++;
    s[indice] = '\0';
}

void copiar_string(String s1[], String s2[]) {
    int i;
    for (i = 0; s2[i] != '\0'; i++)
        s1[i] = s2[i];
    s1[i] = '\0';
}

void printar_string(String s[]) {
    for (int i = 0; s[i] != '\0'; i++)
        printf("%c", s[i]);
    printf("\n");
}