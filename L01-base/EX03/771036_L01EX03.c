/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 01 - Exercício 03 - Manipulação de caracteres
 *
 *  Instruções
 *  ----------
 *
 *	Este arquivo contém o código que auxiliará no desenvolvimento do
 *	exercício. Você precisará completar as partes requisitadas.
 *
 * ================================================================== *
 *	Dados do aluno:
 *
 *  RA: 771036
 *  Nome: Luís Felipe Dobner Henriques
 *
 * ================================================================== */

#include<stdio.h>
#

int main()
{
	char car1, car2,car3,car4;

	scanf("%c%c%c%c",&car1,&car2,&car3,&car4);

	car4 = (car4 - 64);
	car1 = car1 + 32;
	car2 = (int)car2;
	car3 = (int)car3 - 64;

	printf("%c\n",car1);
	printf("%d\n", car2);
	printf("%d\n", car3);
	printf("%d\n", car4 * car4);
	
	
	return(0);
}
