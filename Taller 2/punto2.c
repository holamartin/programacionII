#include <stdio.h>
//Leer un número entero y mostrar todos los pares comprendidos entre 1 y el número leído.

int main(){
	int number;
	printf("Ingrese un numero entero: \n");
	scanf("%d", &number);
	
	for(int i=1; i<=number;i++){
		if(i%2==0){
			printf("par %d\n", i);
		}
	
	}
	return 0;
}
