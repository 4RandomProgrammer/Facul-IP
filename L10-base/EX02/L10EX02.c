/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 10 - Exercício 02 - Operações
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
 *  RA:
 *  Nome:
 *
 * ================================================================== */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX      101
#define SUCESSO  "Operação efetuada com sucesso!\n"
#define ERRO     "Erro\n"
#define INVALIDA "Opção inválida\n"

int adicionar(char str[], char c);

int remover(char str[], char c);

void ordenar(char str[]);

void inverter(char str[]);

int ehPalindromo(char str[]);

void imprimir(char str[]);

int main() {
    int op;
    char c;
    char str[MAX];

    scanf("%[^\n]", str);

    while(1) {
	    scanf("%d", &op);

        switch(op) {
            case 0:
                return 0;

            case 1:
                scanf(" %c", &c);
                if(adicionar(str, c))
                    printf(SUCESSO);
                else
                    printf(ERRO);
                break;

            case 2:
                scanf(" %c", &c);
                if(remover(str, c))
                    printf(SUCESSO);
                else
                    printf(ERRO);
                break;

            case 3:
                ordenar(str);
                break;

            case 4:
                inverter(str);
                break;

            case 5:
                printf("%d\n", ehPalindromo(str));
                break;

            case 6:
                imprimir(str);
                break;

            default:
                printf(INVALIDA);
        }
    }

    return 0;
}

/* <<< IMPLEMENTE AS FUNÇÕES AQUI >>> */
//OP = 1
int adicionar(char str[], char c){
    for(int i = 0;i < 100;i++){
        if(str[i] == '\0'){
            str[i] = c;
            str[i + 1] = '\0';
            return 1;
        }
    }

    return 0;
}

//OP = 2
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

//OP = 3
void ordenar(char str[]){
    char aux = 2;
    for (int bbs = 0;  bbs < strlen(str);bbs++) {
        for (int i = 0; i < strlen(str) - 1; i++) {
            if (str[i] > str[i + 1]) {

                aux = str[i];

                str[i] = str[i + 1];

                str[i + 1] = aux;
            }
        }
    }
}

//OP = 4
void inverter(char str[]){
    char aux = 2;
    for (int i = 0,j = strlen(str) - 1;  i < j;i++,j--) {
        aux = str[i];
        str[i] = str[j];
        str[j] = aux;
    }
}

//OP = 5
int ehPalindromo(char str[]){
    char str1[MAX],str2[MAX];
    int i = 0;

    strcpy(str1,str);

    
    for(i = 0;str[i] != '\0';i++){
        if(isalpha(str1[i]))
            str1[i] = tolower(str1[i]);

        if(ispunct(str1[i])){
            remover(str1,str1[i]);
            i -= 1;
        }
        if(isspace(str1[i])){
            remover(str1,str1[i]);
            i -= 1;
        }
    }

    strcpy(str2,str1);
    inverter(str2);

    if(!(strcmp(str1,str2)))
        return 1;
    else
        return 0;


}

//OP = 6
void imprimir(char str[]){
    printf("%s\n",str);
}