#include <stdio.h>
#include <locale.h>

typedef union {  //uniao é semelhar a struct, porem todos os membros tem compartilham o mesmo espaço na memoria
	int num;     // o que faz com que apenas um seja valido por vez, o tamanho da uniao(bytes) é o mesmo do seu
	char letra;  //maior membro(neste caso 4 bytes, struct seria 5 bytes), se mudar um valor altera todos
}uniao;  //usado para salvar espaço na memoria, pois pode salvar variais variaves em umm só local

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	uniao u1;  //porem só uma é valida por vez
	
	printf("%zu",sizeof(uniao));  //na union o compilador não adiciona padding, pois todos os membros 
	                              //compartilham o mesmo espaço
	
	return 0;
}
