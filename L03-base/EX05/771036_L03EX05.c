/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 03 - Exercício 05 - Montar um Computador
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

#include<stdio.h>

int main()
{
	char ti,mod;
	int pdv,process;
	float contador, placaval, mode,total;
	placaval = 0;
	mode = 0;
	contador = 0;

	scanf("%d %d %c %c", &process, &pdv,&ti,&mod);

	switch(process)
	{
		case(3):
			contador = 300.99;
			break;
		case(5):
			contador = 549.09;
			break;
		case(7):
			contador = 899.99;
			break;
		case(9):
			contador = 1299.99;
			break;
	}

	switch(pdv)
	{
		case(1050):
			placaval = 768.50;
			break;
		case(1060):
			placaval = 1397.00;
			break;
		case(1070):
			placaval = 2550.99;
			break;
		case(1080):
			placaval = 3050.00;
			break;
	}
	
	if (( ti == 'S') || ( ti == 's'))
	{
		placaval = placaval*1.2;
	}
	else
	{
		placaval = placaval;
	}

	if (( mod == 'A') || (mod == 'a'))
	{
		mode = 405.86;
	}
	else if (( mod == 'R') || (mod == 'r'))
	{
		mode = 460.40;
	}
	else if (( mod == 'M') || (mod == 'm'))
	{
		mode = 703.46;
	}
	else
	{
		mode = 935.25;
	}

	total = mode + placaval + contador;

	printf("%.2f\n", total);

	return 0;
}
