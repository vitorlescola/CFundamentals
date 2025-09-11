#include <stdio.h>
#include <locale.h>

typedef enum { //maiusculo
	DOMINGO,SEGUNDA,TERCA,QUARTA,QUINTA,SEXTA,SABADO //cada constante tem um valor que começa no 0, domingo=0, segunda=1, etc...
	                                                 //pode ser mudado com=x, como DOMINGO=1
}Dias;

typedef enum { //normalmente enum Nome{};, porem com o typedef pode fazer typedef enum{}Nome;
	ALTO,
	MEDIO,
	BAIXO
}Altura;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//enum (enumeration) é um tipo de dado que consiste em um grupo de constantes
	
	Dias hoje=DOMINGO; //criando uma variavel do tipo enum Dias, que tem valor DOMINGO, que é iquivalente a 0
	
	printf("%d",hoje);
	
	Altura altura=BAIXO; //normalmente é enum Nome nome, porem com typedef pode retirar o enum
	
	printf("\n\n%d\n",altura);
	
	return 0;
}
