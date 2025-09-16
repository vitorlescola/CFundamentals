#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char string1[50]; //todas mudam o valor da string, e podem ser utilizadas em qualquer lugar
	char string2[50];
	
	printf("Escreva um texto: ");
	fgets(string1,sizeof(string1),stdin);
	string1[strlen(string1)-1]='\0';
	
	
	printf("Escreva outro texto: ");
	fgets(string2,sizeof(string2),stdin);
	string2[strlen(string2)-1]='\0';
	
	//strlwr(string1);   STRing LoWeR case, transmorma string em minuscolo
	//strupr(string2);   STRing UPpeR case, transmorma string em maiuscolo
	
	printf("\n%s\n\n%s",strlwr(string1),strupr(string2));
	
	//strcat(string1,strin2);   STRing conCATenar junta a string2 no final da string1
	
	printf("\n\n%s\n",strcat(string1,string2));
	
	//strncat(string1,string2,1);    junta uma quantidade determinada de caracteres da string2 ao final da string1
	
	system("pause"); //só avança se apertar algo
	system("cls");
	
	printf("Escreva um texto: ");
	fgets(string1,sizeof(string1),stdin);
	string1[strlen(string1)-1]='\0';
	
	
	printf("Escreva outro texto: ");
	fgets(string2,sizeof(string2),stdin);
	string2[strlen(string2)-1]='\0';
	
	printf("\n\n%s\n",strncat(string1,string2,1));
	
	//strcpy(string1,string2); STRing CoPY copia string2 para string1
	
	printf("\n\n%s\n",strcpy(string1,string2)); //substitui os valores da string1 pelos da string2
	
	system("pause");
	system("cls");
	
	printf("Escreva um texto: ");
	fgets(string1,sizeof(string1),stdin);
	string1[strlen(string1)-1]='\0';
	
	
	printf("Escreva outro texto: ");
	fgets(string2,sizeof(string2),stdin);
	string2[strlen(string2)-1]='\0';
	
	//strncpy(string1,string,1);  STRing Number CoPY, copia uma quantidade determinada de caracteres da string2 a string1
	strncpy(string1,string2,1); //substitui o primeiro caractrer da string1 com o primeiro caracter da string2
	
	printf("\n\n%s\n",string1);
	
	system("pause");
	system("cls");
	
	printf("Escreva um texto: ");
	fgets(string1,sizeof(string1),stdin);
	string1[strlen(string1)-1]='\0';
	
	
	printf("Escreva outro texto: ");
	fgets(string2,sizeof(string2),stdin);
	string2[strlen(string2)-1]='\0';
	
	//strset(string1, 'x');  STRing SET substitui todos os caracteres de uma string por um determinado caracter
	//strnset(string1,'x',1); substitui os primeiros n caracteres de uma string por um caracter determinado
	
	printf("\n%s\n",strnset(string1,'x',5));
	
	//strrev(string2); STRing REVerse inverte uma string
	
	printf("\n%s\n",strrev(string2));
	
	int numero;
	
	system("pause");
	system("cls");
	
	printf("Escreva um texto: ");
	fgets(string1,sizeof(string1),stdin);
	string1[strlen(string1)-1]='\0';
	
	
	printf("Escreva outro texto: ");
	fgets(string2,sizeof(string2),stdin);
	string2[strlen(string2)-1]='\0';
	
	numero=strlen(string1); //STRing LENgth rotorna o tamamho da string como inteiro
	
	printf("\n%d\n",numero);
	
	//strcmp(string1,strin2);  STRing CoMPare compara todos os caracteres de uma string, se for igual retorna 0, se difenete 
	//retorna outro valor
	
	if(strcmp(string1,string2)==0){
		printf("\nAs string são iguais\n");
	}else{
		printf("\nAs strings são diferentes\n");
	}
	
	printf("\n%s\n",(strcmp(string1,string2)==0)?"iguais":"diferentes");
	
	//strncmp(string1,string2,5); compara n caracteres
	
	printf("\n%s\n",(strncmp(string1,string2,5)==0)?"Os primeiros 5 caracteres são iguais":"Os primeiros 5 caracteres são diferentes");
	
	//strcmpi(string1,string2);  string compare ingnora maiusculo e minuscolo, não case sensitive
	//strncmpi(string1,string2,5)  compara n caracteres ingnorando maiuscolo e minuscolo
	
	printf("\n%s\n",(strcmpi(string1,string2)==0)?"Iguais":"Diferentes");
	
	return 0;
}
