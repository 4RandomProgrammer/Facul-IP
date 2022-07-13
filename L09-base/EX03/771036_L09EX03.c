/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 09 - Exercício 03 - Duende
 *
 *  Instruções
 *  ----------
 *
 *  Este arquivo contém o código que auxiliará no desenvolvimento do
 *  exercício. Você precisará completar as partes requisitadas.
 *
 * ================================================================== *
 *  Dados do aluno:
 *
 *  RA:771036
 *  Nome:Luís Felipe Dobner Henriques
 *
 * ================================================================== */
#include <stdio.h>

#define HA_SAIDA_SEGURA "há uma saída segura!\n"
#define NAO_HA_SAIDA_SEGURA "NÃO há uma saída segura!\n"

enum {SAIDA, SALAO, CRISTAL, DUENDE, VISITADO};

// determina se há saída segura possível ou não
int haSaida(int caverna[20][20], int n, int linha, int coluna);

int main() {
    int n, caverna[20][20];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &caverna[i][j]);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (caverna[i][j] == 3) {
                if (haSaida(caverna, n, i, j))
                    printf(HA_SAIDA_SEGURA);
                else
                    printf(NAO_HA_SAIDA_SEGURA);
                return 0;
            }

    return 0;
}

/* <<< IMPLEMENTE A FUNÇÃO AQUI >>> */
int haSaida(int caverna[20][20], int n, int linha, int coluna){
    if(coluna >= n || linha >= n || linha < 0 || coluna < 0)
        return 0;

    if((caverna[linha][coluna] == CRISTAL) || (caverna[linha][coluna] == VISITADO) )
        return 0;

    
    if(caverna[linha][coluna] == SAIDA)
        return 1;

    caverna[linha][coluna] = 4;

    return(haSaida(caverna,n,linha,coluna-1) || haSaida(caverna,n,linha,coluna+1) || haSaida(caverna,n,linha-1,coluna) || haSaida(caverna,n,linha+1,coluna));

}