/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 09 - Exercício 05 - RSA, Alice e Bob
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

#define ASSINATURA_VALIDA   "\n<< assinatura válida! >>\n"
#define ASSINATURA_INVALIDA "\n<< assinatura inválida! >>\n"

typedef struct {
    unsigned long n, publica, privada;
} chave;

void enviarMensagem(chave remetente, chave destinatario);
void receberMensagem(chave remetente, chave destinatario);

// Faz a exponenciação modular no formato a^b % c
unsigned long exponenciacaoModular(unsigned long a, unsigned long b, unsigned long c);

// Inicia o hash com o respectivo valor inicial
unsigned long iniciarHash();

// Recebe o hash anterior, e o atualiza usando a chave k e a mensagem m
unsigned long atualizarHash(unsigned long hash, chave k, unsigned long m);

enum operacao {enviar_alice_para_bob = 1, enviar_bob_para_alice, decriptar_alice_para_bob, decriptar_bob_para_alice};

int main () {
    chave alice, bob;
    int op;
    scanf("%lu%lu%lu", &alice.n, &alice.publica, &alice.privada);
    scanf("%lu%lu%lu", &bob.n, &bob.publica, &bob.privada);

    scanf("%i ", &op);

    switch (op) {
        case enviar_alice_para_bob:
            enviarMensagem(alice, bob);
            break;

        case enviar_bob_para_alice:
            enviarMensagem(bob, alice);
            break;

        case decriptar_alice_para_bob:
            receberMensagem(alice, bob);
            break;

        case decriptar_bob_para_alice:
            receberMensagem(bob, alice);
            break;
    }

    return 0;
}

/* <<< IMPLEMENTE AS FUNÇÕES AQUI >>> */
void enviarMensagem(chave remetente, chave destinatario){
    char carac;
    int flag = 0;
    unsigned long int aux = 0,result = 0;
    do{
        flag = scanf("%c", &carac);

        if(flag != EOF){
            aux = atualizarHash(aux,remetente,carac);
            result = exponenciacaoModular(carac, destinatario.publica, destinatario.n);

            printf("%lu ",result);
        }
    }while(flag != EOF);

    result = exponenciacaoModular(aux, remetente.privada,remetente.n);
    printf("%lu\n",result);
}
void receberMensagem(chave remetente, chave destinatario){
    unsigned long int numero,flag = 0,hash = iniciarHash(),printa = 0,hashtotal = 0,i = 0;
    char a;

    do{
        flag = scanf("%lu",&numero);

        if(flag != EOF){
            if( i != 0){
                printa = exponenciacaoModular(hash,destinatario.privada,destinatario.n);
                hashtotal = atualizarHash(hashtotal,remetente,printa);
                a = printa;
                printf("%c",a);
            }
            hash = numero;

            i++;
        }
    }while(flag != EOF);
    
    hash = exponenciacaoModular(hash,remetente.publica,remetente.n);


    if(hashtotal == hash){
        printf(ASSINATURA_VALIDA);
    }else
    {
        printf(ASSINATURA_INVALIDA);   
    }
    
}

unsigned long iniciarHash(){
    return 0;
}

//ATUALIZA O HASH DE QUALQUER FUNÇÃO
unsigned long atualizarHash(unsigned long hash, chave k, unsigned long m){
    return ((hash + m) % k.n);
}

//FAZ A EXP MODULAR DE QUALQUER COISA
unsigned long exponenciacaoModular(unsigned long a, unsigned long b, unsigned long c){
    //a^b mod c
    unsigned long int total = 1;

    for(int i = 0;i < b;i++){
        total = (a * total) % c;
    }

    return total;
}