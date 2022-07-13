/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 06 - Exercício 04 - Sequência de Recamán
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
    int j1,j2,reca[20001],i,j,aux,num;

    i = 1;

    reca[0] = 0;

    while(1)
    {
        scanf("%i %i",&j1,&j2);

        if(j1 == 0)
            break;

        if(j1 > j2)
            aux = j1;
        else
            aux = j2;
        
        

        for(;i <= aux;i++)
        {
            reca[i] = reca[i - 1] - i;

            for(j = 0;j<i;j++)
            if(reca[i] < 0 || reca[i] == reca[j]) 
            {
                reca[i] = reca[i-1] + i;
            }

        }
        //RESULTADOS DO JOGO
        if(reca[j1]>reca[j2])
            printf("1\n");
        else if(reca[j1] < reca[j2])
            printf("2\n");
        else
            printf("0\n");
        
    }

    return 0;
}
