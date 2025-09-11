#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//arrays mult/2d são arrays onde cada elemento é uma array, para matrizes/grids de data
	int matrix[][3]={{1,2,3},{4,5,6},{7,8,9}};  //declarado com dois [][]={{},{},{}}; numero de colunas DEVE ser declarado [linha][coluna]
	                                            //cordenadas (0,0)(0,1)(0,2)(1,0)(1,1)(1,2)(2,0)(2,1)(2,2)                                           
	int i;
	int j;
	 
	printf("%d\n\n",matrix[0][0]);
	 
	for(i=0;i<3;i++){ //linha
	    for(j=0;j<3;j++){ //coluna
	 		printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	
	int linhas;
	int colunas;
	
	printf("\nEscreva o numero de linhas: ");
	scanf("%d",&linhas);
	
	printf("Escreva o numero de colunas: ");
	scanf("%d",&colunas);
	
	int numeros[linhas][colunas];
	
	printf("\n");
	
	for(i=0;i<linhas;i++){
		for(j=0;j<colunas-1;j++){
			printf("Escreva o valor de (%d,%d): ",i,j);
		    scanf("%d",&numeros[i][j]);
		}
		printf("Escreva o valor de (%d,%d): ",i,j);
		scanf("%d",&numeros[i][j]);
	}
	
	printf("\n");
	
	for(i=0;i<linhas;i++){
		for(j=0;j<colunas;j++){
			printf("%d ",numeros[i][j]);
		}
		printf("\n");
	}
	
    return 0;
}
