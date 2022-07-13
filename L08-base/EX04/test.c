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
    data dia_da_semana;
    //SCAN DAS DATAS
    do{
        scanf("%d/%d/%d", &dia_da_semana.dia, &dia_da_semana.mes, &dia_da_semana.ano);

        if((dia_da_semana.mes == abr || dia_da_semana.mes == jun || dia_da_semana.mes == set || dia_da_semana.mes == nov) && dia_da_semana.dia > 30)
            printf(INVALIDA);
            return 0;

        if(dia_da_semana.dia < 1 || dia_da_semana.dia > 31 || dia_da_semana.mes > 12 || dia_da_semana.mes < 1 || dia_da_semana.ano > 2399 || dia_da_semana.ano < 1900){
            printf(INVALIDA);
            return 0;
        }
    }while (dia_da_semana.dia < 1 || dia_da_semana.dia > 31 || dia_da_semana.mes > 12 || dia_da_semana.mes < 1 || dia_da_semana.ano > 2399 || dia_da_semana.ano < 1900);
    
    //CALCULOS
    A = dia_da_semana.ano - 1900;

    if(((dia_da_semana.ano % 4 == 0 && dia_da_semana.ano % 100 && dia_da_semana.ano % 400) || (dia_da_semana.ano % 4 && dia_da_semana.ano % 100 == 0 && dia_da_semana.ano % 400) || (dia_da_semana.ano % 4 == 0 && dia_da_semana.ano % 100 && dia_da_semana.ano % 400 ==0)) && (dia_da_semana.dia <= 29 && dia_da_semana.mes <= 2)){
        B = A/4 - 1;

    }else{
        
        B = A / 4;
    }
    


    switch (dia_da_semana.mes)
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

    D = dia_da_semana.dia - 1;

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
