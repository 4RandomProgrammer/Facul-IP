/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 06 - Exercício 02 - Função Hash
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

#include<stdio.h>

int main()
{
    int i;
    char  baldes[10],flag,c,aux = 0;

    for(i = 0; i < 10; i++){
        baldes[i] = i;
    }

    i = 0;

    do
    {

        flag = scanf("%c", &c);

        if(i == 10)
            i = 0;

        if(flag != EOF)
        {
            aux = c;
            baldes[i] =(baldes[i] + c)%26;
            i++;
        }



    }while(flag != EOF);

        if(i != 0)
            for(;i<10;i++)
                baldes[i] = (baldes[i] + aux)%26;

    for(i = 0; i < 10;i++)
        baldes[i] += 65;

    for(i = 0; i < 10;i++)
        printf("%c",baldes[i]);

    printf("\n");

 return 0;   
}
