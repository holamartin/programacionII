#include <stdio.h>

int main(){
	int n=0,n2=1,f;
	printf("A continuacion se mostrara la serie de finonacci hasta un numero mayor que 10 mil: \n");
	printf("%d\n%d\n",n,n2);
	while (n2<=10000){
		f=n+n2;
		printf("%d\n",f);
		n=n2;
		n2=f;
	}
	return 0;
}
