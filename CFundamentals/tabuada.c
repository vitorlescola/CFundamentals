#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	int j;
	
	for(i=1;i<=10;i++){
		for(j=1;j<=10;j++){
			printf(" %4d%",i*j); //%4 ajusta a tabela
		}
		printf("\n");
	}
	
	return 0;
}
