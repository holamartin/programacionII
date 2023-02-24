#include <stdio.h>

int main(){
	
    int num,suma=0,c=0,promedio;

    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    while (num>0){
        suma+=num%10;
        c++;
        num/=10;}

    if (c>0){
        promedio=suma/c;
        printf("El promedio entero es: %d\n", promedio);}
    return 0;
}

