//Punto 7 Taller 3 pasar a mayuscula
#include <stdio.h>

char mayus(char c){if(islower(c)){return c-('a' - 'A');}
else{return c;}}

int main(){
    char c;
    printf(" Escriba una letra que quiera pasar a mayuscula: ");
    scanf("%c",&c);
    char Mayuscula=mayus(c);
    printf("El caracter %c que pidio, en mayuscula es: %c \n", c, Mayuscula);
    return 0;
}

