#include <stdio.h>

int main(){
	int a,b;
	for(a=1;a<=10;a++){
	printf("Tabla de multiplicar de el numero %d:\n",a);
	for(b=1;b<=10;b++){
		printf("%d x %d = %d\n",a,b,a*b);
	}
	printf("\n");
	}
	return 0;
}
