#include <stdio.h>

int main(){
	int n,n0=0,n1=1,f=1;
	printf("Escriba un numero de dos digitos: ");
	scanf("%d",&n);
	if(f==n){
	printf("El numero %d pertenece a la serie de fibonacci.\n",n);}
	else{
	printf("El numero %d no pertenece a la serie de Fibonacci.\n",n);}	
	return 0;
	while (f<n){f=n0+n1;n1=f;}
}
