#include <stdio.h>  //FILE
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	FILE *pArquivo=fopen("saida.txt","w");  //criar ponteiro do tipo FILE, fopen(nome do arquivo, modo (oq faz w-escreve))
	
	char texto[]="Texto de teste\n 1 2 3\n teste";
	
	if(pArquivo==NULL){  //se não conseguir criar retorno NULL
		printf("\nErro ao criar arquivo\n");
		
		return 1;  //saida
	}
	
	fprintf(pArquivo,"%s",texto);  //file printf, (ponteiro a um arquivo, especificador de formato(tipo), texto)
	                               //o arquivo cria mesmo sem isso, mas fica vazio
	
	printf("\nArquivo criado com sucesso!\n");
	
	fclose(pArquivo);  //sempre fechar arquivo depois de abrir
	
	FILE *pArquivoR=fopen("C:\\Users\\Vitor\\Downloads\\leituraC.txt","r");  //r=ler, tambem pode pegar arquivo pelo seu local
	char buffer[100]={0};  //temporariamente arquiva o texto no arquivo
	
	if(pArquivoR==NULL){
		printf("\nErro ao ler arquivo\n");
		
		return 1;
	}
	
	while(fgets(buffer,sizeof(buffer),pArquivoR)!=NULL){  //para ler arquivo usa o fgets(variavel onde o texto
	                                                    //esta salvo, o tamamho dela, o ponteiro a ela);
		printf("%s",buffer);
	}
	
	fclose(pArquivoR);
	
	//a=append, adiciona conteudo ao final de um arquivo, usa fprintf() igual o w
	
	return 0;
}
