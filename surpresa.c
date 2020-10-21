#include <stdio.h>
#include <time.h>
#include <windows.h>

int main() {
	int cont=0, f=9000, t=1000;
	while (cont<=1000){
		printf("%d\n",cont);
		cont++;
		Sleep(5);
		Beep(f,t);
		f--;
		t--;
	}
	return 0;
} 
