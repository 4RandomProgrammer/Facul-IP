/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 07 - Exercício 05 - Velas
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
    int N,L,i,j,o,m,raio,escond = 0;

    scanf("%d %d",&N,&L);

    char ML[25][25];
    int MNum[25][25];

    //SCAN DA MATRIZ DE POSIÇÃO DE VELAS E DA MATRIZ NUM. BASE
    for(i = 0;i < N;i++)
        for(j = 0;j < N;j++){
            scanf("%s",&ML[i][j]);
            MNum[i][j] = 0;
        }
  

    for(i = 0;i < N;i++){
        for(j = 0; j < N;j++){

            if(ML[i][j] == 'C'){

                for(raio = 0;raio < L;raio++){

                    for (o = 0;o < N ;o++){
                        for(m = 0;m < N;m++){
                              if((o >= i - raio && o <= i + raio) && (m >= j - raio && m <= j + raio))
                                if((o >= 0 && o < N) && (m >= 0 && m < N))
                                    MNum[o][m] = 1;
                        }
                    }
                }


            }
        }
    }

    for (i = 0; i < N; i++){
        for(j = 0;j < N;j++){
            if(MNum[i][j] == 0){
                escond += 1;
            }
        }
    }
    
    printf("%d\n",escond);

    return 0;
}
