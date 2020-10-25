#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int i,j;
	char nome[100],m[100];
	char materia[100],n[100];
	float matriz[1][4],media,soma;
	printf("----------- Boletim ---------------\n\n");
	printf("Nome do aluno: \n");
	scanf("%s",&nome);
	printf("Materia avaliada: \n");
	scanf("%s",&materia);
	
	printf("Digite as notas do aluno nos 4 bimestres: \n");
	for(i=0;i<1;i++)
	for(j=1;j<5;j++){
		printf("Nota do bimestre %d: \n",j);
		scanf("%f",&matriz[i][j]);
		soma = soma + matriz[i][j];
	}
	printf("------- Resultado do Boletim ---------------\n\n");

	media=soma/4;
	printf("Aluno %s com media %.2f na disciplina %s ",nome,media,materia);
	 if(media>=7){
	 	printf("foi Aprovado.\n");
	 }
	 if(media<7 && media >= 4){
	 	printf("esta de Recuperacao.\n");
	 }
	 if(media<4){
	 	printf("foi Reprovado. \n");
	 }
	return 0;
}
