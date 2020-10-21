#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int main(){
	int j,l,r[10], m[10];
	
	for(j=0;j<10;j++) {
	
	r[j] = j;
		printf("valor up %d \n",r[j]);
}
	// vai contar negativo
	for(l=10;l>0;l--){
	m[l] = l;
	
	printf("valor down %d \n",m[l]);
}
	return 0;
}
