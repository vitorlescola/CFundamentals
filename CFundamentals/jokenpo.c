#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	srand(time(NULL));
	
	printf("-----JOGO DE JOKENPÔ-----\n\n");
	
	int bot=(rand()%3)+1; //1 pedra, 2 papel, 3 tesoura
	int escolha;
	
	do{
		printf("Escolha: \n1:pedra \n2:papel \n3:tesoura: ");
		scanf("%d",&escolha);
		if(escolha<1||escolha>3){
			printf("\nOpção invalida\n");
		}
	}while(escolha<1||escolha>3);
	 
	 switch(escolha){
	 	case 1:
	 		printf("\n(Player)Pedra VS ");
	 		break;
	 	case 2:
	 		printf("\n(Player)Papel VS ");
	 		break;
	 	case 3:
		    printf("\n(Player)Tesoura VS ");
			break;	
	 }
	 
	 switch(bot){
	 	case 1:
	 		printf("Pedra(BOT)\n");
	 		break;
	 	case 2:
	 		printf("Papel(BOT)\n");
	 		break;
	 	case 3:
		    printf("Tesoura(BOT)\n");
			break;	
	 }
	 
	 if(escolha==bot){
	 	printf("\nIMPATE\n");
	 }else if((escolha==1&&bot==3)||(escolha==2&&bot==1)||(escolha==3&&bot==2)){
	 	printf("\nVOCÊ VENCEU!!!\n");
	 }else{
	 	printf("\nBOT VENCEU!!!\n");
	 }
	
	return 0;
}
