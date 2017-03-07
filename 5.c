#include <stdio.h>

int main(){
	int i, sum = 0;
	int mean[] = {1,2,3,4,5};
	
	for(i=0;i<5;i++){
		sum = sum  + mean[i];
	}
	int length;
	length = ( sizeof(mean) / sizeof(mean[0]) );
	sum = sum / length;
	
	printf("ензб = %d\n", sum);
	
	return 0;
}
