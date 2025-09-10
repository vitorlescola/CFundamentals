#include <stdio.h>
#include <locale.h>
#include <stdlib.h> //standard library
#include <time.h> //para ver o horario

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//rand() sempre vai aparecer o mesmo valor, pois é um valor pseudo-aleatorio, baseado em uma formula matematica, que nesse 
	//caso recebe a mesma seed sempre, então para gerar um valor diferente deve dar uma seed diferente, nesse caso baseado no horario
	//atual
	
	srand(time(NULL)); //srand() para colocar a seed, time() para pegar o horario atual
	
	int aleatorio=rand()%100; //para ir ate 0 a 99
	
	printf("%d\n",aleatorio);
	
	int dado=(rand()%6)+1; //para tirar o 0, e ir de 1 a 6
	printf("\n%d\n",dado);
	
	int caraCoroa=(rand()%2)+1;
	
	if(caraCoroa==1){
		printf("\nCara\n");
	}else{
		printf("\nCoroa\n");
	}
	
	int ale2=(rand()%(20-10+1))+10; //começanco com 10 ate 20, %maximo-minimo+1))+minimo
	printf("\n%d\n",ale2);
	
	return 0;
}
