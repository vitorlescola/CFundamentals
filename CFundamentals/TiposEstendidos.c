#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	//alem dos tipos de variaveis padrões (int, float, char, double), C tem tipos para especificar o tamanho dos valores
	
	//int 2 ou 4 byte, char 1 byte por character, float 4 bytes, double 8 bytes
	
	short int n1; //2 bytes/ -32,768 ate 32,767/ %hd, se colocar fora da margem da um valor errado
	
	printf("Escreva um valor: ");
	scanf("%hd",&n1);
	
	printf("%d\n",n1);
	
	unsigned int n2; //2 ou 4 bytes (depende do sistena), 0 ate 65,535 (2 bytes)ou 0 ate 4,294,967,295 (4 bytes)/ %u
	//unsigned significa que só salva valores não negativos
	
	printf("\nEscreva um valor: ");
	scanf("%u",&n2);
	
	printf("%u\n",n2);
	
	long int n3; /*4 ou 8 bytes/ -2,147,483,648 ate 2,147,483,647 (4 bytes) ou 
	             -9,223,372,036,854,775,808 ate 9,223,372,036,854,775,807 (8 bytes)/ %ld*/
	
	printf("\nEscreva um valor: ");
	scanf("%ld",&n3);
	
	printf("%ld\n",n3);
	
	long long int n4;  //8 bytes/ -9,223,372,036,854,775,808 ate 9,223,372,036,854,775,807/ %lld
	
	printf("\nEscreva um valor: ");
	scanf("%lld",&n4);
	
	printf("%lld\n",n4);
	
	unsigned long int n5;  //%lu
	
	unsigned long long int n6;  //8 bytes/ 0 ate 18,446,744,073,709,551,615/ %llu
	
	long double	n7;  //8, 12, ou 16 bytes/ depende, double mais preciso/ %Lf
	
	int n0;
	
	printf("\n%d\n",sizeof(n0));  //mostrando o tamanho em bytes
	
	printf("\n%zu\n",sizeof(n0));  /*%zu é do tipo size_t, usado para representar tamanho em bytes, funciona com %d mas pode dar 
	                               erro dependendo do sistema*/
	
	unsigned short int n8;
	
	int n9=001101;
	
	printf("\n%d\n",n9);  //traduz de binario para decimal
	printf("\n%i\n",n9);
	
	double n10=15e15;  //notação cientifica, n1en2=n1+10 elevado a n2, quantos zeros o numero tem
	
	printf("\n%lf\n",n10);
	
	return 0;
}
