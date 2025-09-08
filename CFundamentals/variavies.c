#include <stdio.h> //standard input output
#include <locale.h>
#include <stdbool.h> //standard boolean, precisa para usar a variavel boolean

int main(){
	
	/*
Escreva um programa em linguagem C que simula o cadastro de um único produto em um sistema de controle de estoque. O programa deve:
Solicitar ao usuário as seguintes informações:
Código do produto (int)
Nome do produto (char[])
Categoria (apenas uma letra, ex: 'A', 'B', etc.) (char)
Preço unitário (float)
Peso (em kg) (double)
Disponibilidade em estoque (bool — use true para disponível e false para indisponível)
Após a entrada dos dados, o programa deve exibir as informações cadastradas de forma organizada.
	*/
	
	setlocale(LC_ALL, "Portuguese");
	
	int codigo; //int= numeros inteiros
	float preco; //float= numeros com virgula
	double numerosGrandes; //double= numeros com virgula maiores (dobro o float)
	char categoria; //char=caracter, marcado com ''
	char nome[50]; //array de char=string, marcado com ""
	bool disponivel; //booleano
	
	printf("Insira o código do produto: ");
	scanf("%d",&codigo);
	
	printf("Escreva o nome do produto: ");
	scanf("%s",&nome); //%s para string, scanf NÃO é bom para string pois para quando encontra o primeiro espaço, usar fgets
	
	printf("Escreva a categoria do produto: ");
	scanf(" %c",&categoria); // %c (com espaço) cara caracter
	
	printf("Escreva o preço do produto: ");
	scanf("%f",&preco);
	
	printf("%s",nome);
		
	return 0;
}
