/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 08 - Exercício 01 - Notas
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

#define MEDIA_LOGICA "Lógica Matemática: %lu %0.1f\n"
#define MEDIA_CD     "Circuitos Digitais: %lu %0.1f\n"

typedef float nota;
typedef unsigned long RA;

typedef struct logi {
    nota logica_p1,logica_p2;
} LOGICA;

typedef struct cd {
    nota cd_p1,cd_p2,cd_p3,At,L;
} CD;

typedef struct aluno {
    RA ra;
    CD notasCD;
    LOGICA notasLOGICA;
    float mediaCD,mediaLOGI;
} Aluno;

int main() {
    Aluno aluno1,aluno2;

    //RA
    scanf("%lu",&aluno1.ra);
    //NOTAS DE CD
    scanf("%f %f %f %f %f",&aluno1.notasCD.cd_p1,&aluno1.notasCD.cd_p2,&aluno1.notasCD.cd_p3,&aluno1.notasCD.At,&aluno1.notasCD.L);

    //MEDIA DE CD
    aluno1.mediaCD = (aluno1.notasCD.cd_p1 + aluno1.notasCD.At)*0.2 + aluno1.notasCD.cd_p2 * 0.3 + aluno1.notasCD.cd_p3 * 0.4 + aluno1.notasCD.L * 0.1;

    //NOTAS LÓGICA
    scanf("%f %f",&aluno1.notasLOGICA.logica_p1,&aluno1.notasLOGICA.logica_p2);

    //MÉDIA DE LÓGICA
    aluno1.mediaLOGI = (aluno1.notasLOGICA.logica_p1 + aluno1.notasLOGICA.logica_p2)/2;



     //RA
    scanf("%lu",&aluno2.ra);
    //NOTAS DE CD
    scanf("%f %f %f %f %f",&aluno2.notasCD.cd_p1,&aluno2.notasCD.cd_p2,&aluno2.notasCD.cd_p3,&aluno2.notasCD.At,&aluno2.notasCD.L);

    //MEDIA DE CD
    aluno2.mediaCD = (aluno2.notasCD.cd_p1 + aluno2.notasCD.At)*0.2 + aluno2.notasCD.cd_p2 * 0.3 + aluno2.notasCD.cd_p3 * 0.4 + aluno2.notasCD.L * 0.1;

    //NOTAS LÓGICA
    scanf("%f %f",&aluno2.notasLOGICA.logica_p1,&aluno2.notasLOGICA.logica_p2);

    //MÉDIA DE LÓGICA
    aluno2.mediaLOGI = (aluno2.notasLOGICA.logica_p1 + aluno2.notasLOGICA.logica_p2)/2;

    if(aluno1.mediaCD > aluno2.mediaCD){
        printf(MEDIA_CD,aluno1.ra,aluno1.mediaCD);
    }
    else{
        printf(MEDIA_CD,aluno2.ra,aluno2.mediaCD);
    }

    if(aluno1.mediaLOGI > aluno2.mediaLOGI){
        printf(MEDIA_LOGICA,aluno1.ra,aluno1.mediaLOGI);
    }
    else
    {
        printf(MEDIA_LOGICA,aluno2.ra,aluno2.mediaLOGI);
    }

    return 0;
}
