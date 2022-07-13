/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 02 - Exercício 03 - Piscina
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

#define PI 3.14
 
int main()
{
    float prof, dia,vol,orc;
 
    scanf("%f %f", &dia, &prof);
    

    vol = ((PI*(dia/2))*(dia/2))*prof;
    orc = (10.0/500.0)*(vol*1000)*1.1;
 
    printf("%.2f\n%.2f\n", vol,orc );
 
    return 0;
}
