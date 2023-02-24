#include <stdio.h>

int main(){
	
    int numero,d,m=0;
    
    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);
    
    while(numero>0){
        d=numero % 10;
        if(d>m){m=d;}
        numero/=10;}
    printf("El mayor digito del numero es: %d", m);    
    return 0;
}

