#include <stdio.h>

int factorial(int i){
	int n, sum = 1;
	
	for(n=1;n<=i;n++){
		sum = sum * n;
	}
	
	return sum;
}

int main(){
	int i;
	
	printf("�п�J�Ʀr:");
	scanf("%d", &i);
	
	printf("%d! = %d\n", i, factorial(i));
	return 0;
}
