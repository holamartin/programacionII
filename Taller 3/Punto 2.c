//Punto 2 Taller 3
#include <stdio.h>
#include <math.h>

double raiz(double a, double b){return pow(a,1.0/b);}
int main(){
    float a;
    float b;
    printf("_____________________________\n");
    printf("     Escriba un numero: ");
    scanf("%f", &a);
    printf("Ingrese la potencia a la que quiere en la raiz : ");
    scanf("%f", &b);
    float resultado=raiz(a, b);
    printf("La raiz %f de %f es: %f\n",b,a,resultado);
    printf("Hecho por Juan Camilo Martin Pino\n");
    return 0;
}

