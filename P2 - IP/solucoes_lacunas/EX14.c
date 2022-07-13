#include <stdio.h>

#define MAX 100

typedef struct {
	int x, y;
} Coordenada;

float altura_predios[MAX][MAX];

Coordenada criar_coordenada(int x, int y) {
	Coordenada coordenada;
	coordenada.x = x;
	coordenada.y = y;
	return coordenada;
}

float altura_predio(Coordenada coordenada) {
	return altura_predios[coordenada.y][coordenada.x];
}

int main() {
    int tam_matriz;
	int i, j;
	Coordenada maior_predio, predio_atual, prox_predio;
	int existe_menor;
	int ordem_predio;
    
    scanf("%d", &tam_matriz);

	for (i = 0; i < tam_matriz; i++) {
		for (j = 0; j < tam_matriz; j++)
			scanf("%f", &altura_predios[i][j]);
	}

	maior_predio.x = 0;
	maior_predio.y = 0;
	for (i = 0; i < tam_matriz; i++) {
		for (j = 0; j < tam_matriz; j++) {
			if (altura_predios[i][j] > altura_predio(maior_predio))
				maior_predio = criar_coordenada(j, i);
		}
	}
	printf("Maior predio: (%d, %d).\n", maior_predio.x, maior_predio.y);

	predio_atual = maior_predio;
	ordem_predio = 2;
	do {
		existe_menor = 0;
		for (i = 0; i < tam_matriz; i++) {
			for (j = 0; j < tam_matriz; j++) {
				if (altura_predios[i][j] < altura_predio(predio_atual)) {
					if (existe_menor == 1) {
						if (altura_predios[i][j] > altura_predio(prox_predio))
							prox_predio = criar_coordenada(j, i);
					}
					else
						prox_predio = criar_coordenada(j, i);
					existe_menor = 1;
				}
			}
		}
		if (existe_menor == 1) {
			printf("%do maior predio: (%d, %d).\n", ordem_predio++, prox_predio.x, prox_predio.y);
			predio_atual = prox_predio;
		}
	} while (existe_menor == 1);

	return 0;
}