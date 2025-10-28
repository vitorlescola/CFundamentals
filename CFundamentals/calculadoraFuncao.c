#include <stdio.h>
#include <locale.h>

float soma(float n1, float n2);
float subtracao(float n1, float n2);
float multiplicacao(float n1, float n2);
float divisao(float n1, float n2);

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1;
	float n2;
	int operacao;
	
	do{
		printf("Escreva a operação a ser feita:\n1-adição\n2-subtração\n3-multiplicação\n4-divisão\nopção:   ");
	    scanf("%d",&operacao);
	    
	    if(operacao<1||operacao>4){
	    	system("cls");
		}
		
	}while(operacao<1||operacao>4);
	
	
	printf("\nEscreva o primeiro numero: ");
	scanf("%f",&n1);
	
	printf("Escreva o segundo numero: ");
	scanf("%f",&n2);
	
	switch(operacao){
		case 1:
			printf("\n%f",soma(n1,n2));
			break;
		case 2:
		    printf("\n%f",subtracao(n1,n2));
			break;
		case 3:
		    printf("\n%f",multiplicacao(n1,n2));
			break;
		case 4:
		    printf("\n%f",divisao(n1,n2));
			break;			
	}
	
	return 0;
}

float soma(float n1, float n2){
	return n1+n2;
}

float subtracao(float n1, float n2){
	return n1-n2;
}

float multiplicacao(float n1, float n2){
	return n1*n2;
}

float divisao(float n1, float n2){
	return n1/n2;
}
