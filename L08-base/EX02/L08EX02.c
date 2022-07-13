/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 08 - Exercício 02 - Dia da Semana
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

#define SEGUNDA  "segunda-feira\n"
#define TERCA    "terça-feira\n"
#define QUARTA   "quarta-feira\n"
#define QUINTA   "quinta-feira\n"
#define SEXTA    "sexta-feira\n"
#define SABADO   "sábado\n"
#define DOMINGO  "domingo\n"
#define INVALIDA "data inválida!\n"

enum {jan = 1, fev, mar, abr, mai, jun, jul, ago, set, out, nov, dez};
enum {seg = 0, ter, qua, qui, sex, sab, dom};

typedef struct {
    int dia;
    int mes;
    int ano;
} data;

int main () {
    int A,B,C,D,k;
    data datas;
    //SCAN DAS DATAS
    do{
        scanf("%d/%d/%d", &datas.dia, &datas.mes, &datas.ano);

        if((datas.mes == abr || datas.mes == jun || datas.mes == set || datas.mes == nov) && datas.dia > 30){
            printf(INVALIDA);
        }

        if(datas.dia < 1 || datas.dia > 31 || datas.mes > 12 || datas.mes < 1 || datas.ano > 2399 || datas.ano < 1900){
            printf(INVALIDA);
            return 0;
        }
    }while (datas.dia < 1 || datas.dia > 31 || datas.mes > 12 || datas.mes < 1 || datas.ano > 2399 || datas.ano < 1900);
    
    //CALCULOS
    A = datas.ano - 1900;

    if(((datas.ano % 4 == 0 && datas.ano % 100 && datas.ano % 400) || (datas.ano % 4 && datas.ano % 100 == 0 && datas.ano % 400) || (datas.ano % 4 == 0 && datas.ano % 100 && datas.ano % 400 ==0)) && (datas.dia <= 29 && datas.mes <= 2)){
        B = A/4 - 1;

    }else{
        
        B = A / 4;
    }
    


    switch (datas.mes)
    {
    case jan:
        C = 0;
        break;
    case fev:
        C = 3;
        break;
    case mar:
        C = 3;
        break;
    case abr:
        C = 6;
        break;
    case mai:
        C = 1;
        break;
    case jun:
        C = 4;
        break;
    case jul:
        C = 6;
        break;
    case ago:
        C = 2;
        break;
    case set:
        C = 5;
        break;
    case out:
        C = 0;
        break;
    case nov:
        C = 3;
        break;
    case dez:
        C = 5;
        break;
    }

    D = datas.dia - 1;

    k = (A + B + C + D) % 7;

    switch (k)
    {
    case 1:
        printf(TERCA);
        break;
    case 2:
        printf(QUARTA);
        break;
    case 3:
        printf(QUINTA);
        break;
    case 4:
        printf(SEXTA);
        break;
    case 5:
        printf(SABADO);
        break;
    case 6:
        printf(DOMINGO);
        break;
    case 0:
        printf(SEGUNDA);
        break;
    }

    return 0;
}
