#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char coordenadas [10][10];
	int linha,coluna;
	int i,j;
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			coordenadas[i][j]='O';
		}
	}
	
	do{
		printf("  ABCDEFGHIJ\n");
		for(i=0;i<10;i++){
			printf("%d ",i);
		    for(j=0;j<10;j++){
			    printf("%c",coordenadas[i][j]);
		    }
           printf("\n");
	    }
	
		printf("\nEscreva as coordenadas da linha: ");
	    scanf("%d", &linha);
	
	    printf("Escreva as coordenadas da coluna: ");
	    scanf("%d", &coluna);
	
	    if((coluna==6||coluna==7)&&linha==5){
	    	coordenadas[linha][coluna]='A';
		}else{
			coordenadas[linha][coluna]='X';
		}
	    
	    system("cls");
	}while(coordenadas[5][6]=='O'||coordenadas[5][7]=='O');
	
	printf("  ABCDEFGHIJ\n");
	for(i=0;i<10;i++){
		printf("%d ",i);
		    for(j=0;j<10;j++){
			    printf("%c",coordenadas[i][j]);
		    }
           printf("\n");
	    }
	    
	    printf("\nVocê venceu!");
	
	return 0;
}
