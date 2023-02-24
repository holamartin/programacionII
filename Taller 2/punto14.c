#include <stdio.h>
//14. Mostrar en pantalla los primeros 20 múltiplos de 3.

int main(){
	
 int multiplotres=0;
 int contadormultiplotres=0;
 do{
 	printf("Los primeros 20 multiplos de 3 son: {0}",multiplotres);
 	contadormultiplotres=contadormultiplotres+1;
 }
 while (multiplotres<63);
 printf("El numero de multiplos de tres son: {0}",contadormultiplotres);
	return 0;
}
