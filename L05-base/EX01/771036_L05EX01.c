/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 05 - Exercício 01 - Somatório
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
    int a,b,c,d,aux,conta,looper = 1;

    for(a=0,b=0,c=0,d=0; looper != 0;){
        scanf("%d %d %d %d", &a, &b,&c, &d);
        if(a == -1 && b == -1 && c == -1 && d == -1){
            looper = 0;
        }

        if(a > b){
            aux = b;
            b = a;
            a = aux;
        }

        for(conta = 0;a <= b; a++){
            conta = conta + (c*a +d);
        }
        if(looper != 0){
        printf("%d\n", conta);
        } 
    }
    return 0;
}
