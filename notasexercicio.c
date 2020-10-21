#include<stdio.h>
#include<stdlib.h>

int main(){
	float notas=0,media=0;
	int n;
	printf("Calculador de medias\n\n");
	for(n=0;n<4;n++){
		printf("Digite a %d%c nota: ",n+1,167);
		scanf("%f", &notas);
		media+=notas;
	}
	printf("a media das %d notas e %f\n\n", n, media/4);
	return 0;
}
