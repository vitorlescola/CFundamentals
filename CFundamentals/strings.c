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
	scanf(" %c",&caracter); //espaço porque se tiver outro scanf em cima ele salva um \n no input, e ele continua no inputnquando
	                        //chega no do char, e dai ele pega esse \n e salva no char, fazendo ele ficar vazio, e colocando 
							//um espaço antes do %c limpa esse buffer que ingnora esse \n, não precisaria nesse caso pois é o 
							//primeiro, mas não teria problema  
	
	//printf("Escreva o seu nome: ");
    //scanf(" %s",&nomeScan); //scanf para quando chega no primeiro espaço, então não seria bom utilizar nesse senario
	
	getchar(); //para não ter o mesmo problema e já que não tem como dar espaço, utilizar essa função para limpar o \n no buffer
	printf("Escreva o seu nome completo: ");
	fgets(nome,50,stdin);  //file get string (nome da variavel,tamanho,standard input)
	nome[strlen(nome)-1]='\0'; //a função fgets le a linha de input inteira, incluindo o enter, o que faz com que uma linha seja
	                           //pulada no output, com a biblioteca string usando essa linha é possivel ingnorar o \n, 
							   //strlen=tamanho da string (do string.h), \0 null terminator, ta substituindo o ultimo caracter da
							   //string com um null terminator
	
	tamanho=sizeof(nome); //função que pega o tamanho da string, não precisa de biblioteca
	//fgets(nome,sizeof(nome),stdin); pode ser utilizado no fgets
	
	printf("\n%c\n",caracter);
	//printf("%s\n",nomeScan);
	printf("%s\n",nome);
	printf("Teste\n");
	printf("%d\n",tamanho);
	
		
	return 0;
}
