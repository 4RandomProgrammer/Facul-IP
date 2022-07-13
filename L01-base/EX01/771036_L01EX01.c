/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 01 - Exercício 01 - Operações aritméticas
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
 *  RA:
 *  Nome:
 *
 * ================================================================== */

#include<stdio.h>

int main(){
	int n1, n2;

	scanf ("%d%d", &n1, &n2);
	printf ("%d\n", n1+n2);
	printf ("%d\n", n1 - n2);
	printf ("%d\n", n2 - n1);
	printf ("%d\n", n1 * n2);
	printf ("%.2f\n", (float) n1 / n2);
	printf ("%.2f\n", (float) n2 / n1);
	printf ("%d\n", n1 / n2);
	printf ("%d\n", n2 / n1);
	printf ("%d\n", n1 % n2);
	printf ("%d\n", n2 % n1);
	printf ("%.2f\n", (n1+n2) + (n1 - n2) + (n2 - n1) + (n1 * n2) + ((float) n1 / n2) + ((float) n2 / n1) + (n1 / n2) + (n2 / n1) + (n1 % n2) + (n2 % n1));
	
	
	return(0);
}
