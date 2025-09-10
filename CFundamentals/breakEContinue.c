#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	
	for(i=0;i<=10;i++){
		printf("%d\n",i);
		
		if(i==4){
			break; //para/quebra o loop
		}
	}
	
	printf("\n");
	
	for(i=0;i<=10;i++){
		if(i==4){
			continue; //pula o ciclo atual
		}
		
		printf("%d\n",i);
		
	}
	
	return 0;
}
