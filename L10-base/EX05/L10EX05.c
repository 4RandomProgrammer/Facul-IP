/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 10 - Exercício 05 - E-mails Únicos
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
#include<ctype.h>

void remover(char str[], int n);

int main(){
    char emails[101][101],leitura[101];
    int i = 0,j = 0,flag = 0, lMatriz = 0,count = 0;

    do{
        flag = scanf("%[^\n]\n",leitura);

        if(flag != EOF){
            for(i = 0;leitura[i] != '\0'; i++){
                if(isalpha(leitura[i]))
                    leitura[i] = tolower(leitura[i]);
            }

            //PROCURA +
            for(j = 0;leitura[j] != '@';j++){
                if(leitura[j] == '+'){
                    for(i = j;leitura[i] != '@';i++){
                        remover(leitura,i);
                        i -= 1;
                    }
                    break;
                }
            }

            //procurar pontos
            for(i = 0; leitura[i] != '@'; i++){
                if(ispunct(leitura[i])){
                    remover(leitura,i);
                    i-= 1;
                }
            }
               

            for(count = 0; count < lMatriz;count++){
                if(!strcmp(emails[count],leitura)){
                    break;
                }
            }

            if(count == lMatriz){
                //printf("%s a\n", leitura);
                strcpy(emails[count],leitura);
                lMatriz++;

            }



        }

    }while (flag != EOF);


    printf("%d\n",lMatriz);



    return 0;
}
void remover(char str[], int n){
    for(int i = n; str[i] != '\0';i++){
        str[i] = str[i + 1];
    }
}