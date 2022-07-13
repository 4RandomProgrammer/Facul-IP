#include <stdio.h>
#define MAX 50

typedef struct posicao{
	int lin, col;
}pos;

void ordenaMatrizDec(int matriz[MAX][MAX], int tamanho){
	int maior, linha, coluna, aux;
	pos pos_maior, pos_inicial;

	pos_inicial.lin = 0;
	pos_inicial.col = 0;		

	while (pos_inicial.lin < tamanho)
	{

		maior = matriz[pos_inicial.lin][pos_inicial.col];
		pos_maior.lin = pos_inicial.lin;
		pos_maior.col = pos_inicial.col;

		for (linha = pos_inicial.lin; linha < tamanho; linha++){
			for (coluna = 0; coluna < tamanho; coluna++){
				if (linha == pos_inicial.lin && coluna == 0)
					coluna = pos_inicial.col;

				if (maior < matriz[linha][coluna]){
					maior = matriz[linha][coluna];
					pos_maior.col = coluna;
					pos_maior.lin = linha;					
				}
			}
		}		

		aux = matriz[pos_maior.lin][pos_maior.col];
		matriz[pos_maior.lin][pos_maior.col] = matriz[pos_inicial.lin][pos_inicial.col];
		matriz[pos_inicial.lin][pos_inicial.col] = aux;

		pos_inicial.col++;
		if (pos_inicial.col == tamanho){
			pos_inicial.col = 0;
			pos_inicial.lin++;
		}
	}
}

int main(){
	int tam, matriz[MAX][MAX], i, j;

	int maior, linha, coluna;
	pos pos_maior, pos_inicial;


	scanf("%d", &tam);	
	for (i = 0; i < tam; i++)
		for (j = 0; j < tam; j++)
			scanf("%d", &matriz[i][j]);

	ordenaMatrizDec(matriz, tam);

	for (i = 0; i < tam; i++)
	{
		for (j = 0; j < tam; j++)		
			printf("%02d ", matriz[i][j]);
		printf("\n");
	}

	return 0;
}

