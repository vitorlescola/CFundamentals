#include <stdio.h>
#include <locale.h>

int adicao(int n1, int n2); //prototipo de fun��o, � mais organizado pois faz com que a main seja a primeira fun��o

int quadrado(int n3);

void texto();

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1;
	int n2;
	int soma;
	int n3;
	int quad;
	
	printf("Escreva o primeiro numero: ");
	scanf("%d",&n1);
	
	printf("Escreva o segundo numero: ");
	scanf("%d",&n2);
	
	soma=adicao(n1,n2);
	
	printf("\n%d\n\n",soma);
	
	texto();
	texto();
	texto();
	
	printf("Escreva um numero para fazer ele ao quadrado: ");
	scanf("%d",&n3);
	
	quad=quadrado(n3);
	
	printf("\n%d\n",quad);
	
	return 0;
}

int adicao(int n1, int n2){
	int soma=n1+n2;
	
	return soma;
}

int quadrado(int n3){
	int quadrado=n3*n3; 
	
	return quadrado;
}

void texto(){
	printf("Texto de teste\n");
	printf("Isso � uma fun��o do tipo void (sem return)\n");
	printf("Fun��es tem que ter um tipo declarado (void, int, float, etc) (int nomeFuncao() )\n");
	printf("Fun��es tem que ter parametros (o que a fun��o espera receber, int nomeFuncao(int parametro1, int parametro2...) )\n");
	printf("E para chamar fun��es � preciso de argumentos (o que voc� da para a fun��o) (nomeFuncao(argumento1, argumento2...) )\n\n");
}
