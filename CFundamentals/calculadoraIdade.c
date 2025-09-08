#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int anoNacsimento;
	int anoAtual;
	int idade; 
	int mesNacsimento;
	int mesAtual;
	
	printf("Escreva o seu ano de nacsimento: ");
	scanf("%d",&anoNacsimento);
	
	do{
		printf("Escreva o seu mes de nacsimento: ");
		scanf("%d",&mesNacsimento);
		
		if(mesNacsimento<=0||mesNacsimento>12){
			printf("\nMes invalido\n");
		}
	}while(mesNacsimento<=0||mesNacsimento>12);
		
	printf("Escreva o ano atual: ");
	scanf("%d",&anoAtual);
	
	do{
		printf("Escreva o mes atual: ");
		scanf("%d",&mesAtual);
		
		if(mesAtual<=0||mesAtual>12){
			printf("\nMes invalido\n");
		}
	}while(mesAtual<=0||mesAtual>12);	
	
	if(mesAtual>=mesNacsimento){
		idade=anoAtual-anoNacsimento;
	}else{
		idade=anoAtual-anoNacsimento;
		idade--;
	}
	
	printf("\nA sua idade é %d\n",idade);
	
	return 0;
}
