#include <stdio.h>
#include <iostream>
using namespace std;


void cadastrarV1(int *ptr1){
    for(int i=0;i<10;i++){
        cout<< "entre com a posicao: "<< i << endl;
        cin >> *(ptr1 + i);
    }
    system("cls");
}

void cadastrarV2(int *ptr2){
    for(int i=0;i<10;i++){
        cout<< "entre com a posicao: "<< i << endl;
        cin >> *(ptr2 + i);
    }
    system("cls");
}

void somar(int *ptr1, int *ptr2, int *ptr3){
    for(int i=0;i<10;i++){
        *(ptr3 + i) = (ptr1[i] + ptr2[i]);
    }  
    system("cls");
}
void exibirSoma(int *ptr1, int *ptr2, int *ptr3){
    for(int i=0;i<10;i++){
        cout<< "Soma " << ptr1[i] << " + " << ptr2[i] << " = " << ptr3[i]<< endl;
    }
}
int main()
{
	
	int vetor1[10];
	int vetor2[10];
	int resultado[10];
	
	int *ptr1 = &vetor1[0];
	int *ptr2 = &vetor2[0];
	int *ptr3 = &resultado[0];
	
    int opcao=0;
    
    do{
        cout<< "1- cadastrar v1"<< endl;
        cout<< "2- cadastrar v2"<< endl;
        cout<< "3- somar"<< endl;  
        cout<< "4- exibir soma"<< endl;
        cout<< "5- sair"<< endl;
        cin>> opcao;
        switch(opcao){
            case 1: cadastrarV1(ptr1); break;
            case 2: cadastrarV2(ptr2); break;
            case 3: somar(ptr1, ptr2, ptr3);  break;
            case 4: exibirSoma(ptr1, ptr2, ptr3); break;
        }
    }while(opcao<5);    
    return 0;
}


