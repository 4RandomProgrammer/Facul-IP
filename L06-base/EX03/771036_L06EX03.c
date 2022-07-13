/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 06 - Exercício 03 - Mercado de Ações
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
    int n,i,j;
    long int v[1001],result = 0;

    scanf("%d",&n);

    for(i = 0;i < n;i++)  
        scanf("%ld",&v[i]);

    for(i = 0;i <= n;i++)
        for(j = i + 1;j < n;j++)
            if(v[j] - v[i] < result)
                result = v[j] - v[i];

    printf("%ld\n",result);



    return 0;
}
