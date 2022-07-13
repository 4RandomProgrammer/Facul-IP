/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 07 - Exercício 02 - Campo Minado
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
 *  Nome:Luis Felipe Dobner Henriques
 *
 * ================================================================== */

#define VENCEU "você venceu!\n"
#define PERDEU "você perdeu :(\n"
#define SAIU   "o jogador saiu do jogo.\n"

#include<stdio.h>

int main(){
    int t,l,c,i,j,flag,k,vit,der;
    char M[10][10];
    flag = vit = der = 0;

    //SCAN TAMANHO DA MATRIZ
    scanf("%d",&t);

    //SCAN MATRIZ
    for(i = 0;i < t;i++)
        for(j = 0;j < t;j++){
            scanf(" %c",&M[i][j]);

            if(M[i][j]== 'X')
                vit += 1;

        }

    //SCAN N DE JOGADAS
    scanf("%d",&l);

    //SCAN CORD DAS JOGADAS
    for(j = 0;j < l;j++){
        scanf("%d %d",&c,&k);
 
        if(M[c - 1][k - 1] == 'M'){
            der = 1;
            break;
        }
        else if(M[c - 1][k - 1] == 'X')
            flag += 1;
    }

    
    //condições de saida
    if(der == 1)
        printf(PERDEU);

    else if(flag != vit)
        printf(SAIU);

    else
    {
        printf(VENCEU);
    }
    
            

    return 0;
}
