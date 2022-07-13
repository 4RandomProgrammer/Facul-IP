/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 09 - Exercício 02 - Sorteio
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

#define MAX_CLIENTES 1000
#define SEM_CADASTRADOS "Não há clientes cadastrados no sorteio!\n"
#define INVALIDA "Opção inválida!\n"

typedef struct {
    long long int cpf;
    float valorGasto;
} Cliente;

enum operacoes {Comprar = 1, VerClientes, Sortear};

// Verificar se o cliente é cadastrado com base na atual carteira de clientes, se sim, retorna seu índice,
// caso contrário, retorna -1
int verificar_cadastro(Cliente c[], int nClientes, long long int cpf);

// Cadastrar novo cliente, a função retorna uma struct cliente com os dados do cliente
Cliente cadastrar_cliente(long long int cpf);

// Atualizar valor gasto na loja por um cliente já cadastrado, a função retorna os dados do cliente
Cliente atualizar_valorGasto_cliente(Cliente c, float valorGasto);

// Verificar quantas vezes o cliente pode participar do sorteio
int verificar_sorteio(Cliente c);

// Com base na carteira de clientes que participam do sorteio + o número de clientes que estão participando do sorteio, inserir o cliente c;
void inserir_sorteio(Cliente c[], int nClientes, Cliente x);

// Função que irá requisitar o id do ganhador(o id será inserido através do scanf);
int requisitar_sorteio();

// Conferir quem foi o ganhador passando o id sorteado e a carteira de clientes participantes do sorteio
Cliente ganhador_sorteio(Cliente c[], int id);

// Imprimir os clientes que estão na carteira de clientes (função a ser utilizada na opção 3);
void printar_clientes_cadastrados(Cliente c[], int nCadastrados);

int main() {
    Cliente sorteio[MAX_CLIENTES], clientes[MAX_CLIENTES];
    int op, nClientes = 0, nSorteio = 0, id, qtd;
    long long int cpf;
    float valorCompra;

    while (1) {
        scanf("%d", &op);

        switch (op) {
            case Comprar:
                scanf("%lld %f", &cpf, &valorCompra);
                id = verificar_cadastro(clientes, nClientes, cpf);
                if (id == -1) {
                    clientes[nClientes] = cadastrar_cliente(cpf);
                    id = nClientes;
                    nClientes++;
                }
                clientes[id] = atualizar_valorGasto_cliente(clientes[id], valorCompra);
                qtd = verificar_sorteio(clientes[id]);
                while (qtd > 0) {
                    inserir_sorteio(sorteio, nSorteio, clientes[id]);
                    clientes[id] = atualizar_valorGasto_cliente(clientes[id], -50);
                    nSorteio++;
                    qtd--;
                }
                break;

            case VerClientes:
                printar_clientes_cadastrados(sorteio, nSorteio);
                break;

            case Sortear:
                id = requisitar_sorteio();
                Cliente ganhador = ganhador_sorteio(sorteio, id);
                printf("%lld\n", ganhador.cpf);
                return 0;

            default:
                printf(INVALIDA);
        }
    }
}

/* <<< IMPLEMENTE AS FUNÇÕES AQUI >>> */
int verificar_cadastro(Cliente c[], int nClientes, long long int cpf){
    int i = 0;
    for(i = 0;i < nClientes;i++){
        if(cpf == c[i].cpf){
            break;
        }
    }
    if(i == nClientes)
        return -1;
    else
        return i;
    
}
Cliente cadastrar_cliente(long long int cpf){
    Cliente aux;
    aux.cpf = cpf;
    aux.valorGasto = 0;

    return aux;
}
Cliente atualizar_valorGasto_cliente(Cliente c, float valorGasto){
    c.valorGasto += valorGasto;

    return c;
}
int verificar_sorteio(Cliente c){
    int qnt;
    qnt = c.valorGasto/50;
 
    return qnt;
}
void inserir_sorteio(Cliente c[], int nClientes, Cliente x){
    c[nClientes] = x;

}
int requisitar_sorteio(){
    int i;
    scanf("%d",&i);

    return i;
}
Cliente ganhador_sorteio(Cliente c[], int id){
    return c[id];

}
void printar_clientes_cadastrados(Cliente c[], int nCadastrados){
    if (nCadastrados == 0)
    {
        printf(SEM_CADASTRADOS);
    }else{
        for(int i = 0; i < nCadastrados;i++)
            printf("%d - %llu\n",i,c[i].cpf);        
    }
    
    

}