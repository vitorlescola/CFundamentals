#include <stdio.h>
#include <locale.h>

int teste; //var global, variavel fora de qualquer fun��o, pode ser utilizada no c�digo inteiro, n�o boa pratica!, evitar se n�o const

int adicao(int n1, int n2){ //parametro
	int soma=n1+n2;
	
	return soma; //fun��es tem que returnar algo, escrever o que a fun��o retorna, nesse caso a var soma, return retorna
	             //para onde a fun��o foi chamada
}

int quadrado(int n3){
	int quadrado=n3*n3;  //variaveis podem ter o mesmo nome se estiverem em fun��es (ou scopes diferentes) 
	                    //uma variavel em um escopo n�o pode ser acessada fora do seu escopo
	return quadrado;
}

void texto(){
	printf("Texto de teste\n");
	printf("Isso � uma fun��o do tipo void (sem return)\n");
	printf("Fun��es tem que ter um tipo declarado (void, int, float, etc) (int nomeFuncao() )\n");
	printf("Fun��es tem que ter parametros (o que a fun��o espera receber, int nomeFuncao(int parametro1, int parametro2...) )\n");
	printf("E para chamar fun��es � preciso de argumentos (o que voc� da para a fun��o) (nomeFuncao(argumento1, argumento2...) )\n\n");
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1;
	int n2;
	int soma; //mesmo nome que na fun��o adicao, mas est�o em escopes diferentes ent�o n�o a problema
	int n3;
	int quad;
	
	printf("Escreva o primeiro numero: ");
	scanf("%d",&n1);
	
	printf("Escreva o segundo numero: ");
	scanf("%d",&n2);
	
	soma=adicao(n1,n2); //argumento
	
	printf("\n%d\n\n",soma);
	
	texto(); //obs o c�digo � lido de cima para baixo, ent�o se chamar uma fun��o acima dela, vai dar erro
	texto();
	texto();
	
	printf("Escreva um numero para fazer ele ao quadrado: ");
	scanf("%d",&n3);
	
	quad=quadrado(n3);
	
	printf("\n%d\n",quad);
	
	return 0;
}
