#define TAMANHO 10

#define INCLUIR_TANQUE 101
#define LISTAR_TANQUE 201
#define INCLUIR_PEIXE 301
#define LISTAR_PEIXE 401
#define INCLUIR_CARDUME 501
#define LISTAR_CARDUME 601
// 27/05
#define GRAVAR_TANQUE 901
#define GRAVAR_PEIXE 902
#define GRAVAR_CARDUME 903
#define GRAVAR_BINARIO 904
#define CARREGAR 905

#define SAIR 000

#define Pos_Tanque 0
#define Pos_Peixe 1
#define Pos_Cardume 2

typedef struct Tanque{
	char modelo[50];
	char finalidade[50];
	int populacao_total;
};

typedef struct Peixe{
	char peixe[50];
	char descricao[50];
};

typedef struct Cardume{
	char peixe[50];
	char tanque[50];
	int qtdePeixe;
};

Tanque vetorTanque[TAMANHO];
Peixe vetorPeixe[TAMANHO];
Cardume vetorCardume[TAMANHO];

int cadastrados[3];
