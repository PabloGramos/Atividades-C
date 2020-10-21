#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int matriz[3][3] = {1,3,4,5,7,8,4,5,3};
	// Matriz de 3 x 3 
	// lendo os valores atribuidos
	printf("----------------- Inicio -------------------\n");
	printf("na linha 0 coluna 0 = %d\n",matriz[0][0]);
	printf("na linha 0 coluna 1 = %d\n",matriz[0][1]);
	printf("na linha 0 coluna 2 = %d\n",matriz[0][2]);
	printf("na linha 1 coluna 0 = %d\n",matriz[1][0]);
	printf("na linha 1 coluna 1 = %d\n",matriz[1][1]);
	printf("na linha 1 coluna 2 = %d\n",matriz[1][2]);
	printf("na linha 2 coluna 0 = %d\n",matriz[2][0]);
	printf("na linha 2 coluna 1 = %d\n",matriz[2][1]);
	printf("na linha 2 coluna 2 = %d\n",matriz[2][2]);
	printf("---------------- Fim ------------------------\n");
	
	return 0;
}
