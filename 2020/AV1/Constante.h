#define TAMANHO 10
#define UTILIZACAO 10

#define LINHA 2
#define COLUNA 3

#define LINHA_R 2 	// linha da opcao de Revisao
#define COLUNA_R 4	// coluna da opcao de Revisao


#define INCLUIR_VEICULO 301
#define LISTAR_VEICULO 401
#define INCLUIR_UTILIZACAO 501
#define LISTAR_UTILIZACAO 601
#define INCLUIR_REVISAO 701
#define LISTAR_REVISAO 901
#define RELATORIO 89
#define SAIR 999

#define Pos_Veiculo 0

typedef struct Veiculo{
    char modelo[50];
    char marca[50];
    int ano_veiculo;
    int km_inicial;
    int km_final;
    int km_total;
    int dia;
    int mes;
    int ano;
};

Veiculo vetorVeiculo[TAMANHO];
int cadastrados[2];
//int matUtilizacao[LINHA][COLUNA];
