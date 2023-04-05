#include <stdio.h>
#define MAX_N 100

int main() {
    int numeros[MAX_N];
    int menores_10 = 0, entre_10_y_30 = 0, entre_31_y_60 = 0, mayores_60 = 0;
    int i;

    printf("Ingrese 100 numeros enteros:\n");
    for (i = 0; i < MAX_N; i++) {
        scanf("%d", &numeros[i]);

        if (numeros[i] < 10) {
            menores_10++;
        } else if (numeros[i] >= 10 && numeros[i] <= 30) {
            entre_10_y_30++;
        } else if (numeros[i] >= 31 && numeros[i] <= 60) {
            entre_31_y_60++;
        } else {
            mayores_60++;
        }
    }

    printf("Resultados:\n");
    printf("Cantidad de numeros menores a 10: %d\n", menores_10);
    printf("Cantidad de numeros entre 10 y 30: %d\n", entre_10_y_30);
    printf("Cantidad de numeros entre 31 y 60: %d\n", entre_31_y_60);
    printf("Cantidad de numeros mayores a 60: %d\n", mayores_60);

    return 0;
}
