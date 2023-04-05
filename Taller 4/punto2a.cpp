#include <stdio.h>

#define MAX_N 50

int main() {
    int v1[MAX_N], v2[MAX_N], v3[MAX_N];
    int n, i;

    printf("Ingrese la cantidad de elementos de los vectores (maximo 50): ");
    scanf("%d", &n);

    printf("Ingrese los elementos del primer vector:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &v1[i]);
    }

    printf("Ingrese los elementos del segundo vector:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &v2[i]);
    }

    printf("El vector resultante de la suma del primer y segundo vector es:\n");
    for (i = 0; i < n; i++) {
        v3[i] = v1[i] + v2[i];
        printf("%d ", v3[i]);
    }

    return 0;
}
