/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 08 - Exercício 05 - Companhia Elétrica
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

/* <<< ESTE VALOR PODE SER ALTERADO >>> */
#define MAX_CIDADES 100000

typedef unsigned long quantidade;
typedef int custo;

typedef struct {
    quantidade nCidades;
    quantidade tamArea;
    custo vCustos[MAX_CIDADES];
    double total;
} dadosCidades;


int main(){
    dadosCidades city;
    double result = 0;

    do
    {
        scanf("%ld %ld",&city.nCidades,&city.tamArea);

        if(city.nCidades == 0 && city.tamArea == 0)
            break;

        for (int i = 0; i < city.nCidades; i++)
            scanf("%1d",&city.vCustos[i]);

        for(int i = 0;i <= city.nCidades - city.tamArea;i++){
            city.total = 1;
            for(int j = i;j < i + city.tamArea;j++){
                city.total = city.total * (float)city.vCustos[j];
            }
            if(city.total > result){
                result = city.total;
            }
        }

        printf("%.0lf\n",result);

        result = 0; 

    } while (1);

    return 0;
}
