#include <stdio.h>
#include <cstring>
#include <locale>
#include <iostream>
#include <conio.h>
using namespace std;

// INCLUIR TANQUE 
void incluirTanque(){
	Tanque t;
	int posicaoCadTanque = cadastrados[Pos_Tanque];
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
	
	vetorTanque[posicaoCadTanque] = t;
	cadastrados[Pos_Tanque]++;
}

// LISTAR TANQUE
void listarTanque(int idTanque){
	if(idTanque == cadastrados[Pos_Tanque]){
		return;
	}
		cout << " == Listagem do tanque cadastrado " << endl;
		cout << " Codigo: " << idTanque << endl;
		cout << " Modelo do Tanque: " << vetorTanque[idTanque].modelo << endl;
		cout << " Finalidade: " << vetorTanque[idTanque].finalidade << endl;
		cout << " Populacao total: " << vetorTanque[idTanque].populacao_total << " peixe(s)" << endl << endl;
		listarTanque(idTanque + 1);
}

// INCLUIR PEIXE
void incluirPeixe(){
	Peixe p;
	int posicaoCadPeixe = cadastrados[Pos_Peixe];
	cout << " == Incluir Tipo do Peixe " << endl;
	string nome1;
	
	cout << " Entre com o modelo do peixe: ";
	cin.ignore();
	getline(cin, nome1);
	strcpy(p.peixe, nome1.c_str());
	
	cout << " Entre com a descricao desejada: ";
	getline(cin, nome1);
	strcpy(p.descricao, nome1.c_str());
	
	vetorPeixe[posicaoCadPeixe] = p;
	cadastrados[Pos_Peixe]++;
}

//LISTAR PEIXE
void listarPeixe(int idPeixe){
	if(idPeixe == cadastrados[Pos_Peixe]){
		return;
	}
		cout << " == Listagem do peixe cadastrado " << endl;
		cout << " Codigo " << idPeixe << endl;
		cout << " Peixe: " << vetorPeixe[idPeixe].peixe << endl;
		cout << " Descricao: " << vetorPeixe[idPeixe].descricao << endl;
		listarPeixe(idPeixe + 1);
}

// INCLUIR CARDUME
void incluirCardume(){
	int i, qtdePeixe;
	cout << " == Incluir Cardume no Tanque" << endl;
	Cardume c;
	int posicaoCadCardume = cadastrados[Pos_Cardume];
	string nome1;
	
	cout << " Entre com o nome do peixe a ser inserido:";
	cin.ignore();
	getline(cin, nome1);
	strcpy(c.peixe, nome1.c_str());
	
	cout << " Qual o nome do tanque?: ";
	getline(cin, nome1);
	strcpy(c.tanque, nome1.c_str());
	
	cout << " Entre com a quantidade a ser inserida: ";
	cin >> qtdePeixe;
	
	c.qtdePeixe = qtdePeixe;
	vetorTanque[i].populacao_total = vetorTanque[i].populacao_total + c.qtdePeixe;
	
	vetorCardume[posicaoCadCardume] = c;
	cadastrados[Pos_Cardume]++;	
}

// LISTAR CARDUME
void listarCardume(int idCardume){
	cout << " == Listar Cardume" << endl;
	if(idCardume == cadastrados[Pos_Cardume]){
		return;
	}
	cout << " Peixe inserido: " << vetorCardume[idCardume].peixe << endl;
	cout << " Tanque inserido: " << vetorCardume[idCardume].tanque << endl;
	cout << " Quantidade inserida: " << vetorCardume[idCardume].qtdePeixe << endl;
	listarCardume(idCardume + 1);
}


// Atualizando o codigo com o da aula do dia 27/05 - EXERCICIO DE ARQUIVOS 


// TANQUE
void gravarTanque() {
    FILE *arquivo;
    arquivo = fopen("TANQUE.TXT", "w+");
    if (arquivo == NULL){
        printf("Problemas na criacao do arquivo\n");
        return;
    }
    for(int i = 0; i < cadastrados[Pos_Tanque]; i++) {
        fprintf(arquivo, "\r\n Tanque: ");
        fprintf(arquivo, vetorTanque[i].modelo );
        fprintf(arquivo, " \r\n ");
        fprintf(arquivo, "\r\n Finalidade: ");
        fprintf(arquivo, vetorTanque[i].finalidade );
        fprintf(arquivo, " \r\n ");
        fprintf(arquivo, "\r\n Populacao Total: ");
        char str[12];
        sprintf(str, "%d", vetorTanque[i].populacao_total );
        fprintf(arquivo, str);
        fprintf(arquivo, " \r\n ");
        fprintf(arquivo, "\r\n");
    }
    fclose(arquivo);
    system("cls");
    cout << "\n Arquivo TANQUE.TXT gerado com sucesso!"<< endl;
    
}

// PEIXE
void gravarPeixe(){
    FILE *arquivo;
    arquivo = fopen("PEIXE.TXT", "w+");
    if (arquivo == NULL){
        printf("Problemas na criacao do arquivo\n");
        return;
    }
    for(int i = 0; i < cadastrados[Pos_Peixe]; i++) {
        fprintf(arquivo, "\r\n Peixe: ");
        fprintf(arquivo, vetorPeixe[i].peixe );
        fprintf(arquivo, " \r\n ");
        fprintf(arquivo, "\r\n Descricao: ");
        fprintf(arquivo, vetorPeixe[i].descricao );
        fprintf(arquivo, " \r\n ");
        fprintf(arquivo, "\r\n");
    }
    fclose(arquivo);
    system("cls");
    cout << "\n Arquivo PEIXE.TXT gerado com sucesso!"<< endl;
    
}



// CARDUME
void gravarCardume() {
    FILE *arquivo;
    arquivo = fopen("CARDUME.TXT", "w+");
    if (arquivo == NULL){
        printf("Problemas na criacao do arquivo\n");
        return;
    }
    for(int i = 0; i < cadastrados[Pos_Cardume]; i++) {
        fprintf(arquivo, "\r\n Peixe: ");
        fprintf(arquivo, vetorCardume[i].peixe );
        fprintf(arquivo, " \r\n ");
        fprintf(arquivo, "\r\n Tanque: ");
        fprintf(arquivo, vetorCardume[i].tanque );
        fprintf(arquivo, " \r\n ");
        fprintf(arquivo, "\r\n Quantidade de Peixes: ");
        char str[12];
        sprintf(str, "%d", vetorCardume[i].qtdePeixe );
        fprintf(arquivo, str);
        fprintf(arquivo, "\r\n");
        fprintf(arquivo, "\r\n");
    }
    fclose(arquivo);
    system("cls");
    cout << "\n Arquivo CARDUME.TXT gerado com sucesso!"<< endl;
    
}


// GRAVANDO EM BINARIO

// GRAVANDO EM BINARIO
void gravarDadosBinarios() {
    FILE *arquivoTanque;
    arquivoTanque = fopen("arqTanque.bin", "wb+");
    if (arquivoTanque == NULL){
        printf("Problemas na criacao do arquivo BIN\n");
        return;
    }
    fwrite(&vetorTanque, sizeof(Tanque), cadastrados[Pos_Tanque], arquivoTanque);
    fclose(arquivoTanque);
     
    //////////////////////////////
     FILE *arquivoPeixe;
    arquivoPeixe = fopen("aqrPeixe.bin", "wb+");
    if (arquivoPeixe == NULL){
        printf("Problemas na criacao do arquivo BIN \n");
        return;
    }
    fwrite(&vetorPeixe, sizeof(Peixe), cadastrados[Pos_Peixe], arquivoPeixe); // grava todo o vetor 
    fclose(arquivoPeixe);
    
    //////////////////////////////////////
    FILE *arquivoCardume;
    arquivoCardume = fopen("arqCardume.bin", "wb+");
    if (arquivoCardume == NULL){
        printf("Problemas na criacao do arquivo BIN\n");
        return;
    }
    fwrite(&vetorCardume, sizeof(Cardume), cadastrados[Pos_Cardume], arquivoCardume); // grava todo o vetor 
    fclose(arquivoCardume);

    
    cout << "\n Arquivos binarios gerados com sucesso" << endl;
    return;
}


// CARREGAR ARQUIVOS
void carregarArquivos(){
	//TANQUE
    FILE *arquivoTanque;
    cadastrados[Pos_Tanque] = 0;
    arquivoTanque = fopen("arqTanque.bin", "rb+");
    
    if(arquivoTanque){ 
        fread(&vetorTanque, sizeof(Tanque), TAMANHO, arquivoTanque);
        for(int i = 0; i < TAMANHO; i++) {
            if (vetorTanque[i].modelo[0] != NULL){
                cadastrados[Pos_Tanque]++;
            }
        }
        fclose(arquivoTanque);
    }
    
    
    //PEIXE
    FILE *arquivoPeixe;
    cadastrados[Pos_Peixe] = 0;
    arquivoPeixe = fopen("arqPeixe.bin", "rb+");
    
    if(arquivoPeixe){ 
        fread(&vetorPeixe, sizeof(Peixe), TAMANHO, arquivoPeixe);
        for(int i = 0; i < TAMANHO; i++) {
            if (vetorPeixe[i].peixe[0] != NULL){
                cadastrados[Pos_Peixe]++;
            }
        }
        fclose(arquivoPeixe);
    }
    
    
    //CARDUME
    FILE *arquivoCardume;
    cadastrados[Pos_Cardume] = 0;	
    arquivoCardume = fopen("arqCardume.bin", "rb+");
    
    if(arquivoCardume){ 
        fread(&vetorCardume, sizeof(Cardume), TAMANHO, arquivoCardume);
        for(int i = 0; i < TAMANHO; i++) {
            if (vetorCardume[i].tanque[0] != NULL){
                cadastrados[Pos_Cardume]++;
            }
        }
        fclose(arquivoCardume);
    }
    
    cout << "\n Arquivos recuperados com sucesso!\n" << endl;
    
}

