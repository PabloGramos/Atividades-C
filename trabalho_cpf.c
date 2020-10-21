#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

int main(){
	int i,l,c = 0,y,total,nv1,nv2,numcpf[8];
	printf("*******************Gerador de CPF*******************\n");
	srand(time(NULL));
	printf("1 - Rio Grande do Sul\n");
	printf("2 - Distrito Federal, Goias, Mato Grosso, Mato Grosso do Sul e Tocantins\n");
	printf("3 - Amazonas, Para, Roraima, Amapa, Acre e Rondonia\n");
	printf("4 - Ceara, Maranhao e Piaui\n");
	printf("5 - Paraiba, Pernambuco, Alagoas e Rio Grande do Norte\n");
	printf("6 - Bahia e Sergipe\n");
	printf("7 - Minas Gerais\n");
	printf("8 - Rio de Janeiro e Espirito Santo\n");
	printf("9 - Sao Paulo\n");
	printf("10 - Parana e Santa Catarina\n\n");
	printf("Digite a opcao de seu estado ");
	scanf("%d",&l);
	l= l - 1;
	for (i=0;i<8;i++){
		c += 1;
		numcpf[8] = rand()%10;
		if(c==3){
			printf("%d . ",numcpf[8]);
		}
		if(c==6){
			printf(" . ");
		}
		else{
			printf("%d ",numcpf[8]);
		}
	}
	total = 0;
	y = 10;

	for (i = 0; i <= 8; i++) {
   		total = total + (numcpf[i] * y);
   		y--;
   	}

	if ((total % 11) < 2) {
   		nv1 = 0;
	} else {
   		nv1 = 11 - (total % 11);
	}
	
	y = 11;
	total = 0;

	for (i = 0; i <=8; i++) {
   		total = total + (numcpf[i] * y);
   		y--;
   	}
	total = total + (nv1 * y);
	if ((total % 11) < 2) {
   		nv2 = 0;
 	} 
	else {
   		nv2 = 11 - (total % 11);
	}
	printf("%d - ",l);
	printf("%d %d",nv1,nv2);
	return 0;
}
