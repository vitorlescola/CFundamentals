#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n=2;
	
	printf("%p",&n);  //para acessar o espaço na memoria utiliza & (igual no scanf), o lacal da memoria fica em
	                  //hexadecimal 
	
	float n2=178.2;
	
	printf("\n%p",&n2);  //%p para mostrar o valor de um ponteiro
	
	return 0;
}
