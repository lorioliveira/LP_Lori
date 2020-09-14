#include <stdio.h>
#include <iostream>
#include <cstring>
#include <locale>
#include <windows.h>
#include "Constante.h"
#include "CadastroPeixe.h"
using namespace std;


int main(){
    string nome;
    
    int totalT, totalP, totalC;
   
    int op_sair, opcao;
    
	int posicaoTanque = 0;
    int posicaoPeixe = 0;
    int posicaoCardume = 0;
    
    struct Tanque *pontTanque;
	struct Peixe *pontPeixe;
	struct Cardume *pontCardume;
    
    	cout << "*******************************" << endl;
		cout << "  Pesqueiro " << endl;
	do {
		cout << "*********************************" << endl;
		cout << "  Opcoes do Menu" << endl << endl;
		cout << INICIALIZAR << " - INICIALIZAR" << endl;
		cout << INCLUIR_TANQUE << " - INCLUIR NOVO TANQUE" << endl;
		cout << LISTAR_TANQUE << " - LISTAR TANQUES" << endl;
		cout << INCLUIR_PEIXE << " - INCLUIR TIPO PEIXE" << endl;
		cout << LISTAR_PEIXE << " - LISTAR PEIXE" << endl;
		cout << INCLUIR_CARDUME << " - INCLUIR CARDUME DE PEIXE NO TANQUE" << endl;
		cout << LISTAR_CARDUME << " - LISTAR CARDUMES DE PEIXES ADICIONADOS NO TANQUE" << endl;

		cout << GRAVAR_TANQUE << " - GRAVAR LISTA DE TANQUE" << endl;	
		cout << GRAVAR_PEIXE << " - GRAVAR LISTA DE PEIXE" << endl;
		cout << GRAVAR_CARDUME << " - GRAVAR LISTA DE CARDUME" << endl;
		
		cout << GRAVAR_BINARIO << " - GRAVAR LISTAS EM BINARIO" << endl;
		cout << CARREGAR << " - CARREGAR ARQUIVOS BINARIO" << endl;
		
		cout << SAIR << " - SAIR\n" << endl;
		cout << "* Entre com a opcao desejada: " ;
		cin >> opcao;
		
	  switch (opcao){
	  	
	  	 case INICIALIZAR : 		        
		        cout << "Entre com o tamanho do vetor Tanque: " ;
		        cin >> totalT;
		        pontTanque = (struct Tanque *) malloc(totalT * sizeof(struct Tanque));
		        posicaoTanque = 0;
		        
		        cout << "\nEntre com o tamanho do vetor Peixe: ";
		        cin >> totalP;
		        pontPeixe = (struct Peixe *) malloc(totalP * sizeof(struct Peixe));
		        posicaoPeixe = 0;
		        
		        cout << "\nEntre com o tamanho do vetor Cardume: ";
		        cin >> totalC;
		        pontCardume = (struct Cardume *) malloc(totalC * sizeof(struct Cardume));
		        posicaoCardume = 0;
		        
		        cout << "\nVetores Inicializados!" << endl;
		    break;
	  	
		case INCLUIR_TANQUE: incluirTanque(&posicaoTanque, pontTanque, totalT);
		cout << "\nValor do contador de Tanque: " << posicaoTanque << endl;
		              break;
		              
		case LISTAR_TANQUE : listarTanque(0,&posicaoTanque, pontTanque);
		              break;
		              
		case INCLUIR_PEIXE: incluirPeixe(&posicaoPeixe, pontPeixe, totalP);
		cout << "\nValor do contador de Peixe: " << posicaoPeixe << endl; 
				      break;
				      
		case LISTAR_PEIXE : listarPeixe(0,&posicaoPeixe, pontPeixe);
					  break;
		              
		case INCLUIR_CARDUME: incluirCardume(&posicaoCardume, &posicaoTanque, pontCardume, pontTanque, totalC);
		cout << "\nValor do contador de Cardume: " << posicaoCardume << endl;
					  break;
		              
		case LISTAR_CARDUME: listarCardume(0, &posicaoCardume, pontCardume);
					  break;
					  
		case GRAVAR_TANQUE: gravarTanque(&posicaoTanque, pontTanque);
					  break;
		
		case GRAVAR_PEIXE: gravarPeixe(&posicaoPeixe, pontPeixe);
					  break;			  		  
		
		case GRAVAR_CARDUME: gravarCardume(&posicaoCardume, pontCardume);
					  break;
					  
		case GRAVAR_BINARIO: gravarDadosBinarios(&posicaoTanque, &posicaoPeixe, &posicaoCardume, pontTanque, pontPeixe, pontCardume);
					  break;			  
					  
		case CARREGAR: carregarArquivos(&posicaoTanque, &posicaoPeixe, &posicaoCardume, pontTanque, pontPeixe, pontCardume);
					  break;					  
					  		   
		case SAIR:
			cout << "\nDeseja realmente sair do sistema? (1-Sim / 2-Nao):" ;
			cin >> op_sair;
			if(op_sair == 1){
				cout << "Saindo..."<< endl;
				Sleep(2000);			
				return 0;
			}else{
			}
			break;
		
		default:
			break;
	 }
	} while (opcao >= 0 && opcao < 906);
}


