// LP - 15/04/2019
#include <stdio.h>
#include <stdlib.h>

// tipo de retorno, nome da função, lista de parametros (o que vc vai receber que vai ser necessario nessa função)
// paramentros (tipo e nome)
float calculaAreaQuadrado(float lado) {
      float area;
      
      area = lado * lado;
      
      return area;
}

void calculaAreaQuadrado2(float* lado, float* area) {
     // multiplicar o conteudo, e não o endereço
     // pra calcular o conteudo da posição de memoria apontada por ele, usa o asterisco (*)
     *lado = 4.0;
     *area = (*lado) * (*lado);
}

void funcao1(int n) {
     int i;
     for(i = n; i >= 0; i--)
           printf("%i ");
}

// função recursiva
// quando eu paro de chamar a mim mesmo (condição de parada), paro de empilhar
// o que fazer (mostrar na tela)
// decrementar (menos 1)
// chamar a função de novo (ele mesmo)
void funcao2(int n) {
     if(n == -1)
          return;
     printf("%i ", n);
     funcao2(--n);
}

// recursão ao contrario
void funcao3(int n) {
     if(n == -1)
          return;
     funcao3(n-1);
     printf("%i ", n);
}

int main() {
    float area, lado;
    
    lado = 2.0;
    
    // primeira forma de fazer
    area = calculaAreaQuadrado(lado);
    printf("Valor de quadrado: %.2f\n", area);
    // outra forma de fazer, chamar a função direto
    //area = calculaAreaQuadrado(lado);
    printf("Valor de quadrado: %.2f\n", calculaAreaQuadrado(lado));
    // outra forma de fazer, passar o valor direto para a função
    area = calculaAreaQuadrado(2.0);
    printf("Valor de quadrado: %.2f\n", area);
    // outra forma de fazer, por endereço
    // & acessa o endereço da variavel
    // não tem retorno, tudo é alterado na função calculaAreaQuadrado2 por endereço.
    calculaAreaQuadrado2(&lado, &area);
    printf("Valor de quadrado: %.2f\n", area);
    
    // imprimi de 10 ao 0
    funcao1(10);
    printf("\n");
    // recursão
    funcao2(10);
    printf("\n");
    // recursao ao contrario
    funcao3(10);
    printf("\n");
 
    system("PAUSE");
}// main
