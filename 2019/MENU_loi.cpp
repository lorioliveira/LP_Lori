#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
	// MEU MENU - Completo
// Nome: Lorena Oliveira
// Ano: 2019
// Linguagem de Programação

int main () {
    //int inteiro;
    char opcao, resposta;
    bool continuar;
    
    continuar = true;
	while(continuar){
	
    printf("\tSelecione uma opcao do Menu:");
    printf("\n\na) Media FATEC (if)");
    printf("\nb) Media FATEC (if/else)");
    printf("\nc) Ajuste Preco (if/else)");
    printf("\nd) Ajuste Preco (switch)");
   // Acrescentando na aula seguinte : Fatorial e Fibonacci (25/02)
   printf("\ne) Fatorial (do/while)");
   printf("\nf) Fatorial (while)");
   printf("\ng) Fatorial (for)");
   printf("\nh) Fibonacci (do/while)");
   printf("\ni) Fibonacci (while)");
   printf("\nj) Fibonacci (for)");
   // Segundo módulo: P.A e P.G, da estutura que quiser
   printf("\nk) P.A (Progressao Aritmetica)");
   printf("\nl) P.G (Progressao Geometrica)");
   // Aula dia 18/03
	printf("\nm)Seno");
	printf("\nn)Cosseno");
	printf("\no)Tangente");
	printf("\np)Lancamento de Dado Aleatorio");
	    
   printf("\nq) Sair\n\n");
   printf("Opcao: ");
    
    //scanf("%d", &inteiro); -- alterou por causa da forma de opção ao escolher as alternativas (:
    scanf("%c", &opcao);
    
    // COMEÇO DO SWITCH ------------------------------------------
    
    
    switch (opcao){
       case 'a':
    	case 'A':
            printf("\t Media FATEC (usando if)");
            // Media FATEC
		    float P1, T1, P2, T2, Media1, Media2, MediaFinal, Recuperacao;
		    
		    printf("\t Notas do Primeiro Semestre:");
		    // Prova 1
		    printf("\n\nDigite a Prova 1 do aluno: ");
		    scanf("%f", &P1);
		    // Trabalho 1
		    printf("Digite a Trabalho 1 do aluno: ");
		    scanf("%f", &T1);
		    // Media do Primeiro Semestre
		    Media1 = ((P1*0.7)+(T1*0.3)/100);
		    printf("Media do Primeiro Semestre: %.1f", Media1);
		    
		    printf("\t Notas do Segundo Semestre:");
		    // Prova 2
		    printf("\n\nDigite a Prova 2 do aluno: ");
		    scanf("%f", &P2);
		    // Trabalho 2
		    printf("Digite a Trabalho 2 do aluno: ");
		    scanf("%f", &T2);
		    // Media do Segundo Semestre
		    Media2 = ((P2*0.6)+(T2*0.4)/100);
		    printf("Media do Segundo Semestre: %.1f \n", Media2);
		    
		    
		    // Media Final
		    MediaFinal = ((Media1+Media2)/2);
		    printf("\nSua media Final e: %.1f", MediaFinal);
		    
		    
		    if (MediaFinal >= 6)
		         printf("\n\nNota %.1f = Aprovado!", MediaFinal);
		    if ((MediaFinal > 2) && (MediaFinal < 6)){
		         printf("\n\t Vai para Recuperacao.");
		         printf("\nDigite sua nota da Prova de Recuperacao:");
		         scanf("%f", &Recuperacao);
		         
		         MediaFinal = (MediaFinal+Recuperacao)/2;
		         
		         if (MediaFinal >= 6)
		             printf("\nNota %.1f = Aprovado!", MediaFinal);
		         if (MediaFinal < 6)
		             printf("\nNota %.1f = Reprovado!", MediaFinal);
		    }
		    if (MediaFinal<2)
		       printf("\nNota %.1f, foi reprovado direto!", MediaFinal);
		    
		    
		   // Voltar para o Menu
		    printf("\nDeseja voltar para as opcoes do Menu? (S/N)");
		    scanf("%c", &resposta);
		    if (resposta == 'n'|| resposta == 'N')
		    	continuar = false;
		    else {
		    	getchar();
				system("cls");
			}
			getchar();
            break;
            
       /////////////////////////////////////////////////////////////     
            
       case 'b':
       	case 'B':
            printf("\tMedia FATEC (usando if/else)");
            // Media FATEC
		    
		    // Prova 1
		    printf("\n\t Notas do Primeiro Semestre:");
		    printf("\n\nDigite a nota da Prova 1 do aluno: ");
		    scanf("%f", &P1);
		    // Trabalho 1
		    printf("\nDigite a nota do Trabalho 1 do aluno: ");
		    scanf("%f", &T1);
		    // Media do Primeiro Semestre
		    Media1 = ((P1*0.7)+(T1*0.3)/100);
		    printf("Media do 1 Semestre: %.1f", Media1);
		    
		    // Prova 2
		     printf("\n\t Notas do Segundo Semestre:");
		    printf("\n\nDigite a nota da Prova 2 do aluno: ");
		    scanf("%f", &P2);
		    // Trabalho 2
		    printf("\nDigite a nota do Trabalho 2 do aluno: ");
		    scanf("%f", &T2);
		    // Media do Segundo Semestre
		    Media2 = ((P2*0.6)+(T2*0.4)/100);
		    printf("Media do 2 Semestre: %.1f \n", Media2);
		    
		    // Media Final
		    MediaFinal = ((Media1+Media2)/2);
		    
		    printf("\nA sua media final e: %.1f", MediaFinal);
		    
		    if (MediaFinal >= 6)
		         printf("\n\nNota %.1f = Aprovado!", MediaFinal);
		    else if (MediaFinal >=2){
		         printf("\n\n\tVai para Recuperacao:");
		         printf("\nDigite a sua nota da prova de Recuperacao:");
		         scanf("%f", &Recuperacao);
		         
		         MediaFinal = (MediaFinal+Recuperacao)/2;
		         
		         if (MediaFinal >= 6)
		             printf("\nNota %.1f !! Aprovado!! ", MediaFinal);
		         else
		             printf("\nNota %.1f - Reprovado...", MediaFinal);
		    }
		    else
		       printf("\n>>> Reprovado com a nota %.1f!!!", MediaFinal);
		    
		    getchar();
		    
		    // Voltar para o Menu
		    printf("\nDeseja voltar para as opcoes do Menu? (S/N)");
		    scanf("%c", &resposta);
		    if (resposta == 'n'|| resposta == 'N')
		    	continuar = false;
		    else {
		    	getchar();
				system("cls");
			}
            break;
            
        ////////////////////////////////////////////////////////////////
            
       case 'c':
       	case 'C':
            printf("\t Ajuste Preco (usando if/else)");
            float fPreco, fDesconto, fResultado;
    
		    printf("\n\nDigite um valor para o desconto:\n");
		    scanf("%f", &fPreco);
		    printf("Selecione o desconto que deseja:");
		    printf("\n 5%");
		    printf("\n 8%");
		    printf("\n 10%");
		    printf("\n 15%");
		    printf("\n 30%\n");
		    
		    scanf("%f", &fDesconto);
		    
		    if ((fDesconto != 5) && (fDesconto != 8) && (fDesconto != 10) && (fDesconto != 15) && (fDesconto != 30))
		    	printf("Valor de desconto nao encontrado! Escolha algum da lista.");
		    else{
		    	fResultado = (fPreco*fDesconto)/100;
		    	printf("O valor do desconto foi: R$ %.2f", fResultado);
		    	getchar();
		    }
		    
		    // Voltar para o Menu
		    printf("\nDeseja voltar para as opcoes do Menu? (S/N)");
		    scanf("%c", &resposta);
		    if (resposta == 'n'|| resposta == 'N')
		    	continuar = false;
		    else {
		    	getchar();
				system("cls");
			}
            break;
            
        /////////////////////////////////////////////////////////////    
            
       case 'd':
       	case 'D':
            printf("\t Ajuste Preco (usando switch)");
            int Desconto;
		    float Preco, Resultado;
		    
		    printf("\nDigite um preco para o desconto:\n");
		    scanf("%f", &Preco);
		    printf("Selecione o desconto que deseja:");
		    printf("\n 5%");
		    printf("\n 8%");
		    printf("\n 10%");
		    printf("\n 15%");
		    printf("\n 30%\n");
		    
		    scanf("%d", &Desconto);
		    
		    switch (Desconto){
		       case 5:
		            printf("Usando o desconto de 5%...");
		            Resultado = (Preco*Desconto)/100;
		    		printf("\nO valor foi: R$ %.2f\n", Resultado);
		    		getchar();
		       case 8:
		            printf("Usando o desconto de 8%...");
		            Resultado = (Preco*Desconto)/100;
		    		printf("\nO valor foi: R$ %.2f\n", Resultado);
		    		getchar();
		            break;
		       case 10:
		            printf("Usando o desconto de 10%...");
		            Resultado = (Preco*Desconto)/100;
		    		printf("\nO valor foi: R$ %.2f\n", Resultado);
		    		getchar();
		            break;
		       case 15:
		            printf("Usando o desconto de 15%...");
		            Resultado = (Preco*Desconto)/100;
		    		printf("\nO valor foi: R$ %.2f\n", Resultado);
		    		getchar();
		            break;
		       case 30:
		            printf("Usando o desconto de 30%...");
		            Resultado = (Preco*Desconto)/100;
		    		printf("\nO valor foi: R$ %.2f\n", Resultado);
		    		getchar();
		            break;
		       default:
		            printf("Opcao invalida! \n Selecione uma das opcoes de desconto fornecidas!"); 
		    }
		    
		    
          // Voltar para o Menu
		    printf("\nDeseja voltar para as opcoes do Menu? (S/N)");
		    scanf("%c", &resposta);
		    if (resposta == 'n'|| resposta == 'N')
		    	continuar = false;
		    else {
		    	getchar();
				system("cls");
			}
            break;
            
       ///////////////////////////////////////////////////////////
	     
		case 'e':
		case 'E':   
       
            printf("\t Fatorial (usando do/while)");
			
			// N! = N-1 * N-2 * ... N!
			
            int fat, resultado, i;
            printf("\n\nDigite um numero inteiro: ");
            scanf("%d", &fat);
            
            i = 1;
            resultado = fat;
            
            do{
            	resultado *= (fat - i);
            	i++;
			}while (i != fat); // enquanto o i for diferente do numero digitado, ele continua fazendo o calculo
			
			printf("\n O fatorial do %i e: %i\n", fat, resultado);
            
            // Voltar para o Menu
		    printf("\nDeseja voltar para as opcoes do Menu? (S/N)");
		    scanf("%c", &resposta);
		    if (resposta == 'n'|| resposta == 'N')
		    	continuar = false;
		    else {
		    	getchar();
				system("cls");
			}
            break;
            
        ///////////////////////////////////////////////////////////////    
        
       case 'f':
       	case 'F':
            printf("\t Fatorial (usando while)");
            printf("\n\nDigite um numero inteiro: ");
            scanf("%i", &fat);
            
            i = 1;
            resultado = fat;
            
            while(i != fat){
            	resultado *= (fat - i);
            	i++;
            }
            printf("O valor fatorial de %i e: %i\n", fat, resultado);
            
            
            // Voltar para o Menu
		    printf("\nDeseja voltar para as opcoes do Menu? (S/N)");
		    scanf("%c", &resposta);
		    if (resposta == 'n'|| resposta == 'N')
		    	continuar = false;
		    else {
		    	getchar();
				system("cls");
			}
            break;
            
        /////////////////////////////////////////////////////// 
		    
       case 'g':
       	case 'G':
            printf("\t Fatorial (for)");
            printf("\nDigite um numero inteiro:");
            scanf("%d", &fat);
            
            resultado = fat;
            
            for (i = 1; i != fat; i++)
            	resultado *= (fat - i);
            	
        	printf("O valor fatorial de %i e: %i\n", fat, resultado);
            	
            
            // Voltar para o Menu
		    printf("\nDeseja voltar para as opcoes do Menu? (S/N)");
		    scanf("%c", &resposta);
		    if (resposta == 'n'|| resposta == 'N')
		    	continuar = false;
		    else {
		    	getchar();
				system("cls");
			}
            break;
            
       ////////////////////////////////////////////////////////////     
            
       case 'h':
	   case 'H': 
           printf("\n Fibonacci (do/while)");
           	int f, f2, f3, f4;
     		printf("\nDigite um numero: ");
     		scanf("%i", &f);
     		
     		do{	 
   				// prox = anterior (antes do prox) + atual 
     			f4 = f3 + f2;
     			// anterior = atual
     			f3 = f2;
     			// atual = proximo
     			f2 = f4;
     			
     			//mostra o atual
     			printf("%i \t", f2);	    			
			}while (f2 <= f); // enquanto o atual for menor que o numero digitado, continua
		 	
		 	// Voltar para o Menu
		    printf("\nDeseja voltar para as opcoes do Menu? (S/N)");
		    scanf("%c", &resposta);
		    if (resposta == 'n'|| resposta == 'N')
		    	continuar = false;
		    else {
		    	getchar();
				system("cls");
			}
            break;
            
        /////////////////////////////////////////////////////////    
           
       case 'i':
       	case 'I':
            printf("\t Fibonacci (usando while)");
            printf("\n\nDigite um numero: ");
            scanf("%i ", &f);
            
            f3 = 1;
            f2 = 1;
            printf("%i \t", f2);
            
            while(f2 <= f) {
            	printf("%i\t", f2);
            	f4 = f3 + f2;
            	f3 = f2;
            	f2 = f4;
			}
        
            
           // Voltar para o Menu
		    printf("\nDeseja voltar para as opcoes do Menu? (S/N)");
		    scanf("%c", &resposta);
		    if (resposta == 'n'|| resposta == 'N')
		    	continuar = false;
		    else {
		    	getchar();
				system("cls");
			}
            break;
            
        ////////////////////////////////////////////////////////////////
		    
       case 'j':
       	case 'J':
            printf("\t Fibonacci (usando for)");
            printf("\n\nDigite um numero: ");
            scanf("%i", &f);
            
            f3 = 1;
            f2 = 1;
            for (; f >= f2;){
            	f4 = f3 + f2;
            	f3 = f2;
            	f2 = f4;
				printf("%i\t", f2);
			}
            
            
            // Voltar para o Menu
		    printf("\nDeseja voltar para as opcoes do Menu? (S/N)");
		    scanf("%c", &resposta);
		    if (resposta == 'n'|| resposta == 'N')
		    	continuar = false;
		    else {
		    	getchar();
				system("cls");
			}
            break;
          
		  ///////////////////////////////////////////////////////
            
        case 'k':
         case'K':
         	printf("\t P.A");
         	
         	// Voltar para o Menu
		    printf("\nDeseja voltar para as opcoes do Menu? (S/N)");
		    scanf("%c", &resposta);
		    if (resposta == 'n'|| resposta == 'N')
		    	continuar = false;
		    else {
		    	getchar();
				system("cls");
			}
            break;
            
            //////////////////////////////////////////////////
            
        case 'l':
         case 'L':
         	printf("\t P.G");
         	
         	// Voltar para o Menu
		    printf("\nDeseja voltar para as opcoes do Menu? (S/N)");
		    scanf("%c", &resposta);
		    if (resposta == 'n'|| resposta == 'N')
		    	continuar = false;
		    else {
		    	getchar();
				system("cls");
			}
            break;
          ////////////////////////////////////////////////////
         	
         	
        case 'm':
         case 'M':
         	printf("\t Seno");
         	
         	// Voltar para o Menu
		    printf("\nDeseja voltar para as opcoes do Menu? (S/N)");
		    scanf("%c", &resposta);
		    if (resposta == 'n'|| resposta == 'N')
		    	continuar = false;
		    else {
		    	getchar();
				system("cls");
			}
            break;
         	
       /////////////////////////////////////////////////////////
	     	
        case 'n':
         case 'N':
         	printf("\t Cosseno");
         	
         	// Voltar para o Menu
		    printf("\nDeseja voltar para as opcoes do Menu? (S/N)");
		    scanf("%c", &resposta);
		    if (resposta == 'n'|| resposta == 'N')
		    	continuar = false;
		    else {
		    	getchar();
				system("cls");
			}
            break;
         	
        /////////////////////////////////////////////////////////
		
		 	
        case 'o':
         case 'O':
         	printf("\t Tangente");
         	
         	// Voltar para o Menu
		    printf("\nDeseja voltar para as opcoes do Menu? (S/N)");
		    scanf("%c", &resposta);
		    if (resposta == 'n'|| resposta == 'N')
		    	continuar = false;
		    else {
		    	getchar();
				system("cls");
			}
            break;
         	
        ////////////////////////////////////////////////////////////
			
        case 'p':
         case 'P':
         	printf("\t Lancando Dado aleatorio...");
         	printf("\n\nSelecione a quantidade de vezes que deseja jogar o dado: ");
         	
         	
         	// Voltar para o Menu
		    printf("\nDeseja voltar para as opcoes do Menu? (S/N)");
		    scanf("%c", &resposta);
		    if (resposta == 'n'|| resposta == 'N')
		    	continuar = false;
		    else {
		    	getchar();
				system("cls");
			}
            break;
         	
        ////////////////////////////////////////////////////////
		
		   
        case 'q':
        case 'Q':
            // Voltar para o Menu
            getchar();
		    printf("\nDeseja sair do Menu? (S/N)");
		    scanf("%c", &resposta);
		    if (resposta == 's'|| resposta == 'S')
		    	continuar = false;
		    else {
		    	getchar();
				system("cls");
			}
            break;
            
            
       default:
            printf("Opcao invalida!!!\t Tente novamente. ");
                        
         } //switch
     }// while
	system("PAUSE");
 }//main
 
