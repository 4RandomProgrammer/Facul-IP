/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 04 - Exercício 05 - Senha
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

#define SENHA_INVALIDA "senha inválida!\n"
#define SENHA_FORTE    "senha forte!\n"

int main(){
    char senha;
    int condM = 0, condm =0,conde = 0,cond5 = 0,condsp = 0, validade = 1,condn = 0;
    do
    {
        do
        {
            scanf("%c", &senha);

            if(senha >= 'A' && senha <= 'Z'){
                condM++;
            }if(senha >= 'a' && senha <= 'z' ){
                condm++;
            }if(senha == '!' || senha =='?' || senha =='$' || senha =='~' || senha =='^' || senha =='&' || senha =='*' || senha =='_' || senha =='-' || senha =='+' || senha =='=' || senha =='(' || senha ==')' || senha =='[' || senha ==']' || senha =='{' || senha =='}' || senha ==':' || senha ==';' || senha =='@' || senha =='#' || senha =='|' || senha =='<' || senha =='>' || senha =='.' || senha ==',' || senha =='\\' || senha =='/' ){
                conde++;
            }if(senha == ' ' || senha == 34|| senha == 39 || senha == 96 || senha > 126 )
            {
                condsp++;
            }
            if(senha >='0'&& senha <='9'){
                condn++;
            }
            
            cond5++;
        }while(senha != '\n');
        if(condM != 0 && condm != 0 && conde != 0 && cond5 != 6 && condsp == 0 && condn != 0){
            validade = 0;
        }else{
                printf(SENHA_INVALIDA);
                condn = 0;
                conde = 0;
                condM = 0;
                condm = 0;
                cond5 = 0;
                condsp = 0;
        }
    } while (validade == 1);
    
    printf(SENHA_FORTE);
}
