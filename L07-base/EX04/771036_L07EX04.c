/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 07 - Exercício 04 - Criptografia por Matrizes
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
    int i,j,cod,Senha[2],flag,x,h,Sen[2];
    float k[2][2];
    char* mascaraScan,*mascaraPrint;

    scanf("%d",&cod);

    for(i = 0; i < 2;i++)
        for(j = 0;j < 2;j++)
            scanf("%f ",&k[i][j]);


    if(cod){
        mascaraScan = "%d ";
        mascaraPrint = "%c";

    }
    else{
        mascaraScan = "%c";
        mascaraPrint = "%d ";
    }

    //LOOP DA SENHA
    do
    {
        for(i = 0;i < 2;i++){
            flag = scanf(mascaraScan,&Senha[i]);
            Sen[i] = 0;

            if(i == 1 && flag == EOF && cod == 0){
                Senha[1] = '_';
            }
            if (i == 0 && flag == EOF)
            {
                printf("\n");
                return 0;
            }
            
        }
        
        if(!cod){

            for(h = 0; h < 2;h++){
                for(x = 0;x < 2;x++){
                    Sen[h] += (int)(k[h][x] * (char)Senha[x]);
                }

                printf(mascaraPrint,Sen[h]);
            }

        }else if (flag != EOF){

            for(h = 0; h < 2;h++){
                for(x = 0;x < 2;x++){
                    Sen[h] += (int)(k[h][x] * Senha[x]);
                }

                printf(mascaraPrint,Sen[h]);
            }


        }

    }while (flag != EOF);

    if(cod == 0)
        printf("\n");

    return 0;
}