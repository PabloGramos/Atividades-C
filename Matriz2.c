#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int matriz[3][3],i,j;
	// matriz de 3 x 3 
	// lendo os valores atribuidos 
	printf("----------- Inicio ---------------\n\n");
	printf("Ditide os valores da Matriz\n");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++){
		printf("Digite o Valor da Linha %d coluna %d = ",i,j);
		scanf("%d",&matriz[i][j]);
	}
	
	
	printf("-------Lendo os Valores da Matriz  ---------------\n");
	
	for(i=0;i<3;i++)
	for(j=0;j<3;j++){
		printf("O Valor da Linha %d coluna %d = %d\n",i,j,matriz[i][j]);
	
	}
	
	return 0;
	
	
}
