#include <stdio.h>

int main(){
	int sum=0,p=0,c=1,a,con=0;
	while(c<=1000){
		sum=c;
		a=p+c;
		c=a;
		con++;
	}
	int avg=sum/con;
	printf("El promedio de la serie de Fibonacci es %d\n",avg);
	return 0;
}
