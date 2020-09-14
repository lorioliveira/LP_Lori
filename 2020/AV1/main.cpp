#include <stdio.h>
#include <iostream>
#include <cstring>
#include <locale>
#include <windows.h> 
#include "Constante.h"
#include "CadastroVeiculo.h"
using namespace std;

// NOME: LORENA OLIVEIRA
// Fiz no DevC++ e alguns comandos o compilador online não entende. Pra nao dar erro, achei melhor enviar só os codigos

int main()
{
    string nome;
    int op_sair, opcao;
	do {
		cout << "\n*******************************" << endl;
		cout << " Sistema da Transportadora Ultra Rapido Mogi -  Bem vindo(a)!" << endl;
		cout << "*********************************" << endl;
		cout << " Opcoes do Menu" << endl << endl;
		cout << INCLUIR_VEICULO << " - INCLUIR VEICULO" << endl;
		cout << LISTAR_VEICULO << " - LISTAR VEICULO" << endl;
		cout << INCLUIR_UTILIZACAO   << " - INCLUIR UTILIZACAO" << endl;
		cout << LISTAR_UTILIZACAO   << " - LISTAR UTILIZACAO" << endl;
		cout << INCLUIR_REVISAO << " - INCLUIR REVISAO" << endl;
		cout << LISTAR_REVISAO << " - LISTAR REVISAO" << endl;
		cout << RELATORIO   << " - GERAR RELATORIO" << endl;
		cout << SAIR << " - SAIR\n" << endl;
		cout << "* Entre com a opcao desejada: "  ;
		cin >> opcao;
		
	  switch (opcao){
		case INCLUIR_VEICULO  : incluirVeiculo(); 
		system("cls");
		              break;
		              
		case LISTAR_VEICULO   : listarVeiculo(0);
		              break;
		              
		case INCLUIR_UTILIZACAO: incluirUtilizacao();
				      break;
				      
		case LISTAR_UTILIZACAO : listarUtilizacao(0);
					  break;
		              
		case INCLUIR_REVISAO : incluirRevisao();
					  break;
		              
		case LISTAR_REVISAO: listarRevisao(0);
					  break;
					  
		case RELATORIO  : listarRelatorio(0); 
		              break;			  
		case SAIR:
			cout << "\nDeseja realmente sair do sistema? (1-Sim / 2-Nao):" ;
			cin >> op_sair;
			if(op_sair == 1){
				cout << "Saindo..."<< endl;
				Sleep(2000);			
				return 0;
			}else{
				system("cls");
			}break;
		
		default:
			break;
	 }
	} while (opcao >= 1 && opcao < 1000);
}
