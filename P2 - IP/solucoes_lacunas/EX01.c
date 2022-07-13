#include <stdio.h>
#include <string.h>

typedef char Nome;

typedef struct {
    Nome nomeCompleto[100];
    char celular[15];
} Cliente;

Cliente alterarCelular(Cliente c);

int main() {
    int n;

    scanf("%d ", &n);
    Cliente clientes[n];

    for(int i = 0; i < n; i++)
        scanf("%[^\n] %s\n", clientes[i].nomeCompleto, clientes[i].celular);

    for(int i = 0; i < n; i++) {
        printf("%d - Numero antigo %s\n", i, clientes[i].celular);
        clientes[i] = alterarCelular(clientes[i]);
        printf("%d - Novo numero  %s\n", i, clientes[i].celular);
    }

    return 0;
}

Cliente alterarCelular(Cliente c) {
    for (int i = strlen(c.celular); i > 0; i--) c.celular[i] = c.celular[i - 1];
    c.celular[0] = '9';
    return c;
}