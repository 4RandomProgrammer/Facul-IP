/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 05 - Exercício 03 - Raiz Quadrada
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

int main(){
    float k,q,n,kraiz,cont = 0,contK;

    scanf("%f",&n);
    //LOOP DAS RAIZES
    for(;cont < n;cont++)
    {
        scanf("%f",&q);

        //loop do heron 10x
    
        


            //conta do método de heron

            
                for(k = 1,contK = 0;contK != 10;contK++)
                {
                    kraiz = (k + q/k)/2;
                    k = kraiz;
                }
                printf("%.2f\n", kraiz);



    }

    return 0;
}
