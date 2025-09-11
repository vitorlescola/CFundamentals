#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nomes[3][50];
	int i;
	
	for(i=0;i<3;i++){
		printf("Escreva o %dº nome: ",i+1);
		fgets(nomes[i],sizeof(nomes[i]),stdin);
		nomes[i][strlen(nomes[i])-1]='\0';
	}
	
	printf("\n");
	
	for(i=0;i<3;i++){
		printf("%s\n",nomes[i]);
	}
	
	return 0;
}
