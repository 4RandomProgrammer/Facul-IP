/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 05 - Exercício 05 - TeY Code
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
 *  Nome:Luís Felipe Dobner Heriques
 *
 * ================================================================== */

#include <stdio.h>

int main() {

 unsigned long int c,k,q,n,b = 3,p = 0;

 scanf("%lu %lu", &c, &n);

//Loop de Busca Dos Primos
 for(;n % b != 0 ;b+=2)
 {
 }

 p = n/b;
 q = b + p;
 k = c/q;
 printf("%lu\n", k);

    return 0;
}