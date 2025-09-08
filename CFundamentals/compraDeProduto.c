#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char produto[50];
	float preco;
	int quantidade;
	float total;
	
	printf("Escreva o nome do produto: ");
	fgets(produto,sizeof(produto),stdin);
	produto[strlen(produto)-1]='\0';
	
	do{
		printf("Escreva o preço do produto: ");
	    scanf("%f",&preco);
	}while(preco<0);
	
	do{
		printf("Quantos seram comprado?: ");
	    scanf("%d",&quantidade);
	}while(quantidade<=0);
	
	total=preco*quantidade;
	
	printf("\nVocê comprou %d %s(s)",quantidade,produto);
	printf("\nO preço final é R$%.2f\n",total);
	
	return 0;
}
