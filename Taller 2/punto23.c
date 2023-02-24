#include <stdio.h>
// 23. Leer un número entero y determinar si la suma de sus dígitos es también un número primo.
int main(){
    int i,num,p=1,s=0;

    printf("Teclee un numero entero: ");
    scanf("%d", &num);

    while (num > 0){
        s+= num % 10;
        num /= 10;
    }

    for (i = 2; i < s; i++){
        if (s%i== 0) {
            p= 0;
            break;
        }
    }

    if (p==1){
        printf("La suma  (%d) es un numero primo.\n", s);
    } else {
        printf("La suma(%d) NO es un numero primo.\n", s);
    }

    return 0;
}

