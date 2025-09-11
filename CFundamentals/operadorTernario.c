#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//operador ternario � como um if else simplificado, (condi��o)? valor_se_for_verdadeiro:valor_se_for_falso;
	//basicamente pergunta se � verdade e se for:se s�o for, (� verdade)?se_sim:se_n�o
	
	int x=5;
	int y=10;
	int maior=(x>y)?x:y;
	
	printf("%d",maior);
	
	printf("\n\nEscreva o valor do primeiro numero: ");
	scanf("%d",&x);
	
	printf("Escreva o valor do segundo numero: ");
	scanf("%d",&y);
	
	maior=(x>y)?x:y;
	
	printf("\nO valor maior � %d\n",maior);
	
	bool ligado=true;
	
	printf("\n%s\n",(ligado)?"Esta ligado":"Esta desligado");
	
	int n;
	
	printf("\nEscreva um numero: ");
	scanf("%d",&n);
	
	printf("\nO numero %d � %s\n",n,(n%2==0)?"par":"impar");
	
	int idade;
	
	printf("\n\nEscreva a sua idade: ");
	scanf("%d",&idade);
	
	printf("\n%s\n",(idade>=18)?"Maior de idade":"Menor de idade");
	
	int horas;
	
	printf("\n\nEscreva as horas (0-24): ");
	scanf("%d",&horas);
	
	printf("\nS�o %d da %s\n",horas,(horas>12)?"tarde":"manha");
	
	return 0;
}
