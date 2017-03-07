#include <stdio.h>

int main(){
	int i, sum = 1;
	
	for(i=1;i<=10;i++){
		sum = sum * i;
	}
	
	printf("10! = %d\n", sum);
	return 0;
} 
