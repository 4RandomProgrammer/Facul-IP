/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 08 - Exercício 04 - K-alunos
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
#include <math.h>

// redefinições tipos
typedef float nota;

// estrutura para armazenar as notas
typedef struct {
    nota P1;
    nota P2;
    nota L;
    float distR;
}notas;

int main(){
    notas al[1001],rodonildo,aux;
    int k,n,i,j,bbs;
    float media = 0;

    scanf("%f %f",&rodonildo.P1,&rodonildo.L);
    scanf("%d",&n);
    scanf("%d",&k);

    for (i = 0; i < n; i++)
        scanf("%f %f %f",&al[i].P1,&al[i].P2,&al[i].L);


    //CALC DA DIST
    for(i = 0; i < n;i++){
        al[i].distR = sqrt(pow((rodonildo.P1  - al[i].P1),2) + pow((rodonildo.L  - al[i].L),2));
    }


    //LOOP DE SOR: BBS
    for (bbs = 0;  bbs < n;bbs++) {
        for (i = 0; i < (n - 1); i++){

            if (al[i].distR > al[i + 1].distR) {

                aux = al[i];

                al[i] = al[i + 1];

                al[i + 1] = aux;
            }
        }
    }

    for(i = n - 1; i < 0; i--)
        printf("%f\n",al[i].distR);

    for (i = 0; i < k; i++)
        media = media + al[i].P2;



    media = media / k;

    printf("%0.1f\n",media);
    
    
    return 0;
}
