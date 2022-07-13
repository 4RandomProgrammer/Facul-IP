/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 03 - Exercício 01 - Operações Matemáticas
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

#define OP_INVALIDA "opção inválida!\n"
#define ZERO_DIV "divisão por 0!\n"

#include<stdio.h>

int main (){
	int n1,n2,c;

	scanf("%d%d%d", &n1,&n2,&c);

	if(c > 10)
	{
		printf(OP_INVALIDA);
	}

	else if ((n2 == 0) && (( c == 5) || (c == 7) || ( c == 9)))
	{
		printf(ZERO_DIV);
	}

	else if ((n1 == 0) && (( c == 6) || (c == 8) || ( c == 10)))
	{
		printf(ZERO_DIV);
	}

	else
	{
		switch(c)
		{
			case(1):
				printf ("%d\n", n1+n2);
				break;
			case(2):
				printf ("%d\n", n1 - n2);
				break;
			case(3):
				printf ("%d\n", n2 - n1);
				break;
			case(4):
				printf ("%d\n", n1 * n2);
				break;
			case(5):
				printf ("%.2f\n", (float) n1 / n2);
				break;
			case(6):
				printf ("%.2f\n", (float) n2 / n1);
				break;
			case(7):
				printf ("%d\n", n1 / n2);
				break;
			case(8):
				printf ("%d\n", n2 / n1);
				break;
			case(9):
				printf ("%d\n", n1 % n2);
				break;
			case(10):
				printf ("%d\n", n2 % n1);
				break;    
    				
		}

	}	

	return 0;

}
