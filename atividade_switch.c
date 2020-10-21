#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	int cont,n1,n2,n3,n4,area,hipo,hipote;
	float soma;

	do {
		printf("------------Menu de Acesso------------\n\n");
		printf("1 Calcular media simples\n");
		printf("2 Calcular uma area\n");
		printf("3 Calcular hipotenusa\n");
		printf("4 Sair\n");
		printf("---------------------------------------\n");
		printf("Escolha uma opcao\n");
		scanf("%d",&cont);
			printf("%d\n", cont);
	
		switch(cont){
		case 1:
		printf("Media de 4 numeros\n");
		printf("Digite um valor: \n");
			scanf("%d",&n1);
		printf("Digite outro valor: \n");
			scanf("%d",&n2);
		printf("Digite mais um valor: \n");
			scanf("%d",&n3);
		printf("Digite o ultimo valor: \n");
			scanf("%d",&n4);
		soma=(n1+n2+n3+n4)/4;
		printf("A media dos valores digitados e: %.2f\n\n", soma);
		break;
		
		case 2:	
		printf("Calculo de area\n");
		printf("Digite o comprimento em metros: \n");
			scanf("%d",&n1);
		printf("Digite a largura em metros: \n");
			scanf("%d",&n2);
		area=n1*n2;
		printf("A area e: %dm2\n\n", area);
		break;
		
		case 3:
		printf("Calculo da Hipotenusa de um triangulo retangulo\n");
		printf("Digite a base do triangulo: \n");
			scanf("%d",&n1);
		printf("Digite a altura do triangulo: \n");
			scanf("%d",&n2);
		hipo=(n1*n1)+(n2*n2);
		printf("%d\n",hipo);
		hipote=sqrt(hipo);
		printf("Valor da Hipotenusa e: %d\n", hipote);
		break;
		}
		
	}
	while(cont!=4);
	return 0;
}
