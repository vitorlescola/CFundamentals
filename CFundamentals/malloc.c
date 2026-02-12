#include <stdio.h>
#include <locale.h>
#include <stdlib.h>  //para poder usar malloc(), calloc(),...

int main(){
	setlocale(LC_ALL, "Portuguese");  //existem dois tipos de memoria em C, statico(entes que o programa roda) e dinamica(depois que o programa roda, só pode ser acessado por ponteiro) com voce tendo controle sobre quanta memoria dinamica esta sendo usada
	
	
	//malloc() (memory allocate)funçao que aloca um numero especifico de bytes na memoria
	//int *notas malloc(100);  malloc tem um parametro, sendo a quantidade de de memoria para alocar, passando 100 bytes de memoria para usar 
	
	int i;
	int quant=0;
	
	printf("Escreva a quantidade de notas: ");  //podendo ser usado quando voce não sabe o tamanho de um vetor
	scanf("%d",&quant);
	
	int *notas=malloc(quant*sizeof(int));  //esta alocando na memoria a quantidade de notas vezes 4 pois int é 4 bytes, ou seja esta alocando a quantidade exata de bytes necessario
	                                       //a memoria sendo reservada vem do "heap", na maioria das vezes a memoria vem do stack, neste caso esta "emprestando" do heap, esta funçao retorna um ponteiro para onde a memoria rezervada esta
	
	if(notas==NULL){  //se a função malloc falhar ela rotorna um valor NULL, é importante checar este caso para evitar que o programa tente acessar um local de memoria que ele não tenha permissão
		printf("Erro ao alocar memoria!");
		
		return 1;
	}
	
	for(i=0;i<quant;i++){
		printf("Escreva a nota %dº:",i+1);
		scanf("%d",&notas[i]);  //com o ponteiro a estrutura de dados, ela pode ser acessado como um vetor
	}
	
	for(i=0;i<quant;i++){
		printf("\nNota %d: %d",i+1, notas[i]);
	}
	
	free(notas);  //como esta "emprestando" a memoria do heap, depois de usar tem que devolver a memoria 
	notas=NULL;  //resetando o ponteiro, para que ele não aponte para memoria que não esta mais sendo usada
	                                       
	return 0;
}
