#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/*
	%d int
	%f float (6 digitos depois do zero por padr�o)
	%lf double (long float)
	%c char
	%s string
	
	%3d largura (3 como exemplo), n�o corta o numero (exe n=100, %1d apare�e 100, mas se n=1 ent�o aparece (  1))
	%-3d largura espa�o ajustado (1  )
	%03d largura come�ando com 0
	%+d se for positivo come�a com + e se for negativo come�a com -
	
	%.2f ajusta a quantidade de numeros ap�s o zero (arredondando eles)
	*/
	
	int n1=1;
	int n2=10;
	int n3=100;
	
	int n4=-1;
	int n5=10;
	int n6=-100;
	
	float f1=3.333333;
	float f2=25.3323223;
	float f3=32.353455;
	
	printf("%3d\n",n1);
	printf("%3d\n",n2);
	printf("%3d\n",n3);
	
	printf("\n%2d\n",n1);
	printf("%2d\n",n2);
	printf("%2d\n",n3);
	
	printf("\n%-3d\n",n1);
	printf("%-3d\n",n2);
	printf("%-3d\n",n3);
	
	printf("\n%03d\n",n1);
	printf("%03d\n",n2);
	printf("%03d\n",n3);
	
	printf("\n%+d\n",n4);
	printf("%+d\n",n5);
	printf("%+d\n",n6);
	
	printf("-------------------------------------------------------------------------------------------------------------------");
	
	printf("\n%f\n",f1);
	printf("%f\n",f2);
	printf("%f\n",f3);
	
	printf("\n%.2f\n",f1);
	printf("%.2f\n",f2);
	printf("%.2f\n",f3);
	
	return 0;
}
