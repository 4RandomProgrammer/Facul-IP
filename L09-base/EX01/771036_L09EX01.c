/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 09 - Exercício 01 - Máquina de Moore
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

#define SIM "sim\n"
#define NAO "não\n"

void estadoINICIAL();
void estadoUM();
void estadoDOIS();
void estadoTRES();
void estadoFINAL();

// Recebe um caractere por vez da entrada, retorna EOF caso chegue no fim do arquivo
char receberUmCaractere();

int main () {
    estadoINICIAL();
    return 0;
}

/* <<< IMPLEMENTE AS FUNÇÕES AQUI >>> */
char receberUmCaractere(){
    char e;
    char flag = scanf("%c",&e);

    if( flag != EOF)
    return (e);

    else
    return(flag);
    

}

void estadoINICIAL(){
    char a = receberUmCaractere();

    if(a == EOF){
        printf(NAO);
    }else if(a  == 'n'){
        estadoUM();
    }else{
        estadoINICIAL();
    }

}
void estadoUM(){
    char b = receberUmCaractere();

    if(b == EOF){
        printf(NAO);
    }else if(b == 'a'){
        estadoDOIS();
    }else if(b == 'n'){
        estadoUM();
    }else{
        estadoINICIAL();
    }
    
}
void estadoDOIS(){
   char d = receberUmCaractere();

    if(d == EOF){
        printf(NAO);
    }else if (d  == 'n'){
       estadoTRES();
   }else{
       estadoINICIAL();
   }
   
   
}
void estadoTRES(){
    char c = receberUmCaractere();

    if(c == EOF){
        printf(NAO);
    }else if(c == 'o'){
        estadoFINAL();
    }else if(c == 'n'){
        estadoUM();
    }else if(c == 'a'){
        estadoDOIS();
    }else{
        estadoINICIAL();
    }
    
    
}
void estadoFINAL(){

    printf(SIM);
}