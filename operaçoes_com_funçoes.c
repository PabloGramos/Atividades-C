#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void inicio(void);
int soma(int n1, int n2);
int sub(int n1, int n2);
int mult(int n1, int n2);
float divi(float n1, float n2);

int main(void){
	int v1,v2,resultado,op=0,cont;
	
	while(op == 0){
		inicio();
		printf("Digite a operacao escolhida: \n");
		scanf("%d", &op);
		while(op == 1){
			printf("Digite um numero inteiro: \n");
			scanf("%d", &v1);
			printf("Digite outro numero inteiro: \n");
			scanf("%d", &v2);
			resultado =(v1+v2);
			printf("%d + %d = %d\n",v1,v2,resultado);
			printf("1-Continuar ou 0-Menu \n");
			scanf("%d",&cont);
			if(cont == 0){
				op = 0;
				break;
			}
			
		}
		while(op == 2){
			printf("Digite um numero inteiro: \n");
			scanf("%d", &v1);
			printf("Digite outro numero inteiro: \n");
			scanf("%d", &v2);
			resultado = (v1-v2);
			printf("%d - %d = %d\n",v1,v2,resultado);
			printf("1-Continuar ou 0-Menu \n");
			scanf("%d",&cont);
			if(cont == 0){
				op = 0;
				break;
			}
		}
		while(op == 3){
		printf("Digite um numero inteiro: \n");
		scanf("%d", &v1);
		printf("Digite outro numero inteiro: \n");
		scanf("%d", &v2);
		resultado = (v1*v2);
		printf("%d x %d = %d\n",v1,v2,resultado);
		printf("1-Continuar ou 0-Menu \n");
			scanf("%d",&cont);
			if(cont == 0){
				op = 0;
				break;
			}
		}
		while(op == 4){
		printf("Digite um numero inteiro: \n");
		scanf("%d", &v1);
		printf("Digite outro numero inteiro: \n");
		scanf("%d", &v2);
		if (v2 == 0){
			printf("Nao se pode dividir por 0\n");
			break;
		}
		resultado = (v1/v2);
		printf("%d / %d = %f\n",v1,v2,resultado);
		printf("1-Continuar ou 0-Menu \n");
		scanf("%d",&cont);
		if(cont == 0){
			op = 0;
			break;
		}
		}
		if(op == 5){
			break;
		}
		else{
			printf("Opcao invalida!\n\n");
			op=0;
		}
	}
	printf("Encerrando...\n");
	
	return 0;
}

void inicio(void){
	printf("**************************************\n");
	printf("*********OPERACOES*MATEMATICAS********\n");
	printf("**************************************\n");
	printf("1  Soma\n");
	printf("2  Subtracao\n");
	printf("3  Multiplicacao\n");
	printf("4  Divisao\n");
	printf("5  Sair\n");
}


int houston(int n1, int n2){
	int resu;
	resu = n1*n2;
	return(resu);
	
}
