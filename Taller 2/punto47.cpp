#include <stdio.h>

int main(){
	int n,a,b;
	int f=0,sum=0;
	printf("Ingrese un numero: ");
	scanf("%d",&n);
	
	for(a=1;a<=n;a++){
		f*=a;
		sum+=f;
		for(b=1;b<=a;b++){
			f=b;
		}
	}sum+=f;
    printf("La suma de los factoriales de los numeros entre 1 y %d es: %d\n",n,sum);
	return 0;	
}
