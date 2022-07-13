/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 04 - Exercício 04 - Fatores primos
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

#define INVALIDA "entrada inválida!\n"

int main()
{
    int num,div = 3,c = 0,primo = 1, fator = 2;
    


        //Numero primo
    do{ 

        scanf("%d",&num);

        if(num <= 1){
            printf(INVALIDA);
        }
                
    }while(num <= 1);

    while(num != 1){

        if(num % fator == 0){
            num = num / fator;
            printf("%d", fator);
            if(num != 1)
            printf(" ");
        }else{

            // verif de primos
            fator++;
            primo =1;
            if(fator % 2 == 0 && fator != 2){
                primo = 0;
            }else{
                while(div <= num/2 && primo == 1){
                    if(fator/div == 0){
                        primo = 0;
                    }
                    div = div + 2;
                    }
                }
        }
    }
    printf("\n");
    return 0;
}
