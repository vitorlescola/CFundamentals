#include <stdio.h>
#include <locale.h>

typedef int inteiro; //comando para dar um "apelido" a um tipo de dado
typedef char string[50];

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	inteiro n1;
	inteiro n2;
	inteiro soma;
	
	printf("Escreva o primeiro numero: ");
	scanf("%d",&n1);
	
	printf("Escreva o segundo numero: ");
	scanf("%d",&n2);
	
	soma=n1+n2;
	
	printf("\nA soma dos numeros é %d\n",soma);
	
	return 0;
}
