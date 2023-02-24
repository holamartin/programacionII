#include <stdio.h>

int main(){
	
    int num,i;    
    printf("Escriba un numero entero: ");
    scanf("%d",&num);
    printf("Los componentes numericos de %d son: ",num);
    for (i=1;i<=num;i++)
	{if(num%i==0){printf("%d", i);}}
    printf("\n");
    return 0;
}

