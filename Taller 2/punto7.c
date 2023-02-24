#include <stdio.h>
//7. Mostrar en pantalla todos los enteros comprendidos entre 1 y 100.
int main(){
	int numerito;
	printf("Ponga el numero 100 ome: \n");
	scanf("%d", &numerito);
	
	numerito=100;
	
	for(int i=1; i<=numerito;i++){
			printf("%d\n", i);
		}
	return 0;
}
