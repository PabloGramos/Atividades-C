#include<stdio.h>
#include<stdlib.h>

int main() {
	int cont;
	
	do {
		printf("------------Menu de Acesso------------\n\n");
		printf("1 Cadastro\n");
		printf("2 Consultar\n");
		printf("3 Vendas\n");
		printf("4 Sair\n");
		printf("---------------------------------------\n");
		scanf("%d", &cont);
			printf("%d\n", cont);
			
		switch (cont){
		case 1:
			printf("Cadastro de Alunos\n");
			printf("------------------------\n");
		break;
		case 2:
			printf("Consultar Alunos Cadastrados\n");
			printf("------------------------\n");
		break;
		case 3:
			printf("Vendas de Apostilas\n");
			printf("------------------------\n");
		break;
		case 4:
			printf("Saindo do Sistema\n");
		break;
		
		default:
			printf("Valor Invalido\n");
	}	
		
	}
	
	while(cont!=4);
		printf("Saindo\n");
	
	
	return 0;
}
