#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//realloc(), reallocation, redimensiona memoria anteriormente alocada, dois argumentos, um ponteiro para uma memoria ja usada e um novo tamanho em bytes
	
	int quant=0;
	int i;
	
	printf("Escreva a quantidade de numeros: ");
	scanf("%d",&quant);
	
	int *numeros=malloc(quant*sizeof(int));
	
	if(numeros==NULL){
		printf("Erro ao alocar memoria!");
		
		return 1;
	}
	
	for(i=0;i<quant;i++){
		printf("Escreva o %dº numero: ",i+1);
		scanf("%d",&numeros[i]);
	}
	
	char escolha;
	int novo=0;
	
	do{
		printf("Mudar a quantidade de numeros?(S/N): ");
	    scanf(" %c",&escolha);
	}while(escolha!='S'&&escolha!='N');
	
	if(escolha=='S'){
		printf("Escreva a nova quantidade de numeros: ");
		scanf("%d",&novo);
		
		int *temp=realloc(numeros,novo*sizeof(int)); //nome comum para realloc é temp
		
		if(temp==NULL){
			printf("Erro ao realocar memoria");
		}else{
			numeros=temp;
			temp=NULL;
			
			for(i=quant;i<novo;i++){
	        	printf("Escreva o %dº numero: ",i+1);
		        scanf("%d",&numeros[i]);
	       }
	       
	       system("cls");
	
	       for(i=0;i<novo;i++){
		       printf("Numero %dº: %d\n",i+1,numeros[i]);
        	}
		}
	}else{
		system("cls");
	
	    for(i=0;i<quant;i++){
		    printf("Numero %dº: %d\n",i+1,numeros[i]);
	    }
	}
	
	free(numeros);
	numeros=NULL;
										   
	return 0;
}
