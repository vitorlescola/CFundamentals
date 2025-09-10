#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	int j;
	
	for(i=0;i<=3;i++){
		for(j=0;j<=10;j++){ //no loop interno é comun utilizar j em ves de i
			printf("%d ",j);
		}
		printf("\n");
	}
	
	return 0;
}
