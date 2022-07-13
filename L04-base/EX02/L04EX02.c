/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 04 - Exercício 02 - Ranking
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

int main()
{

int ptsdej,pri = -2,seg = -2,ter = -2;

do{
 scanf("%d", &ptsdej);

 if(ptsdej > pri && ptsdej > seg && ptsdej > ter)
 {
     ter = seg;
     seg = pri;

     pri = ptsdej;
 }

 else if(ptsdej <= pri && ptsdej>seg && ptsdej>ter)
 {
     ter = seg;
     seg = ptsdej;
 }

 if (ptsdej <= pri && ptsdej<= seg && ptsdej>ter)
 {
     ter = ptsdej;
 }

}while (ptsdej != -1);

if(pri == -2)
{
printf("não há jogador\nnão há jogador\nnão há jogadores\n");
}
else if
{
printf ("1º lugar : %d\n",pri);
}
if(seg == -2 )
    printf("não há jogador\nnão há jogador\n");
else
{
printf("2ºlugar : %d\n",seg);
}
if(ter == -2 )
{
    printf("não há jogador\n");
}
else
{
    printf("3ºlugar : %d\n",ter);
}
return 0;
}