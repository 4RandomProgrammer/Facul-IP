/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 09 - Exercício 04 - Batalha Naval
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

#define VENCEU      "Todas as embarcações foram destruídas\n"
#define ATINGIDO    "Embarcação atingida!\n"
#define ERROU       "Água!\n"
#define PRINT_NAVIO "Navio: %c - Dano: %.2f%%\n"

enum frota {P = 0, N, C, S, D};

typedef char Tabuleiro;

typedef struct {
    int x, y;
} ponto;

typedef struct {
    char nome;
    float dano;
    int tamanho;
    ponto posicao[5];
} Navio;

// Inicia uma struct navio
Navio criar_navio(char navio, ponto pos[2]);

// Posicionar os navios no tabuleiro
void posicionar_navio(Navio n, Tabuleiro tab[][10]);

// Mapear as posições dos navios, retorna a frota de navios configuradas para o jogo
void iniciar_jogo(Tabuleiro t[][10], Navio frota[]);

// Realiza um ataque
int atacar(Tabuleiro t[][10], Navio frota[], ponto p);

// Finaliza o jogo imprimindo as mensagens necessárias
void finalizar(Navio frota[], int atingidos);

int main() {
    Tabuleiro t[10][10];
    Navio frota[5];
    int atingidos = 0, qtdJogadas;
    ponto ataque;

    iniciar_jogo(t, frota);

    scanf("%d", &qtdJogadas);

    for (int i = 0; i < qtdJogadas; i++) {
        scanf("%d%d", &ataque.x, &ataque.y);
        if (atacar(t, frota, ataque))
            atingidos++;
    }

    finalizar(frota, atingidos);

    return 0;
}

/* <<< IMPLEMENTE AS FUNÇÕES AQUI >>> */
void iniciar_jogo(Tabuleiro tab[][10], Navio frota[]){
    ponto pos[2];
    char navio;
    Navio n;

    for(int i; i < 5;i++){
        scanf(" %c %d %d %d %d",&navio,&pos[0].x,&pos[0].y,&pos[1].x,&pos[1].y);
        frota[i] = criar_navio(navio, pos);
        n = frota[i];
        posicionar_navio(n, tab);
        
    }
}

Navio criar_navio(char navio, ponto pos[2]){
    Navio aux;
    aux.nome = navio;
    aux.dano = 0;
    switch (navio)
    {
        case 'C':
            aux.tamanho = 3;
        break;

        case 'S':
            aux.tamanho = 3;
        break;

        case 'D':
            aux.tamanho = 2;
        break;

        case 'P':
            aux.tamanho = 5;
        break; 
        
        default:
            aux.tamanho = 4;
        break;
    }

    if(pos[0].x < pos[1].x){
        for(int i = 0;i < aux.tamanho;i++){
            aux.posicao[i].y = pos[0].y;
            aux.posicao[i].x = i + pos[0].x;
        }

    }else if(pos[0].y < pos[1].y){
        for(int i = 0;i < aux.tamanho;i++){
            aux.posicao[i].x = pos[0].x;
            aux.posicao[i].y = pos[0].y + i;
        }
    }

    return aux;
}

void posicionar_navio(Navio n, Tabuleiro tab[][10]){
    for(int i; i < n.tamanho;i++){
        tab[n.posicao[i].x][n.posicao[i].y] = n.nome;
    }

}

int atacar(Tabuleiro t[][10], Navio frota[], ponto p){
    int flag;
    flag = 0;
    for(int i = 0; i < 5;i++){
        for(int j = 0; j < frota[i].tamanho;j++){
            if((p.y == frota[i].posicao[j].y) && (p.x == frota[i].posicao[j].x)){
                printf(ATINGIDO);
                frota[i].dano += 1;
                flag++;
                return 1;
            }
        }

    }
    if(flag == 0){
        printf(ERROU);
        return 0;
    }
    

}

void finalizar(Navio frota[], int atingidos){
    if(atingidos == 17){
        printf(VENCEU);
    }else{
        for(int i = 0;i < 5;i++ ){
            if(frota[i].nome == 'P'){
                printf(PRINT_NAVIO,frota[i].nome,((float)frota[i].tamanho - frota[i].dano)/(float)frota[i].tamanho * 100);
                break;
            }
        }
        for(int i = 0;i < 5;i++ ){
            if(frota[i].nome == 'N'){
                printf(PRINT_NAVIO,frota[i].nome,((float)frota[i].tamanho - frota[i].dano)/(float)frota[i].tamanho * 100);
                break;
            }
        }
                for(int i = 0;i < 5;i++ ){
            if(frota[i].nome == 'C'){
                printf(PRINT_NAVIO,frota[i].nome,((float)frota[i].tamanho - frota[i].dano)/(float)frota[i].tamanho * 100);
                break;
            }
        }
        for(int i = 0;i < 5;i++ ){
            if(frota[i].nome == 'S'){
                printf(PRINT_NAVIO,frota[i].nome,((float)frota[i].tamanho - frota[i].dano)/(float)frota[i].tamanho * 100);
                break;
            }
        }
        for(int i = 0;i < 5;i++ ){
            if(frota[i].nome == 'D'){
                printf(PRINT_NAVIO,frota[i].nome,((float)frota[i].tamanho - frota[i].dano)/(float)frota[i].tamanho * 100);
                break;
            }
        }
    }

}