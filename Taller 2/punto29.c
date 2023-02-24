#include <stdio.h>

int main(){
	
    int num,d1;
    
    printf("Ingrese un numero entero: ");
    scanf("%d",&num);
    while(num>=10){num/=10;}
    d1= num;
    printf("El primer digito del numero es: %d", d1);
    return 0;
}

