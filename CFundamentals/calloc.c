#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//calloc(), tem dois parametros, a quantidade de intens a ser alocado e o tamanho em bytes de cada item, a memoria alocada em calloc é zerada por padrao, diferente do malloc, fazendo o calloc um pouca menos eficiente porem mais previsivel, 
	            
	int quant=0;
	int i;
	
	printf("Escreva a quantidade de numeros: ");
	scanf("%d",&quant);
	
	int *numeros1=malloc(quant*sizeof(int)); //em malloc
	int *numeros2=calloc(quant, sizeof(int));
	
	if(numeros1==NULL||numeros2==NULL){
		printf("Erro ao alocar memoria!");
		
		return 1;
	}
	
	for(i=0;i<quant;i++){
		printf("\nValor em malloc:%d  Valor em calloc:%d\n1",numeros1[i],numeros2[i]);
	}
				                          
	free(numeros1);
	numeros1=NULL;
	free(numeros2);
	numeros2=NULL;
										   
	return 0;
}
