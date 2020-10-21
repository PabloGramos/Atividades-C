#include<stdio.h>
#include<stdlib.h>

int main(){
	int numero, resultado, k=1, primo;
	
	printf("Digite um numero inteiro\n");
	scanf("%d",&numero);
	resultado = numero%2;
	if(resultado == 0){
		printf("o numero %d e par\n",numero);
	}
	else{
		printf("O numero %d e impar\n",numero);
	}
	primo=0;
    for(k=1; k<=numero; k++)
        if((numero%k)==0)
            primo++;
    if(primo>2)
        printf("%d nao e primo\n",numero);
    else
        printf("%d e primo\n",numero);
        primo=0;
        
	return 0;
}
