/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 05 - Exercício 02 - Números Inteiros Primos
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

#define INVALIDO "intervalo inválido!\n"
#define NAO_HA   "não há primos no intervalo!\n"

#include<stdio.h>

int main(){

    int A,B,primo,div,op,np = 0;
    do
    {
        np = 0;
        op = 1;
        scanf("%d %d", &A, &B);

        if(A == B)
        {
            printf(INVALIDO);
            op = 0;
            np++;
        }else if(A < 0)
        {
             for(;A <= 0;A++)
            {
                primo = 0;
                for(div = A;div < 0 ;div++)
                {
                    if(A % div == 0)
                    {
                        primo++;
                    }
                }
                if(primo == 2)
                {
                    printf("%d, -1, 1, %d\n", A,-A);
                    np++;
                }

            }
        }
            
        if(A > 0)
        {
            for(;A < B;A++)
            {
                primo = 0;
                for(div = 1;div <= A;div++)
                {
                    if(A % div == 0)
                    {
                        primo++;
                    }
                }
                if(primo == 2)
                {
                    printf("-%d, -1, 1, %d\n", A,A);
                    np++;
                }

            }
        }
        if(np == 0)
        {
            printf(NAO_HA);
        }

    }while(op == 0);

    return 0;
}
