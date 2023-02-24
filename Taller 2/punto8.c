#include <stdio.h>
//8. Mostrar en pantalla todos los pares comprendidos entre 20 y 200.
int main(){
	int n1,n2;
	printf("Escriba el numero 20 porfi: \n");
	scanf("%d", &n1);
	printf("Escriba el numero 200 porfi: \n");
	scanf("%d", &n2);
	
	
	n1=20;
	n2=200;
	
	for(int i=1; i<=n2;i++){
			printf("%d\n", i);
		}
	return 0;
}
