#include <stdio.h>
// 22. Leer un n�mero entero y determinar cu�ntas veces tiene el d�gito 1.
int main(){
	
    int num, count = 0, digito;

    printf("Escriba algun numero entero: ");
    scanf("%d", &num);

    while (num > 0) {
        digito = num % 10;
        if (digito == 1) {
            count++;
        }
        num /= 10;
    }

    printf("El digito 1 aparece %d veces\n", count);

    return 0;
}

