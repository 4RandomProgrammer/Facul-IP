/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 07 - Exercício 01 - Ordenações
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

    scanf("%d",&n);

    long int M[n][n], bbs,aux;

    for(i = 0;i < n;i++)
        for(j = 0;j < n;j++)
            scanf("%ld",&M[i][j]);


    //LOOP DE SORT POR LINHA, FEITO COM BUBBLE
    for(i = 0; i < n;i++){

        for(bbs = 0; bbs < n;bbs++){

            for(j = 0; j < n - 1;j++){

                if(M[i][j] > M[i][j + 1]){
                    aux = M[i][j];

                    M[i][j] = M[i][j + 1];

                    M[i][j + 1] = aux;

                }
            }
        }
    }

    //SORT PARA COLUNAS
    for(i = 0;i < n; i++){

        for(bbs = 0;bbs < n;bbs++){

            for(j = 0; j < n - 1;j++){

                if(M[j][i] < M[j + 1][i]){
                    aux = M[j][i];

                    M[j][i] = M[j + 1][i];

                    M[j + 1][i] = aux;

                }
            }
        }
    }


    for(i = 0;i < n;i++){
        for(j = 0;j < n;j++)
            printf("%ld ",M[i][j]);

        printf("\n");
    }

    

    return 0;
}
