#include <stdio.h>

#define MAX_N 20

int main() {
    int numeros[MAX_N];
    int i, buscar_num, posicion = -1;
    printf("                       Bienvenido al programa que le mostrara la posicion del numero buscado\n\n");
    printf("Porfavor ingrese 20 numeros:\n");
    for (i = 0; i < MAX_N; i++) {
        scanf("%d", &numeros[i]);
    }
    printf("Ingrese el numero que quiere buscar:\n");
    scanf("%d", &buscar_num);
    for (i = 0; i < MAX_N; i++) {
        if (numeros[i] == buscar_num) {
            posicion = i;
            break;
        }
    }
    if (posicion != -1) {
        printf("El numero %d se encuentra en la posicion %d del vector\n", buscar_num, posicion);
    } else {
        printf("El numero %d no esta en el vector :c\n", buscar_num);
    }

    return 0;
}
