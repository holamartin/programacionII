#include <stdio.h>
//1. Leer un n�mero entero y mostrar todos los enteros comprendidos entre 1 y el n�mero le�do.

int main(){
	int number;
	printf("Ingrese un numero entero: \n");
	scanf("%d", &number);
	printf("los enteros son:\n");
	
	for(int i=1; i<=number;i++){
			printf("%d\n", i);
		}
	return 0;
}
