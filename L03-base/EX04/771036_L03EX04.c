/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 03 - Exercício 04 - Excluir Arquivos
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

#define EXCLUIDO "o arquivo %d foi excluído.\n"
#define INVALIDO "entrada inválida!\n"
#include<stdio.h>

int main()
{
	int arq1,arq2;

	scanf("%d\n%d", &arq1, &arq2);

	if((arq1 > 7) || (arq2 > 7)){
		printf(INVALIDO);


	} else if ( arq1 > arq2)
	{
		switch(arq2)
		{
			case(0):
				printf(EXCLUIDO,0);
			case(1):
				printf(EXCLUIDO,1);
				if(arq1 == 1)
					break;
			case(2):
				printf(EXCLUIDO,2);
				if(arq1 == 2)
					break;
			case(3):
				printf(EXCLUIDO,3);
				if(arq1 == 3)
					break;
			case(4):
				printf(EXCLUIDO,4);
				if(arq1 == 4)
					break;
			case(5):
				printf(EXCLUIDO,5);
				if(arq1 == 5)
					break;
			case(6):
				printf(EXCLUIDO,6);
				if(arq1 == 6)
					break;
			case(7):
				printf(EXCLUIDO,7);
				if(arq1 == 7)
					break;
			default:
				printf(INVALIDO);
		}
	}
	else if( arq1 < arq2)
	{
		switch(arq1)
		{
			case(0):
				printf(EXCLUIDO,0);
			case(1):
				printf(EXCLUIDO,1);
				if(arq2 == 1)
					break;
			case(2):
				printf(EXCLUIDO,2);
				if(arq2 == 2)
					break;
			case(3):
				printf(EXCLUIDO,3);
				if(arq2 == 3)
					break;
			case(4):
				printf(EXCLUIDO,4);
				if(arq2 == 4)
					break;
			case(5):
				printf(EXCLUIDO,5);
				if(arq2 == 5)
					break;
			case(6):
				printf(EXCLUIDO,6);
				if(arq2 == 6)
					break;
			case(7):
				printf(EXCLUIDO,7);
				if(arq2 == 7)
					break;
			default:
				printf(INVALIDO);
		}
	}
	else if ( arq1 == arq2)
	{
		printf(EXCLUIDO, arq1);

	}
	return 0;
}
