#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main() 
{
	float a, b, rr, r[100];
	int j=0;
	printf("+----Meu primeiro programa em C----\n");
	printf("|                                 |\n");
	printf("+---------------------------------+\n");
	printf("Digite um numero Ex 1.3\n");
	scanf("%f", &a);
	printf("Digite outro numero Ex 1.3\n");
	scanf("%f", &b);
	//operaçoes indiretas
	rr=a+b;
	printf("A soma dos numeros digitados e %.2f\n", rr);
	rr=a-b;
	printf("A subtracao dos numeros digitados e %.4f\n", rr);
	rr=a*b;
	printf("A multiplicacao dos numeros digitados e %.2f\n", rr);
	rr=a/b;
	printf("A divisao dos numeros digitados e %.3f\n", rr);
	
	for(j=0;j<10;j++)
	r[j] = pow(a,j);
	
	for(j=0;j<10;j++)
	printf("a potencia de A = %.2f em %d e %.3f\n", a, j, r[j]);
	
	getch();
	return 0;
}
