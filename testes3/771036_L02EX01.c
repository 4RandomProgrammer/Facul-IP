/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 02 - Exercício 01 - Conversão de medidas
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
 *  Nome:Luís Felipe Dobner Henriques
 *
 * ================================================================== */

#include<stdio.h>

#define PES 0.3048
#define JARD 0.9144
#define POL 0.0254
#define MIL 1609.344

int main()
{
	float num_m;
	
	scanf("%f", &num_m);

	printf("%.1f\n%.1f\n%.1f\n%.1f\n", num_m/PES, num_m/POL, num_m/JARD,num_m/MIL);


	return 0;
}
