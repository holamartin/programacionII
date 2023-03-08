#include <stdio.h>

int main(){
	int n1,n2,a,b,p;
	printf("Ingrese dos numeros: ");
	scanf("%d%d",&n1,&n2);
	a=n1/10;
	b=n2/10;
	p=a*b;
	printf("El producto de los dos numeros es: %d\n",p);
	return 0;	
}
