#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char caracter;
	char nomeScan[50]; //[] tamanho maximo da sring
	char nome[50];
	int tamanho;
	
	printf("Escreva um caracter: ");
	scanf(" %c",&caracter); //espa�o porque se tiver outro scanf em cima ele salva um \n no input, e ele continua no inputnquando
	                        //chega no do char, e dai ele pega esse \n e salva no char, fazendo ele ficar vazio, e colocando 
							//um espa�o antes do %c limpa esse buffer que ingnora esse \n, n�o precisaria nesse caso pois � o 
							//primeiro, mas n�o teria problema  
	
	//printf("Escreva o seu nome: ");
    //scanf(" %s",&nomeScan); //scanf para quando chega no primeiro espa�o, ent�o n�o seria bom utilizar nesse senario
	
	getchar(); //para n�o ter o mesmo problema e j� que n�o tem como dar espa�o, utilizar essa fun��o para limpar o \n no buffer
	printf("Escreva o seu nome completo: ");
	fgets(nome,50,stdin);  //file get string (nome da variavel,tamanho,standard input)
	nome[strlen(nome)-1]='\0'; //a fun��o fgets le a linha de input inteira, incluindo o enter, o que faz com que uma linha seja
	                           //pulada no output, com a biblioteca string usando essa linha � possivel ingnorar o \n, 
							   //strlen=tamanho da string (do string.h), \0 null terminator, ta substituindo o ultimo caracter da
							   //string com um null terminator
	
	tamanho=sizeof(nome); //fun��o que pega o tamanho da string, n�o precisa de biblioteca
	//fgets(nome,sizeof(nome),stdin); pode ser utilizado no fgets
	
	printf("\n%c\n",caracter);
	//printf("%s\n",nomeScan);
	printf("%s\n",nome);
	printf("Teste\n");
	printf("%d\n",tamanho);
	
		
	return 0;
}
