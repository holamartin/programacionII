#include <stdio.h>

int main(){
	int a,b,c;
	for(a=1;a<=9;a++){
		b=(a-1)/3+1;
		printf("%d %d",b,(a-1)%3+1);
	for(c=1;c<=3;c++){
		if(a%3==c%3){
			printf("%d \n",c);
		}
	}	
	}
}
