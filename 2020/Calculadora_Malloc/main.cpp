#include <stdio.h>
#include <iostream>
#include <malloc.h>
using namespace std;


void cadastrarV1(int *ptr1){
    for(int i = 0; i < 3; i++){
        cout<< "entre com a posicao: "<< i << endl;
        cin >> *(ptr1 + i);
    }
    system("cls");
}

void cadastrarV2(int *ptr2){
    for(int i = 0; i < 3; i++){
        cout<< "entre com a posicao "<< i << ": " << endl;
        cin >> *(ptr2 + i);
    }
    system("cls");
}

void somar(int *ptr1, int *ptr2, int *ptr3){
    for(int i = 0; i < 3; i++){
        *(ptr3 + i) = (ptr1[i] + ptr2[i]);
    }  
    system("cls");
}
void exibirSoma(int *ptr1, int *ptr2, int *ptr3){
    for(int i = 0; i< 3; i++){
        cout<< "Soma: " << ptr1[i] << " + " << ptr2[i] << " = " << ptr3[i]<< endl;
    }
}

int sair(int *ptr1, int *ptr2, int *ptr3){
	cout << "Fazendo a limpeza dos ponteiros e saindo...";
	free(ptr1);
	free(ptr2);
	free(ptr3);
	
	return 0;
}

// ---------------------------------------------------------------------------

int main()
{	
	int *ptr1 = (int *)(malloc(3*sizeof(int)));
	int *ptr2 = (int *)(malloc(3*sizeof(int)));
	int *ptr3 = (int *)(malloc(3*sizeof(int)));
	
	if( ptr1 == NULL ) {
        cout  << "\nErro de alocacao de memoria" << endl;
        return 1;
    }
    
    if( ptr2 == NULL ) {
        cout  << "\nErro de alocacao de memoria" << endl;
        return 1;
    }
    
    if( ptr3 == NULL ) {
        cout  << "\nErro de alocacao de memoria" << endl;
        return 1;
    }
	
    int opcao=0;
    
    do{
        cout<< "\n1- Cadastrar v1"<< endl;
        cout<< "2- Cadastrar v2"<< endl;
        cout<< "3- Somar"<< endl;  
        cout<< "4- Exibir soma"<< endl;
        cout<< "5- Sair"<< endl; 
        cin>> opcao;
        switch(opcao){
            case 1: cadastrarV1(ptr1); break;
            case 2: cadastrarV2(ptr2); break;
            case 3: somar(ptr1, ptr2, ptr3);  break;
            case 4: exibirSoma(ptr1, ptr2, ptr3); break;
        	case 5: sair(ptr1, ptr2, ptr3); break;
        }
    }while(opcao < 5);    
    return 0;
}



