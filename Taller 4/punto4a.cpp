#include <stdio.h>
#define MAX_N 100

int main() {
    int numeros[MAX_N];
    int i;
    for (i = 0; i < MAX_N; i++) {
        numeros[i] = i + 1;
    }

    printf("сс A continuacion los primeros numeros del 100 al 1 orden descendente сс :\n");
    for (i = MAX_N - 1; i >= 0; i--) {
        printf("%d - ", numeros[i]);
    }
    printf("\n");
    return 0;
}
