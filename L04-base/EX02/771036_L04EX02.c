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

int ptsdej,pri = -1,seg = -1,ter = -1;

do{
 scanf("%d", &ptsdej);

 if(ptsdej >= pri) {
     ter = seg;
     seg = pri;

     pri = ptsdej;
 } else if( ptsdej >= seg) {
     ter = seg;
     seg = ptsdej;
 } else if (ptsdej >= ter) {
     ter = ptsdej;
 }

}while (ptsdej != -1);

if(pri == -1)
{
printf("não há jogador\n");
}
else
{
printf ("1º lugar: %d\n",pri);
}
if(seg == -1 )
    printf("não há jogador\n");
else
{
printf("2º lugar: %d\n",seg);
}
if(ter == -1 )
{
    printf("não há jogador\n");
}
else
{
    printf("3º lugar: %d\n",ter);
}

return 0;
}