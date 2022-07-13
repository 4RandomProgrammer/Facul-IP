/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 04 - Exercício 03 - Casais de Coelhos
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

int main()
{
	int n2 = 0,n_seq,c = 0,n1 = 1,novo = 1;
	

	do
	{

		scanf("%d", &n_seq);

		while(c <= n_seq && c != -1 ){
			novo = n1 + n2;
			n1 = n2;
			n2 = novo;
			c++;
			printf("%d ", novo);
		}

			if(n_seq != -1){
				printf("\n");
			}

			n2 = 0;
			c = 0;
			novo = 1;
			n1 = 1;



	}while (n_seq != -1);

	return 0;
	
}
