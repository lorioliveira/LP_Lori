#include <stdio.h>
#include <iostream>
#include <cstring>
#include <locale>
#include "Constante.h"
#include "CadastroVeiculo.h"
using namespace std;

int main()
{
    string nome;
	int opcao;
	do {
		cout << "** Sistema de Veiculos **" << endl;
		cout << CADASTRAR << " - Cadastrar Veiculo" << endl;
		cout << LISTAR    << " - Listar Veiculo" << endl;
		cout << PESQUISAR << " - Pesquisar Veiculo" << endl;
		cout << ALTERAR   << " - Alterar Veiculo" << endl;
		cout << EXCLUIR   << " - Excluir Veiculo" << endl;
		cout << SAIR      << " - Sair"   << endl;
		cout << "\nEntre com Opcao: " << endl;
		cin >> opcao;
		
		switch (opcao)
		{
		case CADASTRAR : cadastrarVeiculo(); 
		              break;
		              
		case LISTAR    : listarVeiculo(0);
		              break;
		              
		case PESQUISAR : cout << "Entre com a placa a ser encontrada:" << endl;
                		cin.ignore();
                		getline(cin, nome);
                		char placa[50];
                		
                		strcpy(placa, nome.c_str());
                		pesquisarVeiculo(0, placa);
                	  break;
                		
        case ALTERAR   : alterarVeiculo(0);
	   				  break;
		case EXCLUIR   :  excluirVeiculo(0);
						break;
		default:
			break;
		}
	} while (opcao >= 1 && opcao < SAIR);
}


