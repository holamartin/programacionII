//Punto 6 rango
#include <stdio.h>

int num(int entero){
	if((entero<=255) && (entero>=0)){return 1;} 
    else{return 0;}}

int main(){
	int x;
	printf("Escriba un numero para ver si se encuentra entre 0 y 255: \n");
	scanf("%d",&x);
	if(num(x) ){
		printf("Si esta en este rango\n");
	}else{
	printf("No se encuentra dentro de el rango\n");
	}
	return 0;
}
