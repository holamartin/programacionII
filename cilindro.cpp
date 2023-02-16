#include <stdio.h>
int main()
{
	float pi=3.1416;
	float a,b,c,d;
	
	printf("Se va a calcular el volumen del cilindro en metros cubicos a continuacion\n");
	printf("Ingrese el diametro\n");
	scanf("%f",&a);
	printf("Ingrese la altura\n");
	scanf("%f",&b);
	c=a/2;
	d=pi*(c,2)*b;
	printf("\nEl volumen del cilindro es %f metros cubicos",d);
	return 0;
}
