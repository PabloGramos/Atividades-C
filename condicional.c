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
		
	}
		
	while(cont!=4);
		printf("Saindo\n");
	
	
	return 0;
}
