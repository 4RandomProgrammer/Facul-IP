/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 03 - Exercício 03 - Tabela Verdade
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

#define VERDADEIRO "V\n"
#define FALSO "F\n"
#define INVALIDO "entrada inválida!\n"

#include<stdio.h>

int main(){
	char c1,c2,c3;

	scanf("%c\n%c\n%c", &c1,&c2,&c3);

	if ( (( c1 != 86) && (c1 != 70)) || (( c2 != 86) && (c2 != 70)))
	{
		printf(INVALIDO); 
	}
	else
	{
		switch(c3)
		{
			case(69): //E
				if ( (c1 == 86) && ( c2 == 86))
				printf(VERDADEIRO);
				else
				printf(FALSO);
				break;
			case(79): //O
				if ( (c1 == 70) && ( c2 == 70))
				printf(FALSO);
				else
				printf(VERDADEIRO);
				break;
			case(73): //I 
				if ( (c1 == 86) && ( c2 == 70))
				printf(FALSO);
				else
				printf(VERDADEIRO);
				break;
			case(66):
				if ( ((c1 == 86) && ( c2 == 70)) || ((c1 == 70) && (c2 == 86)) )
				printf(FALSO);
				else
				printf(VERDADEIRO);
				break;
			default:
			printf(INVALIDO);
		}
	}
	

	return 0;
}
