#include <stdio.h>
#include <iostream>
#include <malloc.h>
 
using namespace std;

void inicializarVet(int *ptr1, int *ptr2, int qtdeAux){
	cout << "Inicializando vetor v1 e v2... OK! " << endl << endl;
	for(int i = 0; i < (3 + qtdeAux); i++){
         *(ptr1 + i) = 0;
         *(ptr2 + i) = 0;
	}
}

void cadastrarV1(int *ptr1, int qtdeAux){
	cout << qtdeAux << endl;
	
    for(int i = 0; i < (3 + qtdeAux); i++){
        cout<< "Entre com a posicao " << i << " do v1: ";
        cin >> *(ptr1 + i);
    }
    system("cls");
}

void exibirV1(int *ptr1, int qtdeAux){
	for(int i = 0; i < (3 + qtdeAux); i++){
        cout<< "Exibindo valores de V1: " <<  ptr1[i] << endl;
    }
}

void cadastrarV2(int *ptr2, int qtdeAux){
	cout << qtdeAux << endl;
    for(int i = 0; i < (3 + qtdeAux); i++){
        cout<< "Entre com a posicao " << i << " do v2: ";
        cin >> *(ptr2 + i);
    }
    system("cls");
}

void exibirV2(int *ptr2, int qtdeAux){
	for(int i = 0; i < (3 + qtdeAux); i++){
         cout<< "Exibindo valores de V2: " <<  ptr2[i] << endl;
    }
}

void soma(int *ptr1, int *ptr2, int *ptr3, int qtdeAux){
    for(int i = 0; i < (3 + qtdeAux); i++){
        *(ptr3 + i) = (ptr1[i] + ptr2[i]);
    }  
    system("cls");
    
    cout << "Soma realizada!!" << endl << endl;
}

void exibirV3(int *ptr1, int *ptr2, int *ptr3, int qtdeAux){
    for(int i = 0; i < (3 + qtdeAux); i++){
        cout << "Exibir V3: " << endl;
		cout << ptr1[i] << " + " << ptr2[i] << " = " << ptr3[i]<< endl;
    }
}

int aumentarValores(int *ptr1, int *ptr2, int *ptr3){
	/* A função realloc aumenta ou diminui o tamanho do vetor dinamicamente. 
    //Ela recebe o ponteiro para o vetor anterior e retorna o novo espaço alocado. */
    
    int qtdeAux;
    
    cout << "Digite quantos elementos quer adicionar aos vetores: ";
    cin >> qtdeAux;
    
    ptr1 = (int *)(realloc(ptr1,(3 + qtdeAux)*sizeof(int)));
    ptr2 = (int *)(realloc(ptr2,(3 + qtdeAux)*sizeof(int)));
    ptr3 = (int *)(realloc(ptr3,(3 + qtdeAux)*sizeof(int)));
    
    if( ptr1 == NULL ) {
        cout  << "\nErro de alocacao de memoria (PTR1)" << endl;
        return 1;
    }
    
    if( ptr2 == NULL ) {
        cout  << "\nErro de alocacao de memoria (PTR2)" << endl;
        return 1;
    }
    
    if( ptr3 == NULL ) {
        cout  << "\nErro de alocacao de memoria (PTR3)" << endl;
        return 1;
    }
    
    return qtdeAux;
}

int sair(int *ptr1, int *ptr2, int *ptr3){
	cout << "Liberando ponteiros e saindo...";
	free(ptr1);
	free(ptr2);
	free(ptr3);
	
	return 0;
}

// ------------------------------------------------------------------------

int main()
{	
	int opcao = 0;
	int qtdeAux;
	
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
	
    
    do{
    	cout << " **** MENU **** "<< endl;
        cout<< " 0- Inicializar vetores v1"<< endl;
        cout<< " 1- Cadastrar v1"<< endl;
        cout<< " 2- Exibir v1"<< endl;
        cout<< " 3- Cadastrar V2"<< endl;  
        cout<< " 4- Exibir V2"<< endl;
        cout<< " 5- Soma " << endl;
        cout<< " 6- Exibir V3"<< endl;
        cout<< " 7- Aumentar Vetores"<< endl;
        cout<< " 8- Sair"<< endl;
        
        cout << "\n Entre com a opcao: ";
        cin>> opcao;
        
        switch(opcao){
        	case 0 : inicializarVet(ptr1, ptr2, qtdeAux); break;
            case 1 : cadastrarV1(ptr1, qtdeAux); break;
            case 2 : exibirV1(ptr1, qtdeAux); break;
            case 3 : cadastrarV2(ptr2, qtdeAux); break;
            case 4 : exibirV2(ptr2, qtdeAux); break;
            case 5 : soma(ptr1, ptr2, ptr3, qtdeAux); break;
            case 6 : exibirV3(ptr1, ptr2, ptr3, qtdeAux); break;
            case 7 : qtdeAux = aumentarValores(ptr1, ptr2, ptr3); break;
            case 8 : sair(ptr1, ptr2, ptr3); break;
            break;
        }
    }while(opcao < 8);
    
    return 0;
}




/*int vetor1[10];
int vetor2[10];
int resultado[10];
void cadastrarV2(){
    for(int i=0;i<10;i++){
        cout<< "entre com a  posição:"<< i << endl;
        cin >> vetor2[i];
    }
}

void somar(){
    for(int i=0;i<10;i++){
        resultado[i]= vetor1[i]+ vetor2[i];
    }  
}
void exibirSoma(){
    for(int i=0;i<10;i++){
        cout<< "entre com a  posição:"<< i << "-" << resultado[i]<< endl;
    }
}

int vetor1[10];
int vetor2[10];
int resultado[10];


*/




