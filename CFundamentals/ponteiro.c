#include <stdio.h>
#include <locale.h>

void incremento(int *n);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n=123;  //ponteiro é uma variavel que salva o lacal da memoria de outra variavel
	int *pN=&n;  //mantem o mesmo tipo de var, * para ponteiro, & para dar o local
	
	printf("%p",&n);
	printf("\n%p\n",pN);
	
	incremento(pN);
	
	printf("%d",n);
	
	printf("\n%d",*pN);  //é possivel usar o ponteiro para mostrar o valor da variavel tbm
	
	int n2[]={0,1,2,3,4,5};
	int *pN2=&n2;  //o espaço na memoria do primeiro elemento é o mesmo do nome do vetor
	int i;
	
	for(i=0;i<6;i++){
		printf("\n%d",*(pN2+i));
	}
	
	return 0;
}

void incremento(int* n){  //quando manda uma var para uma função o valor da var é "clonado", ent não afeta
                         //o original, para mudar o original tem que mandar um ponteiro para a posição do
						 //original, tem que adicionar o * na função para poder aceitar o ponteiro
	(*n)++;  //* para ponteiro, tem que estar em parenteses porque no C o ++ tem prioridade, em tão iria
	         //aumentar o valor no espaço da memoria em vez do valor da var
}
