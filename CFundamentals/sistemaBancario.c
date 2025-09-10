#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float conta=0.0;
	float deposito;
	float retirada;
	int escolha;
	
	do{
		do{
		printf("-----SISTEMA BANCARIO-----\n");
	    printf("\n1-Ver conta\n");
	    printf("2-Fazer deposito\n");
	    printf("3-Retirar dinheiro\n");
	    printf("4-Sair\n");
	    scanf("%d",&escolha);
	    
	      if(escolha<=0||escolha>4){
	    	  system("cls"); //limpa a tela
	    	  printf("Opção invalida\n");
		  }
	    }while(escolha<=0||escolha>4);
	
	
	    switch(escolha){
		    case 1:
			     printf("\nR$%.2f\n\n",conta);
			     break;
		    case 2:
		         printf("\nEscreva o valor a ser depositado: ");
			     scanf("%f",&deposito);
			     
			     if(deposito<0){
			     	printf("\nValor invalido\n\n");
			     	break;
				 }
			
			     conta+=deposito;
			
			     printf("\nDeposito de R$%.2f feito com sucesso!\n\n",deposito);
			
			     deposito=0;
			     break;
		    case 3:
		         printf("\nEscreva o valor a ser retirado (R$%.2f na conta): ",conta);
			     scanf("%f",&retirada);
			     
			     if(retirada<0){
			     	printf("\nValor invalido\n\n");
			     	break;
				 }
			
			     conta-=retirada;		
			
			     printf("\nRetirada de R$%.2f feita com sucesso!\n\n",retirada);
			
			     retirada=0;
			     break;
		    case 4:
			     system("cls");
			     printf("Obrigado por utilizar nosso sistema!\n");
		         break;	
	    }
	}while(escolha!=4);
	
	return 0;
}
