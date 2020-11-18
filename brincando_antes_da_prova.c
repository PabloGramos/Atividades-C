#include<stdio.h>
#include<stdlib.h>



int main(){
	int n,i,soma=1,total;
	
	printf("Digite um numero: ");
	scanf("%d",&n);
	
	printf("Escolha uma opcao: ");
	scanf("%d",&i);
	
	if(i == 1){
		
	}
	else if(i == 2){
		
	}
	else{
		printf("Opcao invalida!\n");
	}
	for(i=1;i<=n;i++){
		printf("%d\n",i);	
		soma *= i;
	}
	printf("O valor do fatorial de %d e %d \n",n,soma);
	return 0;
}
