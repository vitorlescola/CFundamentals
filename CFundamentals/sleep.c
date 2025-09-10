#include <stdio.h>
#include <locale.h>
#include <windows.h> //sleep

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	
	for(i=10;i>0;i--){
		Sleep(1000); //1000 milesegundos, dormir(esperar) pelo tempo escrito
		
		printf("%d\n",i);
	}
	
	printf("\nFIM\n!");
	
	return 0;
}
