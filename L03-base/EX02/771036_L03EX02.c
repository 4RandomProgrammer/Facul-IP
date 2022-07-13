/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 03 - Exercício 02 - Triângulos
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
 *  RA:
 *  Nome:
 *
 * ================================================================== */

#define ERRO "não é possível formar um triângulo!\n"

#include<stdio.h>

int main()
{
	float n1,n2,n3;
	char ver;

	scanf("%c", &ver);
	scanf("%f %f %f", &n1,&n2,&n3);

	if ( ver == 'A') //A
	{
		if( ((n1 + n2 + n3) != 180) ||(n1 == 0) || (n2 == 0) || (n3 == 0))
		{
			printf(ERRO);
		}
		else
			if ( ( n1 == 90) || (n2 == 90) || (n3 == 90) )
			{
				printf("R\n");
			}
			else if ( ( n1 > 90) || (n2 > 90) || (n3 > 90))
			{
				printf("O\n");
			}
			else if ( ( n1 < 90) && (n2 < 90) && (n3 < 90))
			{
				printf("A\n");
			}
	}
	else if ( ver == 'L') //L
	{
		if( (n1 + n2 <= n3) || (n1 + n3 <= n2) || (n3 + n2 <= n1) || (n1 == 0) || (n2 == 0) || (n3 == 0) )
		{
			printf(ERRO);
		}
		else if ( (n1 == n2) && (n3 == n2))
		{
			printf("E\n");
		}
		else if ((n1 == n2) || (n2 == n3) || (n1 == n3))
		{
			printf("I\n");
		}
		else
		{
			printf("S\n");
		}
	}

	return 0;
}
