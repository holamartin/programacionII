#include <stdio.h>

int main(){
	int num,d,a=0;
	printf("Ingrese un numero entero de 3 digitos:");
	scanf("%d",&num);
	
	d=num%10;
	if(d==1){
		a=1;
	}
	num/=10;
	d=num/10;
	if(d==1){
		a=1;
	}
	num/=10;
	d=num/10;
	if(d==1){
		a=1;}
		
		if(a){
			printf("El numero ingresado si tiene digito 1\n");
			
		}
		else{
			printf("El numero ingresado no tiene el digito 1");
		}
	
}
