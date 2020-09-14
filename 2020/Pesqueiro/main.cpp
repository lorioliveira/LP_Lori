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
    int op_sair, opcao;
	do {
		cout << "*******************************" << endl;
		cout << "Pesqueiro" << endl;
		cout << "*********************************" << endl;
		cout << " Opcoes do Menu" << endl << endl;
		cout << INCLUIR_TANQUE << " - INCLUIR NOVO TANQUE" << endl;
		cout << LISTAR_TANQUE << " - LISTAR TANQUES" << endl;
		cout << INCLUIR_PEIXE << " - INCLUIR TIPO PEIXE" << endl;
		cout << LISTAR_PEIXE << " - LISTAR PEIXE" << endl;
		cout << INCLUIR_CARDUME << " - INCLUIR CARDUME DE PEIXE NO TANQUE" << endl;
		cout << LISTAR_CARDUME << " - LISTAR CARDUMES DE PEIXES ADICIONADOS NO TANQUE" << endl;
		// 27/05
		cout << GRAVAR_TANQUE << " - GRAVAR LISTA DE TANQUE" << endl;	
		cout << GRAVAR_PEIXE << " - GRAVAR LISTA DE PEIXE" << endl;
		cout << GRAVAR_CARDUME << " - GRAVAR LISTA DE CARDUME" << endl;
		
		cout << GRAVAR_BINARIO << " - GRAVAR LISTAS EM BINARIO" << endl;
		cout << CARREGAR << " - CARREGAR ARQUIVOS BINARIO" << endl;
		
		cout << SAIR << " - SAIR\n" << endl;
		cout << "* Entre com a opcao desejada: " ;
		cin >> opcao;
		
	  switch (opcao){
		case INCLUIR_TANQUE: incluirTanque();
		//system("cls");
		              break;
		              
		case LISTAR_TANQUE : listarTanque(0);
		              break;
		              
		case INCLUIR_PEIXE: incluirPeixe(); 
		//system("cls");
				      break;
				      
		case LISTAR_PEIXE : listarPeixe(0);
					  break;
		              
		case INCLUIR_CARDUME: incluirCardume();
					  break;
		              
		case LISTAR_CARDUME: listarCardume(0);
					  break;
					  
		case GRAVAR_TANQUE: gravarTanque();
					  break;
		
		case GRAVAR_PEIXE: gravarPeixe();
					  break;			  		  
		
		case GRAVAR_CARDUME: gravarCardume();
					  break;
					  
		case GRAVAR_BINARIO: gravarDadosBinarios();
					  break;			  
					  
		case CARREGAR: carregarArquivos();
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

