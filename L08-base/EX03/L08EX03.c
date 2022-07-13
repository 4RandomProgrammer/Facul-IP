/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 08 - Exercício 03 - Veículos
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

/* <<< COMPLETE CONFORME O NECESSÁRIO, UTILIZE AS ESTRUTURAS PRÉ-DEFINIDAS>>> */

#include <stdio.h>

#define INVALIDA   "Opção inválida!\n"
#define ERRO       "Erro!\n"
#define CADASTRADO "Veículo cadastrado com sucesso!\n"
#define EMPRESTADO "Veículo emprestado com sucesso!\n"
#define DEVOLVIDO  "Veículo devolvido com sucesso!\n"

typedef unsigned long long int CPF;
typedef char Carros;

enum {cadastrar = 1,emprestar,devolver,sair};

typedef struct {
    CPF numero;
    int placa;
    // flag para saber se possui carro emprestado
    unsigned int emprestouCarro;
    Carros c;
    int x;
} Funcionario;

typedef struct{
    Carros c;
    int placa;
    unsigned int emprestouCarro;
    CPF numero;
}Carritos;



int main () {
    Funcionario funcionarios[40];
    Carritos car[30];
    int op,i = 0,j = 0,cadastro = 0,flag = 0,func = 0,flag2 = 0,done = 1;
    unsigned long long int temp,carroemprest = 0; 
    char tempc = 0;

    do{

        scanf("%d",&op);

        switch(op) {
            case cadastrar:
                     scanf(" %c %lld",&tempc,&temp);
                    
                     for(i = 0;i < cadastro;i++){
                            if(temp == car[i].placa && tempc == car[i].c){   
                                printf(ERRO);
                                flag = 1;
                                break;
                            }
                        }

                    if(flag){
                        flag = 0;
                        break;
                    }else{

                        car[cadastro].placa = temp;
                        car[cadastro].c = tempc;
                        car[cadastro].emprestouCarro = 0;
                        printf(CADASTRADO);
                        cadastro++;
                        carroemprest++;
                    }
                break;

            case emprestar:
                if(carroemprest == 0){
                    printf(ERRO);

                }else{
                    scanf("%llu",&temp);
                    for(i = 0;i < func;i++){
                        if(temp == funcionarios[i].numero){
                            if (funcionarios[i].emprestouCarro == 0)
                            {
                                flag2++;
                                break;
                            }else{
                                printf(ERRO);
                                break;
                            }
                            
                        }       
                    }        
                    if(i >= func && flag2 == 0){
                        funcionarios[i].numero = temp;
                        func++;
                    }
                    for(j = 0; j < cadastro;j++){
                        if(car[j].emprestouCarro == 0){
                            funcionarios[i].emprestouCarro = 1;
                            funcionarios[i].c = car[j].c;
                            funcionarios[i].placa = car[j].placa;
                            car[j].emprestouCarro = 1;
                            funcionarios[i].x = j;
                            printf(EMPRESTADO);
                            carroemprest--;
                            break;
                        }
                    }
                                                                       

                }
                break;

            case devolver:
                scanf("%llu",&temp);

                for(i = 0;i < func;i++){
                    if(temp == funcionarios[i].numero && funcionarios[i].emprestouCarro == 1){
                        funcionarios[i].emprestouCarro = 0;
                        flag = 1;
                        carroemprest++;
                        printf(DEVOLVIDO);
                        car[funcionarios[i].x].emprestouCarro = 0;
                        break; 
                    }
                } 


               if (!flag){
                    printf(ERRO);
                    flag = 0;
                }
                break;


            case sair:
                printf("--- Controle de veículos ---\n");
                
                for (i = 0; i < 40; i++)
                {
                    if(funcionarios[i].emprestouCarro == 1){
                        printf("%llu/%c(%d)\n",funcionarios[i].numero,funcionarios[i].c,funcionarios[i].placa);
                    }
                }

                break;


            default:
                printf(INVALIDA);
        }

    }while (op != 4);
    
    return 0;
}
