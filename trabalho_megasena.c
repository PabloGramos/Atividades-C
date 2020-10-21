#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

int main(){
	int i,j,cont,jogos;
	printf("Quantidade de jogos\n");
	scanf("%d",&jogos);
	for (j=0;j<jogos;j++){
		cont+=1;
		printf("\n\nGerando Jogo %d \n",cont);
		srand(time(NULL));
		for (i=0;i<6;i++){
			printf("%d ",rand()%60);
		}
	}
	return 0;
}
