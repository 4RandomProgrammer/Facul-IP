/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 04 - Exercício 01 - Calculadora
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
#include <math.h>

#define OP_INVALIDA "opção inválida!\n"
#define ZERO_DIV "divisão por 0!\n"

int main()
{
	int num1,num2,op;

	scanf("%d %d", &num1, &num2);

	do
	{	
		scanf("%d",&op);


		switch(op)
		{
			case(1):
				printf("%d\n", num1 + num2);
				break;
			case(2):
				printf("%d\n", num1 - num2);
				break;
			case(3):
				printf("%d\n", num2 - num1);
				break;
			case(4):
				printf("%d\n",num1 * num2);
				break;
			case(5):
				if(num2 == 0)
				{
					printf(ZERO_DIV);
					break;
				}
				else{
				printf("%.2f\n", (float) num1 / num2);
				break;
				}
			case(6):
				if(num1 == 0)
				{
					printf(ZERO_DIV);
					break;
				}
				else{
				printf("%.2f\n", (float) num2 / num1);
				break;
				}
			case(7):
				if(num2 == 0)
				{
					printf(ZERO_DIV);
					break;
				}
				else{
				printf("%d\n", num1 / num2);
				break;
				}
			case(8):
				if(num1 == 0)
				{
					printf(ZERO_DIV);
					break;
				}
				else{
				printf("%d\n", num2 / num1);
				break;
				}
			case(9):
				if(num2 == 0)
				{
					printf(ZERO_DIV);
					break;
				}
				else{
				printf("%d\n", num1 % num2);
				break;
				}
			case(10):
				if(num1 == 0)
				{
					printf(ZERO_DIV);
					break;
				}
				else{
				printf("%d\n", num2 % num1);
				break;
				}
			case(11):

				printf("%.0lf\n",pow(num1,num2));
				break;
			case(12):
				printf("%.0lf\n",pow(num2,num1));
				break;
			default:
				if(op != 0)
				printf(OP_INVALIDA);
				break;

		}
	}while ( op != 0);

	return 0;
}
