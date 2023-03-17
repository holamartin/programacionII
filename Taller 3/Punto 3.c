//Punto 3 Taller 3 ascii
#include <stdio.h>

char tab(int n){return(char)n;}

int main(){
	int n;
	char a=tab(n);
    printf("                        __________Bienvenido_________               \n");
    printf("                                      \n");
	printf(" Ingrese un numero para ver el caracter perteneciente a la tabla de ASCII: ");
	scanf("%d", &n);
	printf("El numero %d en la tabla ASCII es el caracter '%c' \n", n,a);
	return 0;
}
