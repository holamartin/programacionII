#include <stdio.h>

int main(){
	int num, cont=0,a=0;
	printf("Ingrese los numeros:\n");
	
	while(1){
		scanf("%d",&num);
		
		if(num==0){
			break;
		}
		if(num%10==5){
			cont++;
			a+=num;
		}
	}
	if (cont==0){
		printf("No hay numeros terminados en 5");
	} else{
		float promedio=(float)a/cont;
		printf("El promedio de los numeros terminados en 5 es %.2f\n");
		
	}
	return 0;
}
