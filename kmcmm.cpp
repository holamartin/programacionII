#include <stdio.h>


int main()
{
	float m,km,cm;
	
	printf("Ingrese medida en metros\n");
	scanf("\n%f",&m);
	
	km=(m/1000);

	printf("La medida en km es: ");
    printf("%f km",km);
    
    cm=(m*10);
	printf("\nLa medida en cm es: ");
    printf("%f cm",cm);
	return 0;
}
