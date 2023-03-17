#include <stdio.h> 

int main(){
	
	float num1,bits,gigabytes;
	printf("Ingrese cuantos kilobytes quiere convertir en bits o en gigabytes:");
	scanf("%f", &num1);
	
	bits =  num1/1000000;
	gigabytes =  num1*8000;
	
	printf("la conversion de bits es: %f\n", bits);
	printf("la conversion de gigabytes es:  %f\n", gigabytes);
	
	return 0;
	
	
	
}
