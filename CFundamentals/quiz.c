#include <stdio.h>
#include <locale.h>
#include <ctype.h> //para transformar em maiusculo

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char perguntas[][100]={"2+2?","4*2?","Raiz de 25?","x+10=19, x=?","50/2?"};
	char opcoes[][100]={"A 1\nB 2\nC 3\nD 4","A 5\nB 8\nC 10\nD 12","A 50\nB 10\nC 5\nD 15","A 9\nB 5\nC 19\nD -9","A 5\nB 15\nC 25\nD 30"};
	char correta[]={'D','B','C','A','C'};
	char escolha[5]={0};
	int pontos=0;
	int i;
	
	for(i=0;i<5;i++){
		printf("-----QUIZ MATEMATICA-----\n\n");
		
		printf("%s\n",perguntas[i]);
		printf("\n%s",opcoes[i]);
		
		printf("\n\nAlternativa: ");
		scanf(" %c",&escolha[i]);
		escolha[i]=toupper(escolha[i]);  //toupper() transforma em maiusculo, To Upper Case
		
		printf("\n");
		
		if(escolha[i]==correta[i]){
			pontos++;
		}
		system("cls");
	}
	
	system("cls");
	
	printf("Você acertou %d de 5 pergunta(s)!\n",pontos);
	
	return 0;
}
