#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char lugar[50];
	char verbo[50];
	char adjetivo1[50];
	char adjetivo2[50];
	char adjetivo3[50];
	
	printf("Escreva um lugar: ");
	fgets(lugar,sizeof(lugar),stdin);
	lugar[strlen(lugar)-1]='\0';
	
	printf("Escreva um adjetivo: ");
	fgets(adjetivo1,sizeof(adjetivo1),stdin);
	adjetivo1[strlen(adjetivo1)-1]='\0';
	
	printf("Escreva um verbo: ");
	fgets(verbo,sizeof(verbo),stdin);
	verbo[strlen(verbo)-1]='\0';
	
	printf("Escreva outro adjetivo: ");
	fgets(adjetivo2,sizeof(adjetivo2),stdin);
	adjetivo2[strlen(adjetivo2)-1]='\0';
	
	printf("Escreva mais um adjetivo: ");
	fgets(adjetivo3,sizeof(adjetivo3),stdin);
	adjetivo3[strlen(adjetivo3)-1]='\0';
	
	printf("\nHoje eu foi ao %s, estava %s, %s e %s, e la eu foi %s",lugar,adjetivo1,adjetivo2,adjetivo3,verbo);
	
	/*printf("\n%s",adjetivo1);
	printf("\n%s",substantivo);
	printf("\n%s",verbo);
	printf("\n%s",adjetivo2);
	printf("\n%s",adjetivo3);*/
	
	return 0;
}
