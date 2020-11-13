#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main () {
	char nome[100];
	int n=0;
	printf("Digite seu nome: \n");
	gets(nome);
	n = strlen(nome);
	while(nome[n] =='\0'){
		n--;
	}
	printf("Seu nome tem %d letras\n",n);
	return 0;
}
