#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//int notas[5] array vazia tem que ter tamanho dito
	int aluno;
	int i;
	float media=0.0;
	
	do{
		printf("Escreva a quantidade de alunos: ");
	    scanf("%d",&aluno);
	}while(aluno<=0);
	
	
	int notas[aluno];  //pode ser feito assim
	
	printf("\n");
	
	for(i=0;i<aluno;i++){
		printf("Escreva a nota do aluno %d: ",i+1);
		scanf("%d",&notas[i]);
		
		media+=notas[i];
	}
	
	media/=aluno;
	
	printf("\nA media da nota dos alunos é %.2f\n\n",media);
	
	for(i=0;i<aluno;i++){
		printf("%dº:%d\n",i+1,notas[i]);
	}
	
	return 0;
}
