#include <stdio.h>
//4. Leer dos números y mostrar todos los enteros comprendidos entre ellos.
int main(){
	int n1,n2,i;
	printf("Ingrese un numero entero: \n");
	scanf("%d", &n1);
	printf("Ingrese otro numero:\n");
	scanf("%d", &n2);
	
	
	for(int i=1;i>=n1;i++){
			printf("%d\n", i);
		}
	return 0;
}
