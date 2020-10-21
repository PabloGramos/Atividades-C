#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	// criando a estrutura (struct)
	struct endereco{
		char endereco[50];
		char numero_res[20];
		char cidade[50];
	};
	struct data_nas{
		int dia;
		int mes;
		int ano;
	};
	struct cadastro{
		char nome[50];
		char cpf[20];
		struct endereco end;
		struct data_nas dt;
	};
	// criando variavel que sera tipo cad_aluno
	struct cadastro cad;
	// cad_aluno está incluindo em aluno
	
	printf("Cadastro de Cliente\n ");
	printf("Nome do Cliente...:\n");
	fflush(stdin);
	fgets(cad.nome,40,stdin);
	
	printf("CPF...:\n");
	fflush(stdin);
	fgets(cad.cpf,40,stdin);
	printf("Data de nascimento dia mes ano Ex 01 06 1970.:\n");
	scanf("%d %d %d", &cad.dt.dia,&cad.dt.mes,&cad.dt.ano);
	printf("Endereco...:\n");
	fflush(stdin);
	fgets(cad.end.endereco,40,stdin);
	printf("Numero residencial...:\n");
	fflush(stdin);
	fgets(cad.end.endereco,40,stdin);
	printf("Cidade...:\n");
	fflush(stdin);
	fgets(cad.end.endereco,40,stdin);



	printf("Dados do Cliente\n");
	printf("Nome do Cliente..........: %s\n",cad.nome);
	printf("CPF......................: %s\n",cad.cpf);
	printf("Data de nascimento.......: %d - %d - %d\n",cad.dt.dia,cad.dt.mes,cad.dt.ano);
	printf("Endereco.................: %s %s Cidade %s",cad.end.endereco,cad.end.numero_res,cad.end.cidade);
	getch();
	return 0;
 }


