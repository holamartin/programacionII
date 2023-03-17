//Punto 1 Taller 3
#include <stdio.h>

float p (float num, int exponente){
    float resultado = 1;
    int i;
    if (exponente >= 0) {
        for (i = 0; i < exponente; i++){resultado *= num;}
    } else {
        for (i = 0; i > exponente; i--){resultado /= num;}}
    return resultado;
}

int main() {
	 float num;
	 int exponente;
	printf("Ingrese un numero: ");
	scanf("%f",&num);
	printf("Ingrese la potencia en entero: ");
	scanf("%d",&exponente);
    float resultado=p(num, exponente);
    printf("%.0f elevado a la %d es: %.0f\n", num, exponente, resultado);
    return 0;
}

