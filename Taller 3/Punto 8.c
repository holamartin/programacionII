//Punto 8 Taller 3 minus
#include <stdio.h>

char minus(char c){if(isupper(c)){return c+('a' - 'A');} 

else{return c;}}

int main() {
    char c='B';
    char Minuscula=minus(c);

    printf("El caracter '%c' en  minuscula es '%c' \n", c, Minuscula);
    return 0;
}
