#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	srand(time(NULL));
	
	int numero=(rand()%100)+1;
	int chute;
	
	do{
		printf("Adivinhe um numero de 1 a 100: ");
		scanf("%d",&chute);
		
		if(chute>numero){
			printf("\nO numero � menor que %d\n",chute);
		}else if(chute<numero){
			printf("\nO numero � maior que %d\n",chute);
		}
	}while(chute!=numero);
	
	printf("\nVoc� acertou!\n");
	
	return 0;
}
