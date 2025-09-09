#include <stdio.h>
#include <locale.h>

int teste; //var global, variavel fora de qualquer função, pode ser utilizada no código inteiro, não boa pratica!, evitar se não const

int adicao(int n1, int n2){ //parametro
	int soma=n1+n2;
	
	return soma; //funções tem que returnar algo, escrever o que a função retorna, nesse caso a var soma, return retorna
	             //para onde a função foi chamada
}

int quadrado(int n3){
	int quadrado=n3*n3;  //variaveis podem ter o mesmo nome se estiverem em funções (ou scopes diferentes) 
	                    //uma variavel em um escopo não pode ser acessada fora do seu escopo
	return quadrado;
}

void texto(){
	printf("Texto de teste\n");
	printf("Isso é uma função do tipo void (sem return)\n");
	printf("Funções tem que ter um tipo declarado (void, int, float, etc) (int nomeFuncao() )\n");
	printf("Funções tem que ter parametros (o que a função espera receber, int nomeFuncao(int parametro1, int parametro2...) )\n");
	printf("E para chamar funções é preciso de argumentos (o que você da para a função) (nomeFuncao(argumento1, argumento2...) )\n\n");
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1;
	int n2;
	int soma; //mesmo nome que na função adicao, mas estão em escopes diferentes então não a problema
	int n3;
	int quad;
	
	printf("Escreva o primeiro numero: ");
	scanf("%d",&n1);
	
	printf("Escreva o segundo numero: ");
	scanf("%d",&n2);
	
	soma=adicao(n1,n2); //argumento
	
	printf("\n%d\n\n",soma);
	
	texto(); //obs o código é lido de cima para baixo, então se chamar uma função acima dela, vai dar erro
	texto();
	texto();
	
	printf("Escreva um numero para fazer ele ao quadrado: ");
	scanf("%d",&n3);
	
	quad=quadrado(n3);
	
	printf("\n%d\n",quad);
	
	return 0;
}
