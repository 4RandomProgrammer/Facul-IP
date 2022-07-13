/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 10 - Exercício 01 - 42%
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
#include<string.h>

int main(){
    char str[1001],letra;
    int flag;
    float palavras, contador;
    flag = 0;
    palavras = 0;
    contador = 0;


    scanf("%c",&letra);
    do{
        flag = scanf("%s",str);

        if(flag != EOF){
            for(int i = 0; i < 1001 ;i++){
                if(str[i] == letra || str[i] == (letra - 32) || str[i] == (letra + 32)){
                    contador += 1;
                    break;
                }
                if(str[i] == '\0'){
                    break;
                }
            }
            palavras += 1;
        }

    }while(flag != EOF);

    printf("%.1f\n",contador/palavras * 100);    

    return 0;
}