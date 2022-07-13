/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 05 - Exercício 04 - Conversor de Bases Numéricas
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
    int check, numero,pot = 1,result = 0,div,resto;
    do
    {
        scanf("%d", &check);
        
        switch (check)
        {
        case 2:
            //conv dec-bin
            scanf("%d", &numero);

            if(numero == 0)
            {
                printf("0");
            }else
            {
                while(numero != 0)
                {
                    printf("%d", numero % 2);
                    numero = numero /2;
                }
                }
            printf("\n");
            
            break;
        case 0:
            break;

            //conv bin-dec
        case 1:
            result = 0;
            numero = 0;
            for(pot = 1; numero != -1; pot*=2)
            {
                scanf("%d",&numero);

                if(numero != -1){
                    result = result + (pot*numero);
                }

            }
            printf("%d\n",result);

            break;

        
        default:
            printf("opção inválida!\n");
        
         break;

        }
        
    }while(check != 0);

    return 0;
    
}
