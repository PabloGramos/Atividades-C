#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

int main(){
	int l;
	int cpf[9], soma, soma2, resto, d1, d2, i, j, qtd, cont;
	printf("***Gerador de CPF***\n");
	srand(time(NULL));
	printf("0 - Rio Grande do Sul\n");
	printf("1 - Distrito Federal, Goias, Mato Grosso, Mato Grosso do Sul e Tocantins\n");
	printf("2 - Amazonas, Para, Roraima, Amapa, Acre e Rondonia\n");
	printf("3 - Ceara, Maranhao e Piaui\n");
	printf("4 - Paraiba, Pernambuco, Alagoas e Rio Grande do Norte\n");
	printf("5 - Bahia e Sergipe\n");
	printf("6 - Minas Gerais\n");
	printf("7 - Rio de Janeiro e Espirito Santo\n");
	printf("8 - Sao Paulo\n");
	printf("9 - Parana e Santa Catarina\n\n");
	printf("Digite a opcao de seu estado ");
	scanf("%d",&l);
	printf("digite a quantidade de CPF:   ");
	scanf("%d",&qtd);
	cpf[8]=l;
	for(cont=0;cont<qtd;cont++)
	{
		for(i=0;i<8;i++)
		cpf[i]=rand()%9;//gera 9 numeros aleatorio
		soma=0,soma2=0;
		
		//calcunando primeiro digito
		
		j=10;
			for(i=0;i<9;i++)
			{
				soma+=cpf[i]*j;
				j--;
			}
		resto=soma % 11;
		if(resto >2)
		d1=11-resto;
		else
		d1=0;
		// calculando segundo digito
		j=11;
			for(i=0;i<9;i++)
			{
				soma2+=cpf[i]*j;
				j--;
			}
			soma2+=d1*2;
			resto=soma2 % 11;
			if(resto >2)
			d2=11-resto;
			else
			d2 = 0;
			printf("%d : ",cont+1);
			 // imprime cpf's
			 	for(i=0;i<9;i++)
			 	{
			 		printf("%d",cpf[i]);
			 		if(i+1==3)
			 		printf(".");
			 		if(i+1==6)
			 		printf(".");
			 		
			 	}
			 	printf(" - %d%d\n",d1,d2);//imprime
	}
	
	system("pause");
	return 0;
}
