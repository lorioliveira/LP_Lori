#define TAMANHO 10

#define CADASTRAR 1
#define LISTAR 2
#define PESQUISAR 3
#define ALTERAR 4
#define EXCLUIR 5
#define SAIR 9
#define Pos_Veiculo 0

// Criar uma estrutura veiculo que contenha
// os atributos: modelo, marca, placa, renavan, ano;

typedef struct Veiculo {
    char modelo[50];
    char marca[50];
    char placa[50];
    int renavan;
    int ano;
};

Veiculo vetorVeiculo[TAMANHO];
int cadastrados[2];
