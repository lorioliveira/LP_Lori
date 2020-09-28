#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// LP 2019 - MENU COM CÁLCULOS DE MÉDIA, FATORIAL, FIBONACCI, DESCONTOS, ETC.

float mediaFatec (float P1, float T1, float P2, float T2){
      float Media1, Media2, MediaFinal, Recuperacao;
      
      // Media do Primeiro Semestre
      Media1 = ((P1*0.7)+(T1*0.3)/100);
      printf("Media do Primeiro Semestre: %.1f", Media1);
      // Media do Segundo Semestre
      Media2 = ((P2*0.6)+(T2*0.4)/100);
      printf("Media do Segundo Semestre: %.1f \n", Media2);
      
      // Media Final
	    MediaFinal = ((Media1+Media2)/2);
	    
	    printf("\nMedia Final: %.1f", MediaFinal);
	    
	    if (MediaFinal >= 6)
	         printf("\n\nAprovado com a nota %.1f", MediaFinal);
	    if ((MediaFinal > 2) && (MediaFinal < 6)){
	         printf("\n\nRecuperação");
	         printf("\nDigite a Prova de Recuperacao:");
	         scanf("%f", &Recuperacao);
	         
	         MediaFinal = (MediaFinal+Recuperacao)/2;
	         
	         if (MediaFinal >= 6)
	             printf("\nAprovado com a nota %.1f", MediaFinal);
	         if (MediaFinal < 6)
	             printf("\nReprovado com a nota %.1f", MediaFinal);
	    }
	    if (MediaFinal<2)
	       printf("\nReprovado com a nota %.1f", MediaFinal);
}// mediaFatec

int main () {
    char caracter, confirma;
    bool continua;
    
    continua = true;
    
    while (continua){
	    printf("Selecione a opçao do Menu:");
	    printf("\n\na)Media FATEC (if)");
	    printf("\nb)Media FATEC (if/else)");
	    printf("\nc)Ajuste Preco (if/else)");
	    printf("\nd)Ajuste Preco (switch)");
	    printf("\ne)Fatorial (do/while)");
	    printf("\nf)Fatorial (while)");
	    printf("\ng)Fatorial (for)");
	    printf("\nh)Fibonacci (do/while)");
	    printf("\ni)Fibonacci (while)");
	    printf("\nj)Fibonacci (for)");
	    printf("\nk)P.A. (Progressão Aritimetica)");   // Progressão Aritimética
	    printf("\nl)P.G. (Progressão Geometrica)");   // Progressão Geométrica
	    printf("\nm)Seno");
	    printf("\nn)Cosseno");
	    printf("\no)Tangente");
	    printf("\np)Lancamento de Dado Aleatorio");
	    
	    printf("\nq)Sair\n");
	    
	    scanf("%c", &caracter);
	    
	    switch (caracter){
	       case 'a':
	       case 'A':
	            printf("*** Media FATEC (if)***");
			    float P1, T1, P2, T2, Media1, Media2, MediaFinal, Recuperacao;
			    
			    // Prova 1
			    printf("\nDigite a Prova 1 do aluno: ");
			    scanf("%f", &P1);
			    // Trabalho 1
			    printf("Digite o Trabalho 1 do aluno: ");
			    scanf("%f", &T1);
			    
			    // Prova 2
			    printf("\n\nDigite a Prova 2 do aluno: ");
			    scanf("%f", &P2);
			    // Trabalho 2
			    printf("Digite o Trabalho 2 do aluno: ");
			    scanf("%f", &T2);
			    
			    
			    
			    getchar();
			    //getchar();
			    
	       		// Sair do MENU
	       		getchar();
			    printf("\nDeseja voltar para o MENU S/N?");
			    scanf("%c", &confirma);
			    if(confirma == 'n' || confirma == 'N')
			    	continua = false;
			    else {
			    	system("cls");
			    	getchar();
				}
			    
	            break;
	            //////////////
	            //////////////
	       case 'b':
	       case 'B':
	            printf("*** Media FATEC (if/else) ***");
			    //float P1, T1, P2, T2, Media1, Media2, MediaFinal, Recuperacao;
			    
			    // Prova 1
			    printf("\nDigite a Prova 1 do aluno: ");
			    scanf("%f", &P1);
			    // Trabalho 1
			    printf("Digite o Trabalho 1 do aluno: ");
			    scanf("%f", &T1);
			    // Media do Primeiro Semestre
			    Media1 = ((P1*0.7)+(T1*0.3)/100);
			    printf("Media do Primeiro Semestre: %.1f", Media1);
			    
			    // Prova 2
			    printf("\n\nDigite a Prova 2 do aluno: ");
			    scanf("%f", &P2);
			    // Trabalho 2
			    printf("Digite o Trabalho 2 do aluno: ");
			    scanf("%f", &T2);
			    // Media do Segundo Semestre
			    Media2 = ((P2*0.6)+(T2*0.4)/100);
			    printf("Media do Segundo Semestre: %.1f \n", Media2);
			    
			    // Media Final
			    MediaFinal = ((Media1+Media2)/2);
			    
			    printf("\nMedia Final: %.1f", MediaFinal);
			    
			    if (MediaFinal >= 6)
			         printf("\n\nAprovado com a nota %.1f", MediaFinal);
			    else if (MediaFinal >=2){
			         printf("\n\nRecuperação");
			         printf("\nDigite a Prova de Recuperacao:");
			         scanf("%f", &Recuperacao);
			         
			         MediaFinal = (MediaFinal+Recuperacao)/2;
			         
			         if (MediaFinal >= 6)
			             printf("\nAprovado com a nota %.1f", MediaFinal);
			         else
			             printf("\nReprovado com a nota %.1f", MediaFinal);
			    }
			    else
			       printf("\nReprovado com a nota %.1f", MediaFinal);
			    
			    getchar();
			    getchar();
			    
	       		// Sair do MENU
	       		getchar();
			    printf("\nDeseja voltar para o MENU S/N?");
			    scanf("%c", &confirma);
			    if(confirma == 'n' || confirma == 'N')
			    	continua = false;
			    else {
			    	system("cls");
			    	getchar();
				}
			    	
	            break;
	            //////////////
	            //////////////
	       case 'c':
	       case 'C':
	            printf("*** Ajuste Preco (if/else) ***");
	            float fPreco, fDesconto, fResultado;
	    
			    printf("\nDigite um Preco para o desconto:\n");
			    scanf("%f", &fPreco);
			    printf("Selecione o desconto:");
			    printf("\na) 5%");
			    printf("\nb) 8%");
			    printf("\nc) 10%");
			    printf("\nd) 15%");
			    printf("\ne) 30%\n");
			    
			    scanf("%f", &fDesconto);
			    
			    if ((fDesconto != 5)&&(fDesconto != 8)&&(fDesconto != 10)&&(fDesconto != 15)&&(fDesconto != 30))
			    	printf("Desconto selecionado nao esta na lista fornecida!");
			    else{
			    	fResultado = (fPreco*fDesconto)/100;
			    	printf("O valor do Desconto foi: R$ %.1f", fResultado);
			    }
			    
			    // Sair do MENU
	       		getchar();
			    printf("\nDeseja voltar para o MENU S/N?");
			    scanf("%c", &confirma);
			    if(confirma == 'n' || confirma == 'N')
			    	continua = false;
			    else {
			    	system("cls");
			    	getchar();
				}
				
	            break;
	            //////////////
	            //////////////
	       case 'd':
	       case 'D':
	            printf("*** Ajuste Preco (switch) ***");
	            int Desconto;
			    float Preco, Resultado;
			    
			    printf("\nDigite um Preco para o desconto:\n");
			    scanf("%f", &Preco);
			    printf("Selecione o desconto:");
			    printf("\n5%");
			    printf("\n8%");
			    printf("\n10%");
			    printf("\n15%");
			    printf("\n30%\n");
			    
			    scanf("%d", &Desconto);
			    
			    switch (Desconto){
			       case 5:
			            printf("Aplicando desconto de 5%...");
			            Resultado = (Preco*Desconto)/100;
			    		printf("\nO valor do Desconto foi: R$ %.1f", Resultado);
			            break;
			       case 8:
			            printf("Aplicando desconto de 8%...");
			            Resultado = (Preco*Desconto)/100;
			    		printf("\nO valor do Desconto foi: R$ %.1f", Resultado);
			            break;
			       case 10:
			            printf("Aplicando desconto de 10%...");
			            Resultado = (Preco*Desconto)/100;
			    		printf("\nO valor do Desconto foi: R$ %.1f", Resultado);
			            break;
			       case 15:
			            printf("Aplicando desconto de 15%...");
			            Resultado = (Preco*Desconto)/100;
			    		printf("\nO valor do Desconto foi: R$ %.1f", Resultado);
			            break;
			       case 30:
			            printf("Aplicando desconto de 30%...");
			            Resultado = (Preco*Desconto)/100;
			    		printf("\nO valor do Desconto foi: R$ %.1f", Resultado);
			            break;
			       default:
			            printf("Opcao invalida! \nDesconto selecionado nao esta na lista fornecida!"); 
			    }
				// Sair do MENU
	       		getchar();
			    printf("\nDeseja voltar para o MENU S/N?");
			    scanf("%c", &confirma);
			    if(confirma == 'n' || confirma == 'N')
			    	continua = false;
			    else {
			    	system("cls");
			    	getchar();
				}
				
	            break;
	            //////////////
	            //////////////
	       case 'e':
	       case 'E':
	            printf("*** Fatorial (do/while) ***");
	            int fatorial, resultado, aux;
	            
	            printf("\nDigite um numero inteiro para o Fatorial\n");
	            scanf("%i", &fatorial);
	            
	            aux = 1;
	            resultado = fatorial;              // resultado recebe o numero digitado para poder fazer o fatorial
	            // N! = N-1 * N-2 * ... N!
	            do {
	               resultado *= (fatorial - aux);  // resultado recebe ele mesmo e multiplica o numero digitado menos 1
	               aux++;
	            }while(aux != fatorial);           // auxiliar é diferente do numero digitado?
	            
	            printf("O fatorial de %i eh %i\n", fatorial, resultado);
	            
	            // Sair do MENU
	       		getchar();
			    printf("\nDeseja voltar para o MENU S/N?");
			    scanf("%c", &confirma);
			    if(confirma == 'n' || confirma == 'N')
			    	continua = false;
			    else {
			    	system("cls");
			    	getchar();
				}
				
	            break;
	            //////////////
	            //////////////
	       case 'f':
	       case 'F':
	            printf("*** Fatorial (while) ***");
	            //int fatorial, resultado, aux;
	            
	            printf("\nDigite um numero inteiro para o Fatorial\n");
	            scanf("%i", &fatorial);
	            
	            aux = 1;
	            resultado = fatorial;              // resultado recebe o numero digitado para poder fazer o fatorial
	            // N! = N-1 * N-2 * ... N!          
	            while(aux != fatorial){             // auxiliar é diferente do numero digitado?
	                resultado *= (fatorial - aux);  // resultado recebe ele mesmo e multiplica o numero digitado menos 1
	                aux++;
	            }
	            
	            printf("O fatorial de %i eh %i\n", fatorial, resultado);
	            
	            // Sair do MENU
	       		getchar();
			    printf("\nDeseja voltar para o MENU S/N?");
			    scanf("%c", &confirma);
			    if(confirma == 'n' || confirma == 'N')
			    	continua = false;
			    else {
			    	system("cls");
			    	getchar();
				}
				
	            break;
	            //////////////
	            //////////////
	       case 'g':
	       case 'G':
	            printf("*** Fatorial (for) ***");
	            //int fatorial, resultado, aux;
	            
	            printf("\nDigite um numero inteiro para o Fatorial\n");
	            scanf("%i", &fatorial);
	            
	            resultado = fatorial;              // resultado recebe o numero digitado para poder fazer o fatorial
	            // N! = N-1 * N-2 * ... N!          
	            for(aux=1;aux != fatorial;aux++){   // auxiliar é diferente do numero digitado?
	                resultado *= (fatorial - aux);  // resultado recebe ele mesmo e multiplica o numero digitado menos 1
	            }
	            
	            printf("O fatorial de %i eh %i\n", fatorial, resultado);
	            
	            // Sair do MENU
	       		getchar();
			    printf("\nDeseja voltar para o MENU S/N?");
			    scanf("%c", &confirma);
			    if(confirma == 'n' || confirma == 'N')
			    	continua = false;
			    else {
			    	system("cls");
			    	getchar();
				}
				
	            break;
	            //////////////
	            //////////////
	       case 'h':
	       case 'H':
	            printf("*** Fibonacci (do/while) ***");
	            int anterior, atual, proximo, fibonacci;
	            
	            printf("\nDigite um numero inteiro pra o Fibonacci:\n");
	            scanf("%i", &fibonacci);
	            
	            anterior = 1;
	            atual = 1;
	            printf("%i ", atual);
	            
	            do {
	                printf("%i ", atual);
	                proximo = anterior + atual; // Proximo recebe a soma do anterior mais atual.
	                anterior = atual;           // anterior recebe atual.
	                atual = proximo;            // atual recebe o proximo
	            }while(atual <= fibonacci);      // o numero atual é menor ou igual ao numero que digitou?
	            
	            // Sair do MENU
	       		getchar();
			    printf("\nDeseja voltar para o MENU S/N?");
			    scanf("%c", &confirma);
			    if(confirma == 'n' || confirma == 'N')
			    	continua = false;
			    else {
			    	system("cls");
			    	getchar();
				}
				
	            break;
	            //////////////
	            //////////////
	       case 'i':
	       case 'I':
	            printf("*** Fibonacci (while) ***");
	            //int anterior, atual, proximo, fibonacci;
	            
	            printf("\nDigite um numero inteiro pra o Fibonacci:\n");
	            scanf("%i", &fibonacci);
	            
	            anterior = 1;
	            atual = 1;
	            printf("%i ", atual);
	            
	            while(fibonacci >= atual){       // o numero digitado é maior ou igual ao numero atual?
	                printf("%i ", atual);
	                proximo = anterior + atual; // Proximo recebe a soma do anterior mais atual.
	                anterior = atual;           // anterior recebe atual.
	                atual = proximo;            // atual recebe o proximo
	            }
	            
	            // Sair do MENU
	       		getchar();
			    printf("\nDeseja voltar para o MENU S/N?");
			    scanf("%c", &confirma);
			    if(confirma == 'n' || confirma == 'N')
			    	continua = false;
			    else {
			    	system("cls");
			    	getchar();
				}
				
	            break;
	            //////////////
	            //////////////
	       case 'j':
	       case 'J':
	            printf("*** Fibonacci (for) ***");
	            //int anterior, atual, proximo, fibonacci;
	            
	            printf("\nDigite um numero inteiro pra o Fibonacci:\n");
	            scanf("%i", &fibonacci);
	            
	            anterior = 1;
	            atual = 1;
	            printf("%i ", atual);
	            
	            for(;fibonacci >= atual;){       // o numero digitado é maior ou igual ao numero atual?
	                printf("%i ", atual);
	                proximo = anterior + atual;  // Proximo recebe a soma do anterior mais atual.
	                anterior = atual;            // anterior recebe atual.
	                atual = proximo;             // atual recebe o proximo
	            }
	            
	            // Sair do MENU
	       		getchar();
			    printf("\nDeseja voltar para o MENU S/N?");
			    scanf("%c", &confirma);
			    if(confirma == 'n' || confirma == 'N')
			    	continua = false;
			    else {
			    	system("cls");
			    	getchar();
				}
				
	            break;
	            //////////////
	            //////////////
	       case 'k':
	       case 'K':
	            printf("*** P.A. ***");
	            
	            // Sair do MENU
	       		getchar();
			    printf("\nDeseja voltar para o MENU S/N?");
			    scanf("%c", &confirma);
			    if(confirma == 'n' || confirma == 'N')
			    	continua = false;
			    else {
			    	system("cls");
			    	getchar();
				}
				
	            break;
	            //////////////
	            //////////////
	       case 'l':
	       case 'L':
	            printf("*** P.G. ***");
	            
	            // Sair do MENU
	       		getchar();
			    printf("\nDeseja voltar para o MENU S/N?");
			    scanf("%c", &confirma);
			    if(confirma == 'n' || confirma == 'N')
			    	continua = false;
			    else {
			    	system("cls");
			    	getchar();
				}
				
	            break;
	            //////////////
	            //////////////
           case 'm':
	       case 'M':
	            printf("*** Seno ***");
	            float seno;
	            
	            printf("\nDigite um valor para o Seno (Valor em Radianos)\n");
	            scanf("%f", &seno);
	            printf("O valor do Seno eh: %f\n", sin(seno));
	            
	            // Sair do MENU
	       		getchar();
			    printf("\nDeseja voltar para o MENU S/N?");
			    scanf("%c", &confirma);
			    if(confirma == 'n' || confirma == 'N')
			    	continua = false;
			    else {
			    	system("cls");
			    	getchar();
				}
				
	            break;
	            //////////////
	            //////////////
           case 'n':
	       case 'N':
	            printf("*** Cosseno ***");
	            float cosseno;
	            
	            printf("\nDigite um valor para o Cosseno (Valor em Radianos)\n");
	            scanf("%f", &cosseno);
	            printf("O valor do Cosseno eh: %f\n", cos(cosseno));
	            
	            // Sair do MENU
	       		getchar();
			    printf("\nDeseja voltar para o MENU S/N?");
			    scanf("%c", &confirma);
			    if(confirma == 'n' || confirma == 'N')
			    	continua = false;
			    else {
			    	system("cls");
			    	getchar();
				}
				
	            break;
	            //////////////
	            //////////////
           case 'o':
	       case 'O':
	            printf("*** Tangente ***");
	            float tangente;
	            
	            printf("\nDigite um valor para o Tangente (Valor em Radianos)\n");
	            scanf("%f", &tangente);
	            printf("O valor do Tangente eh: %f\n", tan(tangente));
	            
	            // Sair do MENU
	       		getchar();
			    printf("\nDeseja voltar para o MENU S/N?");
			    scanf("%c", &confirma);
			    if(confirma == 'n' || confirma == 'N')
			    	continua = false;
			    else {
			    	system("cls");
			    	getchar();
				}
				
	            break;
	            //////////////
	            //////////////
           case 'p':
	       case 'P':
	            printf("*** Lancamento de Dado Aleatorio ***");
	            int i, qtde;
	            
	            printf("\nDigite a quantidade de vezes que voce gostaria de jogar o dado:\n");
	            scanf("%i", &qtde);
	            
	            srand(time(NULL));
	            for(i = 0; i < qtde; i++){
                      printf("%i\n", rand());
                }
	            
	            // Sair do MENU
	       		getchar();
			    printf("\nDeseja voltar para o MENU S/N?");
			    scanf("%c", &confirma);
			    if(confirma == 'n' || confirma == 'N')
			    	continua = false;
			    else {
			    	system("cls");
			    	getchar();
				}
				
	            break;
	            //////////////
	            //////////////
	       case 'q':
	       case 'Q':
	       		// Sair do MENU
	       		getchar();
			    printf("\nRealmente deseja sair do MENU S/N?");
			    scanf("%c", &confirma);
			    if(confirma == 's' || confirma == 'S')
			    	continua = false;
			    else {
			    	system("cls");
			    	getchar();
				}
			    	
	            break;
	            //////////////
	            //////////////
	       default:
	       		getchar();
	            printf("Opcao invalida!!!");
	            getchar();
	            system("cls");
	    }// switch
	}// while
    system("PAUSE");
}
