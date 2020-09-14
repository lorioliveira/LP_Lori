#include <stdio.h>
#include <cstring>
#include <locale>
#include <iostream>
using namespace std;

// INCLUIR VEICULO 
void incluirVeiculo() {
    Veiculo v;
    int posicaoCadastro = cadastrados[Pos_Veiculo];
    string nome1;
    
    cout << "== Cadastrar\n" << endl;
    cout << "Entre com o modelo do Veiculo: ";
    cin.ignore();
    getline(cin, nome1);
    strcpy(v.modelo, nome1.c_str());
    
    cout << "\nEntre com a marca do Veiculo: ";
    getline(cin, nome1);
    strcpy(v.marca, nome1.c_str());
    
    cout << "\nEntre com o KM inicial do Veiculo: ";
    cin >> v.km_inicial;
    
    cout << "\nEntre com o ano do Veiculo: ";
    cin >> v.ano_veiculo;
    
    vetorVeiculo[posicaoCadastro] = v;
    cadastrados[Pos_Veiculo]++;
    
}

// LISTAR VEICULO
void listarVeiculo(int i){
   if(i == cadastrados[Pos_Veiculo]){
	    return;
	}
    cout << "\n== Listagem de veiculos cadastrados:" << endl;
    cout << " * Veiculo " << i << endl;
	cout << " Modelo: " << vetorVeiculo[i].modelo << endl;
    cout << " Marca: " << vetorVeiculo[i].marca << endl;
    cout << " KM inicial: " << vetorVeiculo[i].km_inicial <<" km"<< endl;
    cout << " Ano: " << vetorVeiculo[i].ano_veiculo << endl;
    listarVeiculo(i + 1);
    
}

// INCLUIR UTILIZACAO 
void incluirUtilizacao(){
	int idVeiculo;
cout << "== Incluir Utilizacao \n" << endl;
	for(int i = 0; i < LINHA; i++){
		for(int j = 0; j < COLUNA; j++){
		//posicao 
		if (j == 0){
			cout << "Digite o veiculo a ser incluso a utilizacao: ";
			cin >> idVeiculo;
			continue;
		}
		else if (j == 1){
			cout << "Veiculo " << i << endl;
			cout << "KM inicial: " << vetorVeiculo[idVeiculo].km_inicial << " km" <<endl;
			continue;
		}
		else if (j == 2) {
			cout << "Inclua o KM utilizado: ";
			cin >> vetorVeiculo[idVeiculo].km_final;
		}
		vetorVeiculo[idVeiculo].km_total = vetorVeiculo[idVeiculo].km_inicial + vetorVeiculo[idVeiculo].km_final;
		cout << "KM Total e : " << vetorVeiculo[idVeiculo].km_total << " km" <<endl;
		}
	
	}
	getchar();
}

// LISTAR UTILIZACAO 
void listarUtilizacao(int i){
	cout << "== Listagem dos veiculos utilizados:" << endl;
	if(i == cadastrados[Pos_Veiculo]){
	    return;
	}
		for(i = 0; i < LINHA; i++){
			cout << " Veiculo "<< i << endl;
			cout << " Modelo: " << vetorVeiculo[i].modelo << endl;
			cout << " Marca: " << vetorVeiculo[i].marca << endl;
			cout << " KM inicial: " << vetorVeiculo[i].km_inicial <<" km"<< endl;
			cout << " KM total: " << vetorVeiculo[i].km_total <<" km"<< endl;
			cout << " Ano:" << vetorVeiculo[i].ano_veiculo << endl << endl;
		}
		getchar();
}

// INCLUIR REVISAO
void incluirRevisao(){
	cout << "== Incluir Revisao dos Veiculos:" << endl;
	int idVeiculo;
	
	for(int i = 0; i < LINHA_R; i++){
		for(int j = 0; j < COLUNA_R; j++){
		//cout << "Posicao ["<< i << "][" << j <<"]"<< endl;
			if (j == 0){
				cout << " Digite o codigo do veiculo a ser acrecentado a utilizacao: ";
				cin >> idVeiculo;
				cout << "\n Veiculo "<< i << " - ";
				if (vetorVeiculo[idVeiculo].km_total >= 15000){
					cout << vetorVeiculo[idVeiculo].km_total << " - Veiculo apto para revisao!" << endl;
					cout << " Digite a data da revisao a seguir:" << endl;
					continue;
				}else{
					cout << " AVISO: Veiculo NAO esta apto para revisao!" << endl;
					getchar();
					vetorVeiculo[idVeiculo].dia = 0;
					vetorVeiculo[idVeiculo].mes = 0;
					vetorVeiculo[idVeiculo].ano = 0;
					break;
				}
			}
			else if (j == 1){
				cout << "Digite o dia: ";
				cin >> vetorVeiculo[idVeiculo].dia;
				continue;
			}
			else if (j == 2) {
				cout << "Digite o mes: ";
				cin >> vetorVeiculo[idVeiculo].mes;
				continue;
			}
			else if (j == 3) {
				cout << "Digite o ano: ";
				cin >> vetorVeiculo[idVeiculo].ano;
			}
		}
	}
}

// LISTAR REVISAO
void listarRevisao(int i){
	cout << "== Listagem de Revisao dos Veiculos:" << endl << endl;
	if(i == cadastrados[Pos_Veiculo]){
        return;
	}
		for(i = 0; i < LINHA_R; i++){
			cout << " Codigo do veiculo ["<< i << "]" <<  endl;
			cout << " Modelo: " << vetorVeiculo[i].modelo << endl;
			cout << " Marca: " << vetorVeiculo[i].marca << endl;
			cout << " Data da revisao: " << vetorVeiculo[i].dia << "/" << vetorVeiculo[i].mes << "/" << vetorVeiculo[i].ano << endl;
			cout << " KM atual: " << vetorVeiculo[i].km_total << " km" <<endl;
			
			if(vetorVeiculo[i].km_total > 15000){
				cout << " Veiculo ja revisado!" << endl << endl;
			}else{
				cout << "= Sugestao: Proxima revisao sera em " << 15000 - vetorVeiculo[i].km_total << " km" << endl << endl;
			}
			 
		}
}

void listarRelatorio(int i){
	cout << "== Relatorio dos veiculos cadastrados:" << endl;
	if(i == cadastrados[Pos_Veiculo]){
        return;
	}
		for(i = 0; i < LINHA_R; i++){
			cout << " Veiculo "<< i <<  endl;
			cout << " Modelo: " << vetorVeiculo[i].modelo << endl;
			cout << " Marca: " << vetorVeiculo[i].marca << endl;
			cout << " KM inicial: " << vetorVeiculo[i].km_inicial <<" km"<< endl;
			cout << " KM total: " << vetorVeiculo[i].km_total <<" km"<< endl;
			cout << " Revisao realizada em " << vetorVeiculo[i].dia << "/" << vetorVeiculo[i].mes << "/" << vetorVeiculo[i].ano << endl;
			cout << " Ano do veiculo: " << vetorVeiculo[i].ano_veiculo << endl << endl;
		}
	
}



