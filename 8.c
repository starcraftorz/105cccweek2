#include <stdio.h>
#include <math.h>

int main(){
	int map[] = {1,4,9};
	int i, sum;
	
	for(i=0;i<sizeof(map)/sizeof(map[0]);i++){
		sum = sqrt(map[i]);
		printf("map[%d] = %d\n", i, sum);
	}
	
	return 0;
}
