#include <stdio.h>
//11. Leer un n�mero entero de dos d�gitos y mostrar en pantalla todos los enteros comprendidos entre un d�gito
//y otro.

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
