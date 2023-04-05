#include <stdio.h>

#define MAX_N 50

int main() {
    int v1[MAX_N], v2[MAX_N], v3[MAX_N];
    int n, i, num;

    int count_v1 = 0, count_v2 = 0, count_v3 = 0;

    printf("Ingrese la cantidad de numeros que desea ingresar (maximo 50): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Ingrese un numero: ");
        scanf("%d", &num);

        if (num >= 0 && num <= 10) {
            v1[count_v1] = num;
            count_v1++;
        } else if (num >= 11 && num <= 20) {
            v2[count_v2] = num;
            count_v2++;
        } else if (num > 20) {
            v3[count_v3] = num;
            count_v3++;
        }
    }

    printf("Los numeros ingresados en el vector V1 son:\n");
    for (i = 0; i < count_v1; i++) {
        printf("%d ", v1[i]);
    }

    printf("\nLos numeros ingresados en el vector V2 son:\n");
    for (i = 0; i < count_v2; i++) {
        printf("%d ", v2[i]);
    }

    printf("\nLos numeros ingresados en el vector V3 son:\n");
    for (i = 0; i < count_v3; i++) {
        printf("%d ", v3[i]);
    }

    return 0;
}
