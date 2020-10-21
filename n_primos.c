#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, k=1, primo;

    for(n=2; n<=100; n++){
        primo=0;
        for(k=1; k<=n; k++)
            if((n%k)==0)
                 primo++;
        if(primo>2)
           printf("---");
        else
            printf("%d e primo\n",n);
            //Sleep(2);
            primo=0;
    }
   

	

	return 0;
}


