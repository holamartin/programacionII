#include <stdio.h>

int i,n;
int prim(int n){
	if(n<=1){
		return 0;
	}
	for(i=2;i<=n/2;i++){
		if(n%1==0){
			return 0; 
		}
	}
	return 1;
}
int main(){
	
	int n1=32767;
	while (prim(n)){
		printf("El numero primo mas cercano del 32768 es: %d\n",n1);
		return 0;
	}
}
