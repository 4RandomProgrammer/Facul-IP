/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 10 - Exercício 03 - Chave de Licença
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
#include<ctype.h>
#include<string.h>

int remover(char str[], char c);

int main(){
    char str[1002];
    int k,i, flag = 0,gp = 0;

    do{
            flag = scanf("%d %[^\n]%*c",&k,str);

        if(flag != EOF){

            for(int i = 0;str[i] != '\0';i++){
                if(isalpha(str[i]))
                    str[i] = toupper(str[i]);

                if(ispunct(str[i])){
                    remover(str,str[i]);
                    i -= 1;
                }
            }

            for(i = 0;i < strlen(str) % k;i++){
                    printf("%c",str[i]);
            }

            
            for(;i < strlen(str);i++){
                if(i != 0 && (i - (strlen(str) % k)) % k == 0)
                    printf("-");

                printf("%c",str[i]);
            }


            printf("\n");
        }

        }while (flag != EOF);
        
    return 0;
}

int remover(char str[], char c){
    int j = 0;

    for(int i = 0; i < strlen(str);i++){

        if(str[i] == toupper(c) || str[i] == tolower(c)){

            for(j = i; str[j] != '\0';j++){
                str[j] = str[j+1];
            }

            return 1;
        }
    }

    return 0;
}
