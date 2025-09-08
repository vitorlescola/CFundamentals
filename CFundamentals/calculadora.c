#include <stdio.h>
#include <locale.h>

int main(){
	
	/*
	n1%n2 faz a divisão e pega a sobra
	n1+=5 n1=n1+1
	n1-=5 n1=n1-1
	n1*=5 n1=n1*1
	n1/=5 n1=n1/1
	*/
	
	setlocale(LC_ALL, "Portuguese");
	
	float n1;
	float n2; //se dividir por int o decimal não é mantido 
	float resultado;
	char operacao;
	
	printf("Escreva o primeiro numero: ");
	scanf("%d",&n1);
	
	printf("Escreva o segundo numero: ");
	scanf("%d",&n2);
	
	printf("Escreva '+' para adição, '-' para subtração, '*' para multiplicação e '/' para divisão: ");
	scanf(" %c",&operacao);
	
	if(operacao=='+'){
		resultado=n1+n2;
		printf("\n%f\n",resultado);
	}else if(operacao=='-'){
		resultado=n1-n2;
		printf("\n%f\n",resultado);
	}else if(operacao=='*'){
		resultado=n1*n2;
		printf("\n%f\n",resultado);
	}else if(operacao=='/'){
		resultado=n1/n2;
		printf("\n%f\n",resultado);
	}else{
		printf("\noperação invalida\n");
	}
	
	return 0;
}
