//Punto 4 ascii num
#include <stdio.h>

int Ascii(char a){return(int)a;}
int main(){
	char a='?';
	int b=Ascii(a);
	printf(" El caracter de '%c' en la tabla de ASCII es el numero %d ",a,b);
	return 0;
}
