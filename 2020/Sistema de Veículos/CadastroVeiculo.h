#include <iostream>
#include <cstring>
#include <locale>
using namespace std;

// CADASTRO 
void cadastrarVeiculo() {
    Veiculo v;
    int posicaoCadastro = cadastrados[Pos_Veiculo];
    string nome1;
    
    cout << "Cadastrar\n" << endl;
    cout << "Entre com o modelo do Veiculo:" << endl;
    cin.ignore();
    getline(cin, nome1);
    strcpy(v.modelo, nome1.c_str());
    
    cout << "\nEntre com a marca do Veiculo:" << endl;
    getline(cin, nome1);
    strcpy(v.marca, nome1.c_str());
    
    cout << "\nEntre com a placa do Veiculo:" << endl;
    getline(cin, nome1);
    strcpy(v.placa, nome1.c_str());
    
    cout << "Entre com o renavan do Veiculo:" << endl;
    cin >> v.renavan;
    
    cout << "\nEntre com o ano do Veiculo:" << endl;
    cin >> v.ano;
    
    vetorVeiculo[posicaoCadastro] = v;
    cadastrados[Pos_Veiculo]++;
}

// LISTAR
void listarVeiculo(int i){
    if(i == cadastrados[Pos_Veiculo]){
        return;
    }
    cout << "Modelo: "<< vetorVeiculo[i].modelo << endl;
    cout << "Marca: "<< vetorVeiculo[i].marca << endl;
    cout << "Placa: "<< vetorVeiculo[i].placa << endl;
    cout << "Renavam: "<< vetorVeiculo[i].renavan << endl;
    cout << "Ano: "<< vetorVeiculo[i].ano << endl;
    listarVeiculo(i + 1);
    
}

// PESQUISAR
void pesquisarVeiculo(int i, char placa[50]){
    if(i == cadastrados[Pos_Veiculo]){
        cout << "Registro nao encontrado!" << endl;
        return;
    }
    int localizado = strcmp(vetorVeiculo[i].placa,placa);
        if(localizado == 0){
          cout << "Registro encontrado!" << endl << endl;
          return ;
        }else{
            pesquisarVeiculo(i + 1, placa);
        }
}

// ALTERAR
void alterarVeiculo(int i) {
	char placa[50];
	cout << "Alterar" << endl;
	cout << "Entre com a posicao a ser alterada" << endl;
	pesquisarVeiculo(0, placa);
	int p = 0;
	cin >> p;
	cout << "digite o valor do novo renavan: ";
	cin >> vetorVeiculo[i].renavan;
}

// EXCLUIR
void excluirVeiculo(int i){
	char placa[50];
	cout << "Excluir" << endl;
	cout << "Entre com a placa a ser excluida: " << endl;
	pesquisarVeiculo(0, placa);
	int p = 0;
	cin >> p;
	cadastrados[Pos_Veiculo]--;
	cout << " Cadastro excluido!" << endl << endl;
}


