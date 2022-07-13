/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 06 - Exercício 01 - Maiores que a Média
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
    int i,n,j = 0;
    unsigned long int m[10001],soma,min,l,aux;

    scanf("%d",&n);
    for(i = 0;i <=n;i++)
        scanf("%lu",&m[i]);

    for(i = 0,soma = 0;i <= n;i++)
        soma += m[i];

    soma = soma / n;

      for(i = 0;i < n;i++)
    {
            //Achar minimo
         min = i;

        for(l = i;l < n;l++)
        {
            if(m[l] > m[min] )
            {
             min = l;
            }
    }

        aux = m[i];
        m[i] = m[min];
        m[min] = aux;
            
    }

    for(i = 0;i <= n;i++)
        if(m[i] > soma && !j)
        {
            printf("%li", m[i]);
            j = 1;
        } else if (m[i] > soma && j)
            printf(" %li", m[i]);
            
        
    if(j == 0)
    {
        return 0;
    }

    printf("\n");

    return 0;    
}
