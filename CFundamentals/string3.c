#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char s1[50];
	char sub1='a';
	
	printf("Escreva uma string: ");
	fgets(s1,sizeof(s1),stdin);
	s1[strcspn(s1,"\n")]='\0';  //strcspn() retorna o tamanho da string ate um caracter especifico,
	                            //='\0' substitui o \n do enter por \0 
	/*printf("Escreva uma substring: ");
	fgets(sub1,sizeof(sub1),stdin);
	sub1[strcspn(sub1,"\n")]='\0';*/
	
	char *pS1=strchr(s1,'a');  //strchr() retorna a posição da primeira ocorrencia do caracter
	//e tbm pode ser feita com duas var,  char *pS1=strchr(s1,sub1);
	
	if(pS1){  //vendo se existe
		printf("\nSubstring encontrada %c\n",*pS1);
	}else{
		printf("\nSubstring não encontada\n");
	}
	
	char *pS1b=strrchr(s1,sub1);  //strchr() retorna a posição da ultima ocorrencia do caracter
	
	if(pS1b!=NULL){  //vendo se existe
		printf("\nSubstring encontrada %c\n",*pS1);
	}else{
		printf("\nSubstring não encontada\n");
	}
	
	char s2[]="teste oi";
	char sub2[]="oi";
	char *pS2=strstr(s2,sub2);  //strstr() retorna a primeira ocorrencia de uma substring, tbm strstr(s2,"oi");
	
	if(pS2){
		printf("\nSubstring encontrada %s\n",pS2);
	}else{
		printf("\nSubstring não encontada\n");
	}
	
	char s3[50];
	
	printf("\nEscreva uma frase: ");
	fgets(s3,sizeof(s3),stdin);
	s3[strcspn(s3,"\n")]='\0';
	
	char *token=strtok(s3," ");  //strtok() separa a string em tokens com base em delimitadores
	
	while(token!=NULL){  //enquanto token não for vazio
		printf("\n%s",token);  //escreva a primeira posição do token
		token=strtok(NULL," ");  //vai pro proximo, quando chega no ultimo o proximo é NULL, e termina o loop
	}
	
	return 0;
}
