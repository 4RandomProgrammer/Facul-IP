/* Este programa determina quantos retângulos se pode formar a partir da
   movimentação/rotação de segmentos de reta em um plano, cada um dado
   por dois pontos. */

#include <stdio.h>
#include <math.h>

#define TAM 1000

typedef struct ponto {
	int x;
	int y;
} Ponto;

typedef struct segmento {
	Ponto p1;
	Ponto p2;
	double tamanho;
	int verificado;
} Segmento;

double calcTamanho(Segmento s) {
	double tamanho;
	tamanho = sqrt(pow((s.p2.x-s.p1.x),2) + pow((s.p2.y-s.p1.y),2));
	return tamanho;
}

int obtemPares(Segmento segs[], int n) {
	int i, j, iguais, pares;
	for (i=0, pares=0; i<n; i++) {
		if (!segs[i].verificado) {
			segs[i].verificado=1;
			for (j=i+1, iguais=1; j<n; j++) {
				if (segs[j].tamanho == segs[i].tamanho) {
					segs[j].verificado=1;
					iguais++;
				}
			}
			pares += iguais/2;
		}
	}
	return pares;
}

int main() {

	Segmento segs[TAM/2];
	int n, i, j, iguais, pares, total;

	scanf("%d", &n);
	n/=2;

	for (i=0; i<n; i++) {
		scanf("%d %d", &segs[i].p1.x, &segs[i].p1.y);
		scanf("%d %d", &segs[i].p2.x, &segs[i].p2.y);
		segs[i].tamanho = calcTamanho(segs[i]);
		segs[i].verificado = 0;
	}

	total = obtemPares(segs, n)/2;

	printf("%02d\n", total);

	return 0;
}
