#include <stdio.h>

int main(){
	
    int num1,num2,d1=0,d2=0;
    
    printf("Escriba el primer numero: ");
    scanf("%d",&n1);
    
    printf("Escriba el segundo numero: ");
    scanf("%d",&n2);
    
    while (n1!=0){
        d1++;
        n1/=10;
    }
    
    while(n!=0){d2++;n2/=10;}
    
    if (d1>d2){
        printf("El primer numero tiene mas digitos que el segundo\n");
    }else if(d2>d1){
        printf("El segundo numero tiene mas digitos que el primero\n");
    }else{
        printf("Los dos numeros tienen la misma cantidad de digitos\n");
    }
    
    return 0;
}

