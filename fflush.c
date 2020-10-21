#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	// criando a estrutura (struct)
	struct cad_aluno{
		char nome[50];
		char disciplina[20];
		float nota;
	};
	// criando variavel que sera tipo cad_aluno
	struct cad_aluno aluno;
	// cad_aluno está incluindo em aluno
	
	printf("Cadastro de Aluno\n ");
	printf("Nome do aluno ...:\n");
	fflush(stdin);
	fgets(aluno.nome,40,stdin);
	
	printf("Disciplina... ...:\n");
	fflush(stdin);
	fgets(aluno.disciplina,40,stdin);
	printf("Nota do Aluno...:\n");
	scanf("%f", &aluno.nota);
	// mostra na tela
	// lendo os dados da estrutura 
	printf("Disciplina... ...:\n");
	fflush(stdin);
	fgets(aluno.disciplina,40,stdin);
	printf("Nota do aluno....:\n");
	scanf("%f", &aluno.nota);
	//mostra NA TELA 
	//lendo os dados da estrutura
	printf("Dados do Aluno\n");
	printf("Nome do Aluno...: %s\n",aluno.nome);
	printf("Disciplina......: %s\n",aluno.disciplina);
	printf("Nota do Aluno...: %.2f\n",aluno.nota);
	getch();
	return 0;
 }


