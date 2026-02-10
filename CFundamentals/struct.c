#include <stdio.h>
#include <locale.h>

typedef struct {  //struct é um pseudo poo, é como um vetor que poder salvar valores de tipod diferentes
	int num;
	char letter;  //uma struct pode ter outra struct como um membro
}Test;

typedef struct{
	char nome[50];  //50 bytes
	int idade;      //4 bytes
	char ano;       //1 byte
	char sala;      //1 byte
}Aluno;

void escrever(Aluno aluno);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	Test n1;  //criando variavel do tipo Teste
	
	n1.num=5;  //usar . para acessar os membros da struct
	n1.letter='A';
	
	printf("%d",n1.num);
	printf("\n%c\n",n1.letter);
	
	Aluno a1={"Fulano da silva", 15, '9','A'};
	Aluno a2={"Fulana da silva", 16, '1','B'};
	Aluno a3={"joao rocha", 17, '2','C'};  //podem ser salvado em um vetor(Alunos alunos[]={{...},{...},{...}})
	                                       //e para acessar os valores utiliza um for alunos[i].nome ...
	
	escrever(a1);
	escrever(a2);
	escrever(a3);
	
	printf("\n%zu",sizeof(Aluno));  //60 bytes, o tamanho de uma struct é a soma dos membros + extras que o copilador adiciona para o CPU ler mais rapido
	
	return 0;
}

void escrever(Aluno aluno){
	printf("\nNome:%s",aluno.nome);  //da para usar ponteiro com struct, neste caso usa -> em vez de .
	printf("\nIdade:%d",aluno.idade);
	printf("\nAno:%c",aluno.ano);
	printf("\nSala:%c",aluno.sala);
	printf("\n");
}
