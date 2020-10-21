#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void inicio(void);
int houston(int n1, int n2);

int main(void){
	int v1,v2,resultado;
	inicio();
	printf("Digite um numero inteiro: \n");
	scanf("%d", &v1);
	printf("Digite outro numero inteiro: \n");
	scanf("%d", &v2);
	resultado = houston(v1,v2);
	
	printf("O resultado eh %d\n",resultado);
	
	return 0;
}

void inicio(void){
	printf("**************************************\n");
	printf("************FUNCOES**EM**C************\n");
	printf("**************************************\n");
}

int houston(int n1, int n2){
	int resu;
	resu = n1*n2;
	return(resu);
	
}

