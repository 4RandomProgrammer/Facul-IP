/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 10 - Exercício 04 - Corretor Ortográfico
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
#include <string.h>
#include <ctype.h>

#define MAX 100

typedef char Texto;

void apagar_caractere(Texto t[], int indice);

void corrigir_simbolos(Texto t[]);

void corrigir_numeros(Texto t[]);

void corrigir_espacos(Texto t[]);

void corrigir_caixa(Texto t[]);

void normalizar_texto(Texto t[]) {
    corrigir_simbolos(t);
    corrigir_numeros(t);
    corrigir_espacos(t);
    corrigir_caixa(t);
}

int main() {
    Texto text[MAX];

    scanf("%[^\n]", text);

    normalizar_texto(text);

    printf("%s\n", text);

    return 0;
}

/* <<< IMPLEMENTE AS FUNÇÕES AQUI >>> */
void apagar_caractere(Texto t[], int indice){
    for(int i = indice; t[i] != '\0';i++){
        t[i] = t[i + 1];

    }
}
void corrigir_simbolos(Texto t[]){
    for (int i = 0; t[i] != '\0'; i++){
        if(ispunct(t[i])){
            if(!isspace(t[i + 1]) && t[i] != '-' && t[i + 1] != '\0'){
                apagar_caractere(t,i);
                i -= 1;
            }
            if(isspace(t[i + 1]) && (t[i] != '!' && t[i] != '.' && t[i] != '?' && t[i] != ',' && t[i] != '-') && t[i + 1] != '\0'){
                apagar_caractere(t,i);
                i -= 1;
            }
        }
    }
    for(int i = 0; t[i] != '\0';i++){
        if(ispunct(t[i]) && isspace(t[i - 1])){
            apagar_caractere(t,i);
            i--;
        }
    }
        
}

void corrigir_numeros(Texto t[]){
    for(int i = 0; t[i] != '\0'; i++){
        if(isdigit(t[i])){
            if(isalpha(t[i + 1])){
                apagar_caractere(t,i);
                i = -1;
            }
        }
    }

}
void corrigir_espacos(Texto t[]){
    int i = 0;

    for(i = 0; t[i] != '\0';i++){
        if(isspace(t[0])){
            apagar_caractere(t,0);
            i = -1;
        }
    }

    for(i = 0; t[i] != '\0';i++){
        if(isspace(t[i]) && (isspace(t[i + 1]) || t[i + 1] == '\0')){
            apagar_caractere(t,i);
            i--;
        }
    }

    for(i = 0; t[i] != '\0';i++){
        if(isspace(t[i]) && isspace(t[i - 1])){
            apagar_caractere(t,i);
            i--;
        }
    }


}
void corrigir_caixa(Texto t[]){
    int i = 0;


    for(i = 0; t[i] != '\0';i++){
        t[i] = tolower(t[i]);
    }
    for(i = 0; t[i] != '\0';i++){
        if((t[i - 2] == '!' || t[i - 2] == '.' || t[i - 2] == '?') && isdigit(t[i])){
            t[i] = toupper(t[i]);
        }
    }

    for(i = 0; t[i] != '\0';i++){
        if(isalpha(t[i])){
            t[i] = toupper(t[i]);
            break;
        }
    }
}