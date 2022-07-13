#include<stdio.h>

typedef struct data{
	float valor_atual;
	float ganho_mes;
	float perda_mes;
}Dados;

void ganho(Dados bairros[][5], float valor, int i, int j);
void perda(Dados bairros[][5], float valor, int i, int j);
void transferencia(Dados bairros[][5], float valor, int i, int j, int m, int n);

int main(){
	Dados bairros[5][5];
	int entradas, i, j, m, n;
	float valor;
	char opc;

	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			scanf("%f", &bairros[i][j].valor_atual);
			bairros[i][j].ganho_mes = 0; 
			bairros[i][j].perda_mes = 0;
		}
	}

	scanf("%d", &entradas);
	for(i=0; i < entradas; i++){
		scanf("%*c%c", &opc);
		switch(opc){
			case 'g':
				scanf("%f", &valor);
				scanf("%d%d", &i, &j);
				ganho(bairros, valor, i, j);
				break;

			case 'p':
				scanf("%f", &valor);
				scanf("%d%d", &i, &j);
				perda(bairros, valor, i, j);
				break;

			case 't':
				scanf("%f", &valor);
				scanf("%d%d", &i, &j); //de i,j
				scanf("%d%d", &m, &n); //para m,n
				transferencia(bairros, valor, i, j, m, n);
				break;
		}
	}

	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			printf("---Bairro (%d, %d)\n", i, j);
			printf("Valor: %.2f\n", bairros[i][j].valor_atual);
			printf("Ganho: %.2f\n", bairros[i][j].ganho_mes);
			printf("Perda: %.2f\n", bairros[i][j].perda_mes);
		}
	}

	return 0;
}

void ganho(Dados bairros[][5], float valor, int i, int j){
	bairros[i][j].valor_atual += valor;
	bairros[i][j].ganho_mes += valor;
}

void perda(Dados bairros[][5], float valor, int i, int j){
	bairros[i][j].valor_atual -= valor;
	bairros[i][j].perda_mes += valor;
}

void transferencia(Dados bairros[][5], float valor, int i, int j, int m, int n){
	bairros[m][n].valor_atual += valor;
	bairros[m][n].ganho_mes += valor;
	bairros[i][j].valor_atual -= valor;
	bairros[i][j].perda_mes += valor;
}