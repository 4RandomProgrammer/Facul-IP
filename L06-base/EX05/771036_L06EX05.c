/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 06 - Exercício 05 - Histograma de Sinal
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
    int n,p,t,val[10080],i,min,j,aux,med,max;

    for(;1;)
    {
        scanf("%d %d",&p,&t);

        if(!p)
            break;

        n = p*60/t;

        for(i = 0;i < n;i++)
            scanf("%d",&val[i]);

            for(i = 0;i < n;i++)
            {
                //Achar minimo
                min = i;

                for(j = i + 1;j < n;j++)
                    if(val[min] > val[j] )
                            min = j;

                aux = val[i];
                val[i] = val[min];
                val[min] = aux;
            }
        
        if(n % 2 == 0)
        {
            i = n/2;
            j = n/2 - 1;
            med = (val[j] + val[i])/2;
            max = val[n-1];
            min = val[0]; 
        }
        else
        {
            i = n/2;
            med = val[i];
            max = val[n-1];
            min = val[0];
        }
        


        for(i = -100;i <= max;i++)
        {
            if (i == min && i != max)
            {
                printf(":");
            }
            else if (i<=med && i != max)
            {
                printf(".");
            }
            else if( i > med && i != max)
            {
                printf(" ");
            }
            else
            {
                printf("!");
            }  
        }
        printf("\n");

    }

    return 0;
}
