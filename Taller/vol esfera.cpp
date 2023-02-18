#include <stdio.h>

int main (){
	
	float r,v,area;
	printf("Ingrese el radio de la esfera: ");
	scanf("%f", &r);
	
	v=((4/3)*3.141592*(r*r*r));
	area=4*3.141592*(r*r);
	
	printf("El volumen  de la esfera es : %f\n", v);
    printf("El area de la esfera es: %f\n ", area);
    
    return 0;
}
