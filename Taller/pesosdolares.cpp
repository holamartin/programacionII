#include <stdio.h>

int main(){
	
	float pesos,dolares,euros;
	
	dolares=(0.00021*1);
	euros=(0.00019*1);
	
	printf("Ingrese cantidad de dinero en pesos a convertir \n");
	scanf("%f",pesos);

	scanf("%f", dolares);
	scanf("%f", euros);
	printf("El valor de los pesos en dolares es = %f.", dolares);

	
	return 0;
	
}

