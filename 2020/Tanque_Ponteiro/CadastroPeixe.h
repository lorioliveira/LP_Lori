#include <stdio.h>
#include <cstring>
#include <locale>
#include <iostream>
#include <conio.h>
#include <malloc.h>
using namespace std;

// INCLUIR TANQUE 
void incluirTanque(int *posicaoT, struct Tanque *pontTanque, int totalT){
	for (int i = 0; i < totalT; i++){
		Tanque t;
		cout << " Incluir Tanque " << endl;
		string nome1;
		cout << " Entre com o modelo do tanque: ";
		cin.ignore();
		getline(cin, nome1);
		strcpy(t.modelo, nome1.c_str());
		
		cout << "\n Qual a finalidade do tanque?: ";
		getline(cin, nome1);
		strcpy(t.finalidade,nome1.c_str());
		
		cout << "\n Entre com a populacao total no momento: ";
		cin>> t.populacao_total;
		
		pontTanque[*posicaoT] = t;
		*posicaoT = (*posicaoT) + 1;
	}
}

// LISTAR TANQUE
void listarTanque(int posicaoTanque, int *posicaoT, struct Tanque *pontTanque){
	if(posicaoTanque == *posicaoT){
		return;
	}
		cout << " == Listagem do tanque cadastrado " << endl;
		cout << " Codigo: " << posicaoTanque << endl;
		cout << " Modelo do Tanque: " << pontTanque[posicaoTanque].modelo << endl;
		cout << " Finalidade: " << pontTanque[posicaoTanque].finalidade << endl;
		cout << " Populacao total: " << pontTanque[posicaoTanque].populacao_total << " peixe(s)" << endl << endl;
		listarTanque(posicaoTanque + 1, posicaoT, pontTanque);
}

// INCLUIR PEIXE
void incluirPeixe(int *posicaoP, struct Peixe *pontPeixe, int totalP){
	for(int i = 0; i < totalP; i++){
		Peixe p;
		cout << " == Incluir Tipo do Peixe " << endl;
		string nome1;
		
		cout << " Entre com o nome do peixe: ";
		cin.ignore();
		getline(cin, nome1);
		strcpy(p.peixe, nome1.c_str());
		
		cout << " Entre com a descricao desejada: ";
		getline(cin, nome1);
		strcpy(p.descricao, nome1.c_str());
		
		pontPeixe[*posicaoP] = p;
		*posicaoP = (*posicaoP) + 1;
	}
}

//LISTAR PEIXE
void listarPeixe(int posicaoPeixe, int *posicaoP, struct Peixe *pontPeixe){
	if(posicaoPeixe == *posicaoP){
		return;
	}
		cout << " == Listagem do peixe cadastrado " << endl;
		cout << " Codigo " << posicaoPeixe << endl;
		cout << " Peixe: " << pontPeixe[posicaoPeixe].peixe << endl;
		cout << " Descricao: " << pontPeixe[posicaoPeixe].descricao << endl << endl;
		listarPeixe(posicaoPeixe + 1, posicaoP, pontPeixe);
}


// INCLUIR CARDUME
void incluirCardume(int *posicaoC, int *posicaoT, struct Cardume *pontCardume, struct Tanque *pontTanque, int totalC){
	int i, qtdePeixe, NumTanque;
	bool existe = false;
	
	for(int i = 0; i < totalC; i++){	
		cout << " == Incluir Cardume no Tanque" << endl;
		Cardume c;
		string nome1;
		cout << " Entre com o nome do peixe a ser inserido: ";
		cin.ignore();
		getline(cin, nome1);
		strcpy(c.peixe, nome1.c_str());
		
		cout << " Qual o nome do tanque?: ";
		getline(cin, nome1);
		strcpy(c.tanque, nome1.c_str()); 
		
		cout << " Digite o codigo do tanque para adicionar o cardume: ";
		cin >> NumTanque;
		
		NumTanque = NumTanque - 1;
		
		for (i = 0; i < *posicaoT; i++){
			if (NumTanque == i){ 
				existe = true;
				break;
			}
			else {
				existe = false; 
			}
		}
		
		if (existe){ 
			cout << " Entre com a quantidade de peixes a ser inserido: ";
			cin >> qtdePeixe;
			c.qtdePeixe = qtdePeixe;
		
			pontTanque[NumTanque].populacao_total = pontTanque[NumTanque].populacao_total + c.qtdePeixe;
		}
		else {
			cout << "Numero do Tanque nao localizado!" << endl;
			return;
		}
		
		
		pontCardume[*posicaoC] = c;
		*posicaoC = (*posicaoC) + 1;
	}

}

// LISTAR CARDUME
void listarCardume(int posicaoCardume, int *posicaoC, struct Cardume *pontCardume){
	if(posicaoCardume == *posicaoC){
		return;
	}
	cout << " == Listar Cardume" << endl;
	cout << " Peixe inserido: " << pontCardume[posicaoCardume].peixe << endl;
	cout << " Tanque inserido: " << pontCardume[posicaoCardume].tanque << endl;
	cout << " Quantidade inserida: " << pontCardume[posicaoCardume].qtdePeixe  << " peixe(s)"<< endl << endl;
	listarCardume(posicaoCardume + 1, posicaoC, pontCardume);
}

// GRAVAÇÃO DOS DADOS INCLUSOS

// TANQUE
void gravarTanque(int *posicaoT, struct Tanque *pontTanque) {
    FILE *arquivo;
    arquivo = fopen("TANQUE.TXT", "w+");
    
    if (arquivo == NULL){
        printf("Problemas na criacao do arquivo\n");
        return;
    }
    
    for(int i = 0; i < *posicaoT; i++) {
        fprintf(arquivo, "\r\n Tanque: ");
        fprintf(arquivo, pontTanque[i].modelo );
        fprintf(arquivo, " \r\n ");
        fprintf(arquivo, "\r\n Finalidade: ");
        fprintf(arquivo, pontTanque[i].finalidade );
        fprintf(arquivo, " \r\n ");
        fprintf(arquivo, "\r\n Populacao Total: ");
        char str[12];
        sprintf(str, "%d", pontTanque[i].populacao_total );
        fprintf(arquivo, str);
        fprintf(arquivo, " \r\n ");
        fprintf(arquivo, "\r\n");
    }
    fclose(arquivo);
    system("cls");
    cout << "\n Arquivo TANQUE.TXT gerado com sucesso!"<< endl;
    
}

// PEIXE
void gravarPeixe(int *posicaoP, struct Peixe *pontPeixe){
    FILE *arquivo;
    arquivo = fopen("PEIXE.TXT", "w+");
    
    if (arquivo == NULL){
        printf("Problemas na criacao do arquivo\n");
        return;
    }
    
    for(int i = 0; i < *posicaoP; i++) {
        fprintf(arquivo, "\r\n Peixe: ");
        fprintf(arquivo, pontPeixe[i].peixe );
        fprintf(arquivo, " \r\n ");
        fprintf(arquivo, "\r\n Descricao: ");
        fprintf(arquivo, pontPeixe[i].descricao );
        fprintf(arquivo, " \r\n ");
        fprintf(arquivo, "\r\n");
    }
    fclose(arquivo);
    system("cls");
    cout << "\n Arquivo PEIXE.TXT gerado com sucesso!"<< endl;
}


// CARDUME
void gravarCardume(int *posicaoC, struct Cardume *pontCardume) {
    FILE *arquivo;
    
    arquivo = fopen("CARDUME.TXT", "w+");
    if (arquivo == NULL){
        printf("Problemas na criacao do arquivo\n");
        return;
    }
    
    for(int i = 0; i < *posicaoC; i++) {
        fprintf(arquivo, "\r\n Peixe: ");
        fprintf(arquivo, pontCardume[i].peixe );
        fprintf(arquivo, " \r\n ");
        fprintf(arquivo, "\r\n Tanque: ");
        fprintf(arquivo, pontCardume[i].tanque );
        fprintf(arquivo, " \r\n ");
        fprintf(arquivo, "\r\n Quantidade de Peixes: ");
        char str[12];
        sprintf(str, "%d", pontCardume[i].qtdePeixe );
        fprintf(arquivo, str);
        fprintf(arquivo, "\r\n");
        fprintf(arquivo, "\r\n");
    }
    fclose(arquivo);
    system("cls");
    cout << "\n Arquivo CARDUME.TXT gerado com sucesso!"<< endl;
    
}



// GRAVANDO EM BINARIO
void gravarDadosBinarios(int *posicaoT, int *posicaoP, int *posicaoC, struct Tanque *pontTanque, struct Peixe *pontPeixe, struct Cardume *pontCardume) {
    FILE *arquivoTanque;
    arquivoTanque = fopen("arqTanque.bin", "wb+");
    
    if (arquivoTanque == NULL){
        printf("Problemas na criacao do arquivo BIN\n");
        return;
    }
    
    fwrite(pontTanque, sizeof(Tanque), *posicaoT, arquivoTanque);
    fclose(arquivoTanque);
     
    //////////////////////////////
    
     FILE *arquivoPeixe;
    arquivoPeixe = fopen("aqrPeixe.bin", "wb+");
    
    if (arquivoPeixe == NULL){
        printf("Problemas na criacao do arquivo BIN \n");
        return;
    }
    
    fwrite(pontPeixe, sizeof(Peixe), *posicaoP, arquivoPeixe); // grava todo o vetor 
    fclose(arquivoPeixe);
    
    //////////////////////////////////////
    
    FILE *arquivoCardume;
    arquivoCardume = fopen("arqCardume.bin", "wb+");
    
    if (arquivoCardume == NULL){
        printf("Problemas na criacao do arquivo BIN\n");
        return;
    }
    
    fwrite(pontCardume, sizeof(Cardume), *posicaoC, arquivoCardume); // grava todo o vetor 
    fclose(arquivoCardume);

    
    cout << "\n Arquivos binarios gerados com sucesso" << endl;
    return;
}


// CARREGAR ARQUIVOS
void carregarArquivos(int *posicaoT, int *posicaoP, int *posicaoC, struct Tanque *pontTanque, struct Peixe *pontPeixe, struct Cardume *pontCardume){
	
	//TANQUE
    FILE *arquivoTanque;
    *posicaoT = 0;
    arquivoTanque = fopen("arqTanque.bin", "rb+");
    
    if(arquivoTanque){ 
    	pontTanque = (struct Tanque *) malloc(*posicaoT * sizeof(struct Tanque));
        fread(pontTanque, sizeof(Tanque), *posicaoT, arquivoTanque);
        
        fclose(arquivoTanque);
    }
    
    
    //PEIXE
    FILE *arquivoPeixe;
    *posicaoP = 0;
    arquivoPeixe = fopen("arqPeixe.bin", "rb+");
    
    if(arquivoPeixe){ 
    	pontPeixe = (struct Peixe *) malloc(*posicaoP * sizeof(struct Peixe));
        fread(pontPeixe, sizeof(Peixe), *posicaoP, arquivoPeixe);
       
        fclose(arquivoPeixe);
    }
    
    
    //CARDUME
    FILE *arquivoCardume;
    *posicaoC = 0;	
    arquivoCardume = fopen("arqCardume.bin", "rb+");
    
    if(arquivoCardume){ 
    	pontCardume = (struct Cardume *) malloc(*posicaoC * sizeof(struct Cardume));
        fread(pontCardume, sizeof(Cardume), *posicaoC, arquivoCardume);
        
        fclose(arquivoCardume);
    }
    
    cout << "\n Arquivos recuperados com sucesso!\n" << endl;
    
}


