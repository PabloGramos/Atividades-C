#include<stdio.h>
#include<time.h>

int main(){
	void sleep(unsigned int mseconds)
{
	clock_t goal = mseconds + clock();
	while (goal > clock());
}
	int x;
	for(x=0;x<=100;x++)
	if(x%2==0){
		printf("sou um numero par %d\n", x);
		sleep(1000);
		
		x++;
	}
	system("pause");
	return 0;
}
