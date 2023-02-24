#include <stdio.h>
// 24. Leer un número entero y determinar a cuánto es igual la suma de sus dígitos pares.
int main(){
    int n,d,suma=0;

    printf("Ingrese un numero entero: ");
    scanf("%d", &n);

    while (n!=0){
        d=n%10;
        if (d%2==0){
            suma+=d;
        }
        n/=10;
    }

    printf("La suma de los digitos pares es %d \n", suma);

    return 0;
}

