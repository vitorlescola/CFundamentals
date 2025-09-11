#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//operador ternario é como um if else simplificado, (condição)? valor_se_for_verdadeiro:valor_se_for_falso;
	//basicamente pergunta se é verdade e se for:se são for, (é verdade)?se_sim:se_não
	
	int x=5;
	int y=10;
	int maior=(x>y)?x:y;
	
	printf("%d",maior);
	
	printf("\n\nEscreva o valor do primeiro numero: ");
	scanf("%d",&x);
	
	printf("Escreva o valor do segundo numero: ");
	scanf("%d",&y);
	
	maior=(x>y)?x:y;
	
	printf("\nO valor maior é %d\n",maior);
	
	bool ligado=true;
	
	printf("\n%s\n",(ligado)?"Esta ligado":"Esta desligado");
	
	int n;
	
	printf("\nEscreva um numero: ");
	scanf("%d",&n);
	
	printf("\nO numero %d é %s\n",n,(n%2==0)?"par":"impar");
	
	int idade;
	
	printf("\n\nEscreva a sua idade: ");
	scanf("%d",&idade);
	
	printf("\n%s\n",(idade>=18)?"Maior de idade":"Menor de idade");
	
	int horas;
	
	printf("\n\nEscreva as horas (0-24): ");
	scanf("%d",&horas);
	
	printf("\nSão %d da %s\n",horas,(horas>12)?"tarde":"manha");
	
	return 0;
}
