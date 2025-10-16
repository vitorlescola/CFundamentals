#include <stdio.h>
#include <locale.h>

void incremento(int *n);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n=123;  //ponteiro � uma variavel que salva o lacal da memoria de outra variavel
	int *pN=&n;  //mantem o mesmo tipo de var, * para ponteiro, & para dar o local
	
	printf("%p",&n);
	printf("\n%p\n",pN);
	
	incremento(pN);
	
	printf("%d",n);
	
	printf("\n%d",*pN);  //� possivel usar o ponteiro para mostrar o valor da variavel tbm
	
	int n2[]={0,1,2,3,4,5};
	int *pN2=&n2;  //o espa�o na memoria do primeiro elemento � o mesmo do nome do vetor
	int i;
	
	for(i=0;i<6;i++){
		printf("\n%d",*(pN2+i));
	}
	
	return 0;
}

void incremento(int* n){  //quando manda uma var para uma fun��o o valor da var � "clonado", ent n�o afeta
                         //o original, para mudar o original tem que mandar um ponteiro para a posi��o do
						 //original, tem que adicionar o * na fun��o para poder aceitar o ponteiro
	(*n)++;  //* para ponteiro, tem que estar em parenteses porque no C o ++ tem prioridade, em t�o iria
	         //aumentar o valor no espa�o da memoria em vez do valor da var
}
