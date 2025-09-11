#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	
	printf("Tabela ascii letras\n\n");
	
	for(i=65;i<=122;i++){
		if(i>=91&&i<=96){
			continue;
		}
		
		if(i==97){
			printf("\n");
		}
		printf("%3d:%c\n",i,i); //tentar mostrar um int com %c mostra o carac equivalente na tabela ASCII
	}
	
	return 0;
}
