/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 07 - Exercício 03 - Sudoku
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

#define ERRADO  "solução incorreta!\n"
#define CORRETO "solução correta!\n"

#include<stdio.h>

int main(){
    int S[9][9],i,j,k,x,h,y,flagI = 0,FlagJ = 0;

    for(i = 0;i < 9;i++)
        for(j = 0; j < 9;j++)
            scanf("%d",&S[i][j]);

    //SE HÁ NUM IGUAIS NAS LINHAS
    for(i = 0;i < 9;i++){
        for(k = 0;k < 9;k++){
            for(j = k + 1;j < 9;j++){
                if(S[i][k] == S[i][j]){
                    flagI = 1;
                    break;
                }
            }
        }
    }

    //SE HÁ NUM IGUAIS NAS COLUNAS
    if(flagI == 0)
    {
        for(i = 0;i < 9;i++){
            for(k = 0;k < 9;k++){
                for(j = k + 1;j < 9;j++){
                    if(S[k][i] == S[j][i]){
                        FlagJ = 1;
                        break;
                    }
                }       
            }
        }
    }

    for(i = 0;i < 3;i++){ //LINHA
        for(j = 0;j < 3;j++){ //COLUNA
            for(x = 0;x < 3;x++){ //LINHA
                for (h = 0; h < 3;h++){ //COLUNA
                    for(y = 0;y < 3;y++){//LINHA
                        for(k = 0;k < 3;k++){//COLUNA
                            if(S[i*3 + x][j*3 + h] == S[i*3 + y][j*3 + k] && (x != y || h != k)){
                                flagI = 1;
                                break;
                            }
                        }
                    }   
                }
            }
        }
    }
    
    if(flagI == 1 || FlagJ == 1)
        printf(ERRADO);

    else
        printf(CORRETO);
    

    return 0;
}
