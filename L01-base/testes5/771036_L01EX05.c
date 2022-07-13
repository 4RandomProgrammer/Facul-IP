/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 01 - Exercício 05 - Progressão aritmética
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
 *  RA:771036
 *  Nome: Luís Felipe Dobner Hemriques
 *
 * ================================================================== */

#include<stdio.h>

int main()
{
	int n,nm;
	scanf("%d",&n);

	nm = n / 2;

	printf("%d\n%d\n", (nm*(1 + nm))/2, (nm*((nm + 1) + n))/2);
 
	return(0);
}
