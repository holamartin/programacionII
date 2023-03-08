#include <stdio.h>

int main(){
	int n,i,f=1;
	
	printf("Ingrese un numero:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		f=i;
	}
	printf("El factorial de %d es %d\n",n,f);
}
