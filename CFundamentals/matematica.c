#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//sqrt() raiz quadrada (SQuare RooT)
	
	float n;
	float resultado;
	
	printf("Escreva um numero: ");
	scanf("%f",&n);
	
	if(n>=0){
		resultado=sqrt(n);
		printf("\n%f\n",resultado);
	}else{
		printf("\nNão existe raiz de numeros negativos\n");
	}
	
	//pow() potencia (power)
	
	printf("\nEscreva um numero: ");
	scanf("%f",&n);
	
	resultado=pow(n,2); //pow(variavel,potencia de x)
	
	printf("\n%f\n",resultado);
	
	//round() arredondar 
	
	printf("\nEscreva um numero decimal: ");
	scanf("%f",&n);
	
	resultado=round(n);
	
	printf("\n%f\n",resultado);
	
	//ceil() arredondar para cima (1,4 vira 2)
	
	printf("\nEscreva um numero decimal: ");
	scanf("%f",&n);
	
	resultado=ceil(n);
	
	printf("\n%f\n",resultado);
	
	//floor() arredondar para baixo (1,6 vira 1))
	
	printf("\nEscreva um numero decimal: ");
	scanf("%f",&n);
	
	resultado=floor(n);
	
	printf("\n%f\n",resultado);
	
	//abs() valor absoluto (da a distancia de zero como um valor positivo)
	
	printf("\nEscreva um numero: ");
	scanf("%f",&n);
	
	resultado=abs(n);
	
	printf("\n%f\n",resultado);
	
	//log() logaritmo
	
	printf("\nEscreva um numero: ");
	scanf("%f",&n);
	
	resultado=log(n);
	
	printf("\n%f\n",resultado);
	
	//sin() cos() tan() trigonometria
	
	return 0;
}
